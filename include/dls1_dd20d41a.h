#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _DLSID {
  ULONG ulData1;
  USHORT usData2;
  USHORT usData3;
  BYTE abData4[8];
} DLSID, FAR *LPDLSID;
typedef struct _DLSVERSION {
  DWORD dwVersionMS;
  DWORD dwVersionLS;
}DLSVERSION, FAR *LPDLSVERSION;
typedef struct _CONNECTION {
  USHORT usSource;
  USHORT usControl;
  USHORT usDestination;
  USHORT usTransform;
  LONG lScale;
  }CONNECTION, FAR *LPCONNECTION;
typedef struct _CONNECTIONLIST {
  ULONG cbSize;
  ULONG cConnections;
  } CONNECTIONLIST, FAR *LPCONNECTIONLIST;
typedef struct _RGNRANGE {
  USHORT usLow;
  USHORT usHigh;
}RGNRANGE, FAR * LPRGNRANGE;
typedef struct _MIDILOCALE {
  ULONG ulBank;
  ULONG ulInstrument;
}MIDILOCALE, FAR *LPMIDILOCALE;
typedef struct _RGNHEADER {
  RGNRANGE RangeKey;
  RGNRANGE RangeVelocity;
  USHORT fusOptions;
  USHORT usKeyGroup;
}RGNHEADER, FAR *LPRGNHEADER;
typedef struct _INSTHEADER {
  ULONG cRegions;
  MIDILOCALE Locale;
}INSTHEADER, FAR *LPINSTHEADER;
typedef struct _DLSHEADER {
  ULONG cInstruments;
}DLSHEADER, FAR *LPDLSHEADER;
typedef struct _WAVELINK {
  USHORT fusOptions;
  USHORT usPhaseGroup;
  ULONG ulChannel;
  ULONG ulTableIndex;
}WAVELINK, FAR *LPWAVELINK;
typedef struct _POOLCUE {
  ULONG ulOffset;
}POOLCUE, FAR *LPPOOLCUE;
typedef struct _POOLTABLE {
  ULONG cbSize;
  ULONG cCues;
  } POOLTABLE, FAR *LPPOOLTABLE;
typedef struct _rwsmp {
  ULONG cbSize;
  USHORT usUnityNote;
  SHORT sFineTune;
  LONG lAttenuation;
  ULONG fulOptions;
  ULONG cSampleLoops;
  } WSMPL, FAR *LPWSMPL;
typedef struct _rloop {
  ULONG cbSize;
  ULONG ulType;
  ULONG ulStart;
  ULONG ulLength;
} WLOOP, FAR *LPWLOOP;
#endif
#pragma endregion
