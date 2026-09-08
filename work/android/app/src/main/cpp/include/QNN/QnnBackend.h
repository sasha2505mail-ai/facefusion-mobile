#ifndef QNN_BACKEND_H
#define QNN_BACKEND_H

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    QNN_BACKEND_ERROR_NONE = 0,
    QNN_BACKEND_ERROR_UNSUPPORTED_PLATFORM = 1,
    QNN_BACKEND_ERROR_INVALID_ARGUMENT = 2
} Qnn_BackendError_t;

typedef void* Qnn_BackendHandle_t;
typedef void* Qnn_Config_t;

Qnn_BackendError_t QnnBackend_create(void* logger, const Qnn_Config_t** config, Qnn_BackendHandle_t* backendHandle);
Qnn_BackendError_t QnnBackend_free(Qnn_BackendHandle_t backendHandle);

#ifdef __cplusplus
}
#endif

#endif // QNN_BACKEND_H
