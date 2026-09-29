// Constant data for the program.

#if defined(__clang__)
#pragma clang diagnostic ignored "-Wc23-extensions"
#endif

#ifdef __cplusplus
extern "C"
#endif
#if !defined(_NUITKA_EXPERIMENTAL_WRITEABLE_CONSTANTS)
const
#endif
unsigned char constant_bin_data[] =
{
#embed "blobs\__constant.bin"

};

#ifdef __cplusplus
extern "C" {
#endif
#if !defined(_NUITKA_EXPERIMENTAL_WRITEABLE_CONSTANTS)
const
#endif
unsigned char *getconstant_binData(void) {
    return (
#if !defined(_NUITKA_EXPERIMENTAL_WRITEABLE_CONSTANTS)
        const
#endif
        unsigned char *)constant_bin_data;
}
#ifdef __cplusplus
}
#endif
