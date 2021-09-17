enum ANIMATIONSPARTS {
 TAS_EXPAND = 1,
 TAS_COLLAPSE = 2,
 TAS_REPOSITION = 3,
 TAS_FADEIN = 4,
 TAS_FADEOUT = 5,
 TAS_ADDTOLIST = 6,
 TAS_DELETEFROMLIST = 7,
 TAS_ADDTOGRID = 8,
 TAS_DELETEFROMGRID = 9,
 TAS_ADDTOSEARCHGRID = 10,
 TAS_DELETEFROMSEARCHGRID = 11,
 TAS_ADDTOSEARCHLIST = 12,
 TAS_DELETEFROMSEARCHLIST = 13,
 TAS_SHOWEDGEUI = 14,
 TAS_SHOWPANEL = 15,
 TAS_HIDEEDGEUI = 16,
 TAS_HIDEPANEL = 17,
 TAS_SHOWPOPUP = 18,
 TAS_HIDEPOPUP = 19,
 TAS_POINTERDOWN = 20,
 TAS_POINTERUP = 21,
 TAS_DRAGSOURCESTART = 22,
 TAS_DRAGSOURCEEND = 23,
 TAS_TRANSITIONCONTENT = 24,
 TAS_REVEAL = 25,
 TAS_HIDE = 26,
 TAS_DRAGBETWEENENTER = 27,
 TAS_DRAGBETWEENLEAVE = 28,
 TAS_SWIPESELECT = 29,
 TAS_SWIPEDESELECT = 30,
 TAS_SWIPEREVEAL = 31,
 TAS_ENTERPAGE = 32,
 TAS_TRANSITIONPAGE = 33,
 TAS_CROSSFADE = 34,
 TAS_PEEK = 35,
 TAS_UPDATEBADGE = 36,
};
enum EXPANDSTATES {
 TA_EXPAND_AFFECTED = 1,
 TA_EXPAND_REVEALED = 2,
};
enum COLLAPSESTATES {
 TA_COLLAPSE_HIDDEN = 1,
 TA_COLLAPSE_AFFECTED = 2,
};
enum REPOSITIONSTATES {
 TA_REPOSITION_TARGET = 1,
};
enum FADEINSTATES {
 TA_FADEIN_SHOWN = 1,
};
enum FADEOUTSTATES {
 TA_FADEOUT_HIDDEN = 1,
};
enum ADDTOGRIDSTATES {
 TA_ADDTOGRID_ADDED = 1,
 TA_ADDTOGRID_AFFECTED = 2,
 TA_ADDTOGRID_ROWOUT = 3,
 TA_ADDTOGRID_ROWIN = 4,
};
enum DELETEFROMGRIDSTATES {
 TA_DELETEFROMGRID_DELETED = 1,
 TA_DELETEFROMGRID_REMAINING = 2,
 TA_DELETEFROMGRID_ROWOUT = 3,
 TA_DELETEFROMGRID_ROWIN = 4,
};
enum ADDTOLISTSTATES {
 TA_ADDTOLIST_ADDED = 1,
 TA_ADDTOLIST_AFFECTED = 2,
};
enum DELETEFROMLISTSTATES {
 TA_DELETEFROMLIST_DELETED = 1,
 TA_DELETEFROMLIST_REMAINING = 2,
};
enum ADDTOSEARCHGRIDSTATES {
 TA_ADDTOSEARCHGRID_ADDED = 1,
 TA_ADDTOSEARCHGRID_AFFECTED = 2,
 TA_ADDTOSEARCHGRID_ROWOUT = 3,
 TA_ADDTOSEARCHGRID_ROWIN = 4,
};
enum DELETEFROMSEARCHGRIDSTATES {
 TA_DELETEFROMSEARCHGRID_DELETED = 1,
 TA_DELETEFROMSEARCHGRID_REMAINING = 2,
 TA_DELETEFROMSEARCHGRID_ROWOUT = 3,
 TA_DELETEFROMSEARCHGRID_ROWIN = 4,
};
enum ADDTOSEARCHLISTSTATES {
 TA_ADDTOSEARCHLIST_ADDED = 1,
 TA_ADDTOSEARCHLIST_AFFECTED = 2,
};
enum DELETEFROMSEARCHLISTSTATES {
 TA_DELETEFROMSEARCHLIST_DELETED = 1,
 TA_DELETEFROMSEARCHLIST_REMAINING = 2,
};
enum SHOWEDGEUISTATES {
 TA_SHOWEDGEUI_TARGET = 1,
};
enum HIDEEDGEUISTATES {
 TA_HIDEEDGEUI_TARGET = 1,
};
enum SHOWPANELSTATES {
 TA_SHOWPANEL_TARGET = 1,
};
enum HIDEPANELSTATES {
 TA_HIDEPANEL_TARGET = 1,
};
enum SHOWPOPUPSTATES {
 TA_SHOWPOPUP_TARGET = 1,
};
enum HIDEPOPUPSTATES {
 TA_HIDEPOPUP_TARGET = 1,
};
enum POINTERDOWNSTATES {
 TA_POINTERDOWN_TARGET = 1,
};
enum POINTERUPSTATES {
 TA_POINTERUP_TARGET = 1,
};
enum DRAGSOURCESTARTSTATES {
 TA_DRAGSOURCESTART_DRAGSOURCE = 1,
 TA_DRAGSOURCESTART_AFFECTED = 2,
};
enum DRAGSOURCEENDSTATES {
 TA_DRAGSOURCEEND_DRAGSOURCE = 1,
 TA_DRAGSOURCEEND_AFFECTED = 2,
};
enum TRANSITIONCONTENTSTATES {
 TA_TRANSITIONCONTENT_INCOMING = 1,
 TA_TRANSITIONCONTENT_OUTGOING = 2,
};
enum REVEALSTATES {
 TA_REVEAL_BACKGROUND = 1,
 TA_REVEAL_CONTENT = 2,
 TA_REVEAL_OUTLINE = 3,
 TA_REVEAL_TAPPED = 4,
};
enum HIDESTATES {
 TA_HIDE_BACKGROUND = 1,
 TA_HIDE_CONTENT = 2,
 TA_HIDE_OUTLINE = 3,
 TA_HIDE_TAPPED = 4,
};
enum DRAGBETWEENENTERSTATES {
 TA_DRAGBETWEENENTER_AFFECTED = 1,
};
enum DRAGBETWEENLEAVESTATES {
 TA_DRAGBETWEENLEAVE_AFFECTED = 1,
};
enum SWIPESELECTSTATES {
 TA_SWIPESELECT_SELECTED = 1,
 TA_SWIPESELECT_SELECTION = 2,
};
enum SWIPEDESELECTSTATES {
 TA_SWIPEDESELECT_DESELECTED = 1,
 TA_SWIPEDESELECT_SELECTION = 2,
};
enum SWIPEREVEALSTATES {
 TA_SWIPEREVEAL_TARGET = 1,
};
enum ENTERPAGESTATES {
 TA_ENTERPAGE_TARGET = 1,
};
enum TRANSITIONPAGESTATES {
 TA_TRANSITIONPAGE_INCOMING = 1,
 TA_TRANSITIONPAGE_OUTGOING = 2,
};
enum CROSSFADESTATES {
 TA_CROSSFADE_INCOMING = 1,
 TA_CROSSFADE_OUTGOING = 2,
};
enum PEEKSTATES {
 TA_PEEK_TARGET = 1,
};
enum UPDATEBADGESTATES {
 TA_UPDATEBADGE_INCOMING = 1,
 TA_UPDATEBADGE_OUTGOING = 2,
};
enum TIMINGFUNCTIONPARTS {
 TATF_LINEAR = 1,
 TATF_EASEIN = 2,
 TATF_EASEOUT = 3,
 TATF_FASTIN = 4,
 TATF_EXPONENTIAL = 5,
 TATF_FASTINFORTYSEVENPERCENT = 6,
};
