       
                                                (x) <= ES_GENERAL_ERROR_END)
                                                (x) <= ES_AUTHN_ERROR_END)
                                                (x) <= ES_PW_SILO_ERROR_END)
                                                (x) <= ES_VENDOR_ERROR_END)
                                                 (x) <= ES_RESERVED_SILO_ERROR_END) || \
                                                ((x) >= ES_RESERVED_SILO_SPECIFIC_ERROR_START && \
                                                 (x) <= ES_RESERVED_SILO_SPECIFIC_ERROR_END) || \
                                                ((x) >= ES_RESERVED_COM_ERROR_START && \
                                                 (x) <= ES_RESERVED_COM_ERROR_END))
