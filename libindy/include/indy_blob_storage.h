#ifndef __indy__blob_storage__included__
#define __indy__blob_storage__included__

#ifdef __cplusplus
extern "C" {
#endif


    extern indy_error_t indy_blob_storage_open_reader(indy_handle_t  command_handle,
                                                      const char*    type_,
                                                      const char*    config_json,
                                                      const char*    location,
                                                      const char*    hash,
                                                      void           (*fn)(indy_handle_t xcommand_handle, indy_error_t err, indy_i32_t handle)
                                                     );


#ifdef __cplusplus
}
#endif

#endif
