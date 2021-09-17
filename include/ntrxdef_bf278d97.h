        IoAllocateMdl( Buffer, BufferSize, FALSE, FALSE, NULL )
        Status = STATUS_SUCCESS; \
        try { \
           MmProbeAndLockPages((Mdl), (Mode), (Access)); \
        } except (EXCEPTION_EXECUTE_HANDLER) { \
           Status = GetExceptionCode(); \
        }
            MmInitializeMdl( Mdl, Va, Len ); \
            if (Mdl->ByteOffset >= TRANSPORT_HEADER_SIZE) { \
                Mdl->MdlFlags |= MDL_NETWORK_HEADER; \
            } \
        }
            Mdl = RxAllocateMdl( Buffer, BufferSize ); \
            if ((Mdl) && (Mdl->ByteOffset >= TRANSPORT_HEADER_SIZE) ) { \
                SetFlag( Mdl->MdlFlags, MDL_NETWORK_HEADER ); \
            } \
        }
    IoBuildPartialMdl( SourceMdl, TargetMdl, Va, Len ); \
    if (FlagOn(SourceMdl->MdlFlags, MDL_NETWORK_HEADER ) && \
        (TargetMdl->ByteOffset >= TRANSPORT_HEADER_SIZE)) { \
            SetFlag( TargetMdl->MdlFlags, MDL_NETWORK_HEADER ); \
    } \
}
         RxProbeAndLockPages( Mdl, Mode, Access, Status )
      PRX_CONTEXT RxContext
      RxContext
        if ((FCB)->Header.FileSize.QuadPart > (FCB)->Header.AllocationSize.QuadPart) { \
            PMRX_NET_ROOT NetRoot = (FCB)->pNetRoot; \
            ULONGLONG ClusterSize = NetRoot->DiskParameters.ClusterSize; \
            ULONGLONG FileSize = (FCB)->Header.FileSize.QuadPart; \
            ASSERT(ClusterSize!=0); \
            (FCB)->Header.AllocationSize.QuadPart = (FileSize+ClusterSize)&~(ClusterSize-1); \
        } \
        ASSERT ( (FCB)->Header.ValidDataLength.QuadPart <= (FCB)->Header.FileSize.QuadPart ); \
    }
