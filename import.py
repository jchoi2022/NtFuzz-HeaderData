import string
import hashlib
import os
import shutil
import subprocess
import re

version = "10.0.18362.0"
src_dir = "/mnt/c/Program Files (x86)/Windows Kits/10/Include/%s" % version
out_dir = "./include"
ctags_file = "./ctags.txt"

def mkdir(path) :
    if not os.path.exists(path):
        os.makedirs(path)

def copy_header_file(dir_path, f):
    if not f.endswith(".h"):
        return

    print "Copying file %s" % f
    src_path = os.path.join(dir_path, f)
    identifier = hashlib.md5(dir_path).hexdigest()[:8]
    dst_file = "%s_%s.h" % (f[:-2], identifier)
    tmp_file = "%s_%s_tmp.h" % (f[:-2], identifier)
    dst_path = os.path.join(out_dir, dst_file)
    tmp_path = os.path.join(out_dir, tmp_file)
    # First, copy to temporary path.
    shutil.copy(src_path, tmp_path)

    # Before start processing, apply patches to fix macros that coan cannot
    # correctly handle.
    if tmp_file.startswith("winnt_"): # Remove 'if ! defined(lint)'
        os.system("patch %s < winnt.patch" % tmp_path)
    if tmp_file.startswith("wdm_"): # Fix trailing '\' character in macro.
        os.system("patch %s < wdm.prepatch" % tmp_path)

    # Now, remove macro. Note that we fixed the behavior of '--implicit'
    # option in scan, to maintain as much definitions as possible.
    conf = "-DWINVER=0xffff -D_WIN32_WINNT=0xffff -D_WIN32_WINDOWS=0xffff " + \
           "-D_AMD64_ -D_WIN64 "
    cmd = "coan source -ge %s --implicit --replace %s" % (conf, tmp_path)
    os.system(cmd)

    # Finally, remove comment and '#define' macros.
    cmd = "gcc -fpreprocessed -E -P %s > %s 2>/dev/null" % (tmp_path, dst_path)
    os.system(cmd)
    # Now clean up temporary file.
    os.remove(tmp_path)

    # Lastly, apply patches to remove lines that ctags cannot correctly handle.
    # This issue occurs because gcc with '-fpreprocessed' option does not
    # process newline splicing with '\' at the end of line.
    if tmp_file.startswith("ntdef_"): # Fix trailing '\' character in macro.
        os.system("patch %s < ntdef.patch" % dst_path)
    if tmp_file.startswith("wdm_"): # Fix trailing '\' character in macro.
        os.system("patch %s < wdm.postpatch" % tmp_path)
    if tmp_file.startswith("ntifs_"): # Fix trailing '\' character in macro.
        os.system("patch %s < ntifs.postpatch" % tmp_path)

# Clean up before starting.
shutil.rmtree(out_dir, ignore_errors = True)
mkdir(out_dir)

# First, copy header files, while removing comments and solving macros.
for path, dirs, files in os.walk(src_dir):
    for file in files:
        copy_header_file(path, file)

# Remove DECLSPEC_ALIGN keyword, which is not properly handled by ctags.
cmd = "sed -i 's/DECLSPEC_ALIGN([^)]*)//g' %s/*.h" % out_dir
os.system(cmd)

# Extract prototype, struct, and typedef.
cmd = "ctags -x --tag-relative --c-kinds=psugt %s/*.h>%s" % (out_dir,ctags_file)
os.system(cmd)

