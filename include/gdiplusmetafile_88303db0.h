#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
inline
Metafile::Metafile(
    IN HMETAFILE hWmf,
    IN const WmfPlaceableFileHeader * wmfPlaceableFileHeader,
    IN BOOL deleteWmf
    )
{
    GpMetafile * metafile = NULL;
    lastResult = DllExports::GdipCreateMetafileFromWmf(hWmf, deleteWmf,
                                                       wmfPlaceableFileHeader,
                                                       &metafile);
    SetNativeImage(metafile);
};
inline
Metafile::Metafile(
    IN HENHMETAFILE hEmf,
    IN BOOL deleteEmf
    )
{
    GpMetafile * metafile = NULL;
    lastResult = DllExports::GdipCreateMetafileFromEmf(hEmf, deleteEmf,
                                                       &metafile);
    SetNativeImage(metafile);
};
inline
Metafile::Metafile(IN const WCHAR* filename)
{
    GpMetafile * metafile = NULL;
    lastResult = DllExports::GdipCreateMetafileFromFile(filename,
                                                        &metafile);
    SetNativeImage(metafile);
};
inline
Metafile::Metafile(
    IN const WCHAR* filename,
    IN const WmfPlaceableFileHeader * wmfPlaceableFileHeader
    )
{
    GpMetafile * metafile = NULL;
    lastResult = DllExports::GdipCreateMetafileFromWmfFile(filename,
                                                           wmfPlaceableFileHeader,
                                                           &metafile);
    SetNativeImage(metafile);
};
inline
Metafile::Metafile(IN IStream* stream)
{
    GpMetafile * metafile = NULL;
    lastResult = DllExports::GdipCreateMetafileFromStream(stream,
                                                          &metafile);
    SetNativeImage(metafile);
};
inline
Metafile::Metafile(
    IN HDC referenceHdc,
    IN EmfType type,
    IN const WCHAR * description
    )
{
    GpMetafile * metafile = NULL;
    lastResult = DllExports::GdipRecordMetafile(
                    referenceHdc, type, NULL, MetafileFrameUnitGdi,
                    description, &metafile);
    SetNativeImage(metafile);
};
inline
Metafile::Metafile(
    IN HDC referenceHdc,
    IN const RectF & frameRect,
    IN MetafileFrameUnit frameUnit,
    IN EmfType type,
    IN const WCHAR * description
    )
{
    GpMetafile * metafile = NULL;
    lastResult = DllExports::GdipRecordMetafile(
                    referenceHdc, type, &frameRect, frameUnit,
                    description, &metafile);
    SetNativeImage(metafile);
};
inline
Metafile::Metafile(
    IN HDC referenceHdc,
    IN const Rect & frameRect,
    IN MetafileFrameUnit frameUnit,
    IN EmfType type,
    IN const WCHAR * description
    )
{
    GpMetafile * metafile = NULL;
    lastResult = DllExports::GdipRecordMetafileI(
                    referenceHdc, type, &frameRect, frameUnit,
                    description, &metafile);
    SetNativeImage(metafile);
};
inline
Metafile::Metafile(
    IN const WCHAR* fileName,
    IN HDC referenceHdc,
    IN EmfType type,
    IN const WCHAR * description
    )
{
    GpMetafile * metafile = NULL;
    lastResult = DllExports::GdipRecordMetafileFileName(fileName,
                    referenceHdc, type, NULL, MetafileFrameUnitGdi,
                    description, &metafile);
    SetNativeImage(metafile);
};
inline
Metafile::Metafile(
    IN const WCHAR* fileName,
    IN HDC referenceHdc,
    IN const RectF & frameRect,
    IN MetafileFrameUnit frameUnit,
    IN EmfType type,
    IN const WCHAR * description
    )
{
    GpMetafile * metafile = NULL;
    lastResult = DllExports::GdipRecordMetafileFileName(fileName,
                    referenceHdc, type, &frameRect, frameUnit,
                    description, &metafile);
    SetNativeImage(metafile);
};
inline
Metafile::Metafile(
    IN const WCHAR* fileName,
    IN HDC referenceHdc,
    IN const Rect & frameRect,
    IN MetafileFrameUnit frameUnit,
    IN EmfType type,
    IN const WCHAR * description
    )
{
    GpMetafile * metafile = NULL;
    lastResult = DllExports::GdipRecordMetafileFileNameI(fileName,
                    referenceHdc, type, &frameRect, frameUnit,
                    description, &metafile);
    SetNativeImage(metafile);
};
inline
Metafile::Metafile(
    IN IStream * stream,
    IN HDC referenceHdc,
    IN EmfType type,
    IN const WCHAR * description
    )
{
    GpMetafile * metafile = NULL;
    lastResult = DllExports::GdipRecordMetafileStream(stream,
                    referenceHdc, type, NULL, MetafileFrameUnitGdi,
                    description, &metafile);
    SetNativeImage(metafile);
};
inline
Metafile::Metafile(
    IN IStream * stream,
    IN HDC referenceHdc,
    IN const RectF & frameRect,
    IN MetafileFrameUnit frameUnit,
    IN EmfType type,
    IN const WCHAR * description
    )
{
    GpMetafile * metafile = NULL;
    lastResult = DllExports::GdipRecordMetafileStream(stream,
                    referenceHdc, type, &frameRect, frameUnit,
                    description, &metafile);
    SetNativeImage(metafile);
};
inline
Metafile::Metafile(
    IN IStream * stream,
    IN HDC referenceHdc,
    IN const Rect & frameRect,
    IN MetafileFrameUnit frameUnit,
    IN EmfType type,
    IN const WCHAR * description
    )
{
    GpMetafile * metafile = NULL;
    lastResult = DllExports::GdipRecordMetafileStreamI(stream,
                    referenceHdc, type, &frameRect, frameUnit,
                    description, &metafile);
    SetNativeImage(metafile);
};
inline Status
Metafile::GetMetafileHeader(
    IN HMETAFILE hWmf,
    IN const WmfPlaceableFileHeader * wmfPlaceableFileHeader,
    OUT MetafileHeader * header
    )
{
    return DllExports::GdipGetMetafileHeaderFromWmf(hWmf,
                                                    wmfPlaceableFileHeader,
                                                    header);
};
inline Status
Metafile::GetMetafileHeader(
    IN HENHMETAFILE hEmf,
    OUT MetafileHeader * header
    )
{
    return DllExports::GdipGetMetafileHeaderFromEmf(hEmf, header);
};
inline Status
Metafile::GetMetafileHeader(
    IN const WCHAR* filename,
    OUT MetafileHeader * header
    )
{
    return DllExports::GdipGetMetafileHeaderFromFile(filename, header);
};
inline Status
Metafile::GetMetafileHeader(
    IN IStream * stream,
    OUT MetafileHeader * header
    )
{
    return DllExports::GdipGetMetafileHeaderFromStream(stream, header);
};
inline Status
Metafile::GetMetafileHeader(
    OUT MetafileHeader * header
    ) const
{
    return SetStatus(DllExports::GdipGetMetafileHeaderFromMetafile(
                                          (GpMetafile *)nativeImage,
                                          header));
};
inline HENHMETAFILE
Metafile::GetHENHMETAFILE()
{
    HENHMETAFILE hEmf;
    SetStatus(DllExports::GdipGetHemfFromMetafile(
                              (GpMetafile *)nativeImage,
                              &hEmf));
    return hEmf;
};
inline Status
Metafile::PlayRecord(
    IN EmfPlusRecordType recordType,
    IN UINT flags,
    IN UINT dataSize,
    IN const BYTE * data
    ) const
{
    return SetStatus(DllExports::GdipPlayMetafileRecord(
                            (GpMetafile *)nativeImage,
                            recordType,
                            flags,
                            dataSize,
                            data));
};
inline Status
Metafile::SetDownLevelRasterizationLimit(
    IN UINT metafileRasterizationLimitDpi
    )
{
    return SetStatus(DllExports::
                     GdipSetMetafileDownLevelRasterizationLimit(
                            (GpMetafile *)nativeImage,
                            metafileRasterizationLimitDpi));
};
inline UINT
Metafile::GetDownLevelRasterizationLimit() const
{
    UINT metafileRasterizationLimitDpi = 0;
    SetStatus(DllExports::GdipGetMetafileDownLevelRasterizationLimit(
                            (GpMetafile *)nativeImage,
                            &metafileRasterizationLimitDpi));
    return metafileRasterizationLimitDpi;
};
inline UINT
Metafile::EmfToWmfBits(
    _In_ HENHMETAFILE hemf,
    _In_ UINT cbData16,
    _Out_writes_to_opt_(cbData16, return) LPBYTE pData16,
    _In_ INT iMapMode,
    _In_ INT eFlags
    )
{
    return DllExports::GdipEmfToWmfBits(
        hemf,
        cbData16,
        pData16,
        iMapMode,
        eFlags);
};
#endif
#pragma endregion
