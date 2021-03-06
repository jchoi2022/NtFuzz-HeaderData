#include "VSStyle.h"
enum BGTYPE {
 BT_IMAGEFILE = 0,
 BT_BORDERFILL = 1,
 BT_NONE = 2,
};
enum IMAGELAYOUT {
 IL_VERTICAL = 0,
 IL_HORIZONTAL = 1,
};
enum BORDERTYPE {
 BT_RECT = 0,
 BT_ROUNDRECT = 1,
 BT_ELLIPSE = 2,
};
enum FILLTYPE {
 FT_SOLID = 0,
 FT_VERTGRADIENT = 1,
 FT_HORZGRADIENT = 2,
 FT_RADIALGRADIENT = 3,
 FT_TILEIMAGE = 4,
};
enum SIZINGTYPE {
 ST_TRUESIZE = 0,
 ST_STRETCH = 1,
 ST_TILE = 2,
};
enum HALIGN {
 HA_LEFT = 0,
 HA_CENTER = 1,
 HA_RIGHT = 2,
};
enum CONTENTALIGNMENT {
 CA_LEFT = 0,
 CA_CENTER = 1,
 CA_RIGHT = 2,
};
enum VALIGN {
 VA_TOP = 0,
 VA_CENTER = 1,
 VA_BOTTOM = 2,
};
enum OFFSETTYPE {
 OT_TOPLEFT = 0,
 OT_TOPRIGHT = 1,
 OT_TOPMIDDLE = 2,
 OT_BOTTOMLEFT = 3,
 OT_BOTTOMRIGHT = 4,
 OT_BOTTOMMIDDLE = 5,
 OT_MIDDLELEFT = 6,
 OT_MIDDLERIGHT = 7,
 OT_LEFTOFCAPTION = 8,
 OT_RIGHTOFCAPTION = 9,
 OT_LEFTOFLASTBUTTON = 10,
 OT_RIGHTOFLASTBUTTON = 11,
 OT_ABOVELASTBUTTON = 12,
 OT_BELOWLASTBUTTON = 13,
};
enum ICONEFFECT {
 ICE_NONE = 0,
 ICE_GLOW = 1,
 ICE_SHADOW = 2,
 ICE_PULSE = 3,
 ICE_ALPHA = 4,
};
enum TEXTSHADOWTYPE {
 TST_NONE = 0,
 TST_SINGLE = 1,
 TST_CONTINUOUS = 2,
};
enum GLYPHTYPE {
 GT_NONE = 0,
 GT_IMAGEGLYPH = 1,
 GT_FONTGLYPH = 2,
};
enum IMAGESELECTTYPE {
 IST_NONE = 0,
 IST_SIZE = 1,
 IST_DPI = 2,
};
enum TRUESIZESCALINGTYPE {
 TSST_NONE = 0,
 TSST_SIZE = 1,
 TSST_DPI = 2,
};
enum GLYPHFONTSIZINGTYPE {
 GFST_NONE = 0,
 GFST_SIZE = 1,
 GFST_DPI = 2,
};
enum LINKPARTS {
 LP_HYPERLINK = 1,
};
enum HYPERLINKSTATES {
 HLS_NORMALTEXT = 1,
 HLS_LINKTEXT = 2,
};
enum EMPTYMARKUPPARTS {
 EMP_MARKUPTEXT = 1,
};
enum MARKUPTEXTSTATES {
 EMT_NORMALTEXT = 1,
 EMT_LINKTEXT = 2,
};
enum STATICPARTS {
 STAT_TEXT = 1,
};
enum PAGEPARTS {
 PGRP_UP = 1,
 PGRP_DOWN = 2,
 PGRP_UPHORZ = 3,
 PGRP_DOWNHORZ = 4,
};
enum MONTHCALPARTS {
 MC_BACKGROUND = 1,
 MC_BORDERS = 2,
 MC_GRIDBACKGROUND = 3,
 MC_COLHEADERSPLITTER = 4,
 MC_GRIDCELLBACKGROUND = 5,
 MC_GRIDCELL = 6,
 MC_GRIDCELLUPPER = 7,
 MC_TRAILINGGRIDCELL = 8,
 MC_TRAILINGGRIDCELLUPPER = 9,
 MC_NAVNEXT = 10,
 MC_NAVPREV = 11,
};
enum GRIDCELLBACKGROUNDSTATES {
 MCGCB_SELECTED = 1,
 MCGCB_HOT = 2,
 MCGCB_SELECTEDHOT = 3,
 MCGCB_SELECTEDNOTFOCUSED = 4,
 MCGCB_TODAY = 5,
 MCGCB_TODAYSELECTED = 6,
};
enum GRIDCELLSTATES {
 MCGC_HOT = 1,
 MCGC_HASSTATE = 2,
 MCGC_HASSTATEHOT = 3,
 MCGC_TODAY = 4,
 MCGC_TODAYSELECTED = 5,
 MCGC_SELECTED = 6,
 MCGC_SELECTEDHOT = 7,
};
enum GRIDCELLUPPERSTATES {
 MCGCU_HOT = 1,
 MCGCU_HASSTATE = 2,
 MCGCU_HASSTATEHOT = 3,
 MCGCU_SELECTED = 4,
 MCGCU_SELECTEDHOT = 5,
};
enum TRAILINGGRIDCELLSTATES {
 MCTGC_HOT = 1,
 MCTGC_HASSTATE = 2,
 MCTGC_HASSTATEHOT = 3,
 MCTGC_TODAY = 4,
 MCTGC_TODAYSELECTED = 5,
 MCTGC_SELECTED = 6,
 MCTGC_SELECTEDHOT = 7,
};
enum TRAILINGGRIDCELLUPPERSTATES {
 MCTGCU_HOT = 1,
 MCTGCU_HASSTATE = 2,
 MCTGCU_HASSTATEHOT = 3,
 MCTGCU_SELECTED = 4,
 MCTGCU_SELECTEDHOT = 5,
};
enum NAVNEXTSTATES {
 MCNN_NORMAL = 1,
 MCNN_HOT = 2,
 MCNN_PRESSED = 3,
 MCNN_DISABLED = 4,
};
enum NAVPREVSTATES {
 MCNP_NORMAL = 1,
 MCNP_HOT = 2,
 MCNP_PRESSED = 3,
 MCNP_DISABLED = 4,
};
enum CLOCKPARTS {
 CLP_TIME = 1,
};
enum CLOCKSTATES {
 CLS_NORMAL = 1,
 CLS_HOT = 2,
 CLS_PRESSED = 3,
};
enum TRAYNOTIFYPARTS {
 TNP_BACKGROUND = 1,
 TNP_ANIMBACKGROUND = 2,
};
enum TASKBARPARTS {
 TBP_BACKGROUNDBOTTOM = 1,
 TBP_BACKGROUNDRIGHT = 2,
 TBP_BACKGROUNDTOP = 3,
 TBP_BACKGROUNDLEFT = 4,
 TBP_SIZINGBARBOTTOM = 5,
 TBP_SIZINGBARRIGHT = 6,
 TBP_SIZINGBARTOP = 7,
 TBP_SIZINGBARLEFT = 8,
};
enum TASKBANDPARTS {
 TDP_GROUPCOUNT = 1,
 TDP_FLASHBUTTON = 2,
 TDP_FLASHBUTTONGROUPMENU = 3,
};
enum STARTPANELPARTS {
 SPP_USERPANE = 1,
 SPP_MOREPROGRAMS = 2,
 SPP_MOREPROGRAMSARROW = 3,
 SPP_PROGLIST = 4,
 SPP_PROGLISTSEPARATOR = 5,
 SPP_PLACESLIST = 6,
 SPP_PLACESLISTSEPARATOR = 7,
 SPP_LOGOFF = 8,
 SPP_LOGOFFBUTTONS = 9,
 SPP_USERPICTURE = 10,
 SPP_PREVIEW = 11,
 SPP_MOREPROGRAMSTAB = 12,
 SPP_NSCHOST = 13,
 SPP_SOFTWAREEXPLORER = 14,
 SPP_OPENBOX = 15,
 SPP_SEARCHVIEW = 16,
 SPP_MOREPROGRAMSARROWBACK = 17,
 SPP_TOPMATCH = 18,
 SPP_LOGOFFSPLITBUTTONDROPDOWN = 19,
};
enum MOREPROGRAMSTABSTATES {
 SPMPT_NORMAL = 1,
 SPMPT_HOT = 2,
 SPMPT_SELECTED = 3,
 SPMPT_DISABLED = 4,
 SPMPT_FOCUSED = 5,
};
enum SOFTWAREEXPLORERSTATES {
 SPSE_NORMAL = 1,
 SPSE_HOT = 2,
 SPSE_SELECTED = 3,
 SPSE_DISABLED = 4,
 SPSE_FOCUSED = 5,
};
enum OPENBOXSTATES {
 SPOB_NORMAL = 1,
 SPOB_HOT = 2,
 SPOB_SELECTED = 3,
 SPOB_DISABLED = 4,
 SPOB_FOCUSED = 5,
};
enum MOREPROGRAMSARROWSTATES {
 SPS_NORMAL = 1,
 SPS_HOT = 2,
 SPS_PRESSED = 3,
};
enum MOREPROGRAMSARROWBACKSTATES {
 SPSB_NORMAL = 1,
 SPSB_HOT = 2,
 SPSB_PRESSED = 3,
};
enum LOGOFFBUTTONSSTATES {
 SPLS_NORMAL = 1,
 SPLS_HOT = 2,
 SPLS_PRESSED = 3,
};
enum MENUBANDPARTS {
 MDP_NEWAPPBUTTON = 1,
 MDP_SEPERATOR = 2,
};
enum MENUBANDSTATES {
 MDS_NORMAL = 1,
 MDS_HOT = 2,
 MDS_PRESSED = 3,
 MDS_DISABLED = 4,
 MDS_CHECKED = 5,
 MDS_HOTCHECKED = 6,
};
