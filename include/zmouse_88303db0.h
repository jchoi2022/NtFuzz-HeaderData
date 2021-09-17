__inline HWND HwndMSWheel(
      PUINT puiMsh_MsgMouseWheel,
      PUINT puiMsh_Msg3DSupport,
      PUINT puiMsh_MsgScrollLines,
      PBOOL pf3DSupport,
      PINT piScrollLines
)
{
   HWND hdlMsWheel;
   hdlMsWheel = FindWindow(MSH_WHEELMODULE_CLASS, MSH_WHEELMODULE_TITLE);
   *puiMsh_MsgMouseWheel = RegisterWindowMessage(MSH_MOUSEWHEEL);
   *puiMsh_Msg3DSupport = RegisterWindowMessage(MSH_WHEELSUPPORT);
   *puiMsh_MsgScrollLines = RegisterWindowMessage(MSH_SCROLL_LINES);
   if (*puiMsh_Msg3DSupport)
      *pf3DSupport = (BOOL)SendMessage(hdlMsWheel, *puiMsh_Msg3DSupport, 0, 0);
   else
      *pf3DSupport = FALSE;
   if (*puiMsh_MsgScrollLines)
      *piScrollLines = (int)SendMessage(hdlMsWheel, *puiMsh_MsgScrollLines, 0, 0);
   else
      *piScrollLines = 3;
   return(hdlMsWheel);
}
