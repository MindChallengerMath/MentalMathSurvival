
/* Code to register embedded modules for meta path based loading if any. */

#include "nuitka/prelude.h"

/* Use a hex version of our own to compare for versions. We do not care about pre-releases */
#if PY_MICRO_VERSION < 16
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + PY_MICRO_VERSION)
#else
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + 15)
#endif

#include "nuitka/constants_blob.h"

#include "nuitka/tracing.h"
#include "nuitka/unfreezing.h"

/* Type bool, spell-checker: ignore stdbool */
#ifndef __cplusplus
#include <stdbool.h>
#endif

#if 364 > 0
static unsigned char *bytecode_data[364];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Helper for portable cast, to use string literals as module_init_func */
#ifdef __cplusplus
#define NUITKA_CAST_INIT_REASON(x) reinterpret_cast<module_init_func>((void*)(x))
#else
#define NUITKA_CAST_INIT_REASON(x) (module_init_func)(x)
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *module_code_PySide6(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *module_code_PySide6$$45$postLoad(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *module_code_PySide6$$45$preLoad(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *module_code_PySide6$QtCore$$45$postLoad(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *module_code_PySide6$support(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *module_code_PySide6$support$deprecated(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *module_code___main__(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *module_code_operations(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *module_code_sceneChanger(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *module_code_scenes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *module_code_scenes$difficultyMenu(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *module_code_scenes$game(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *module_code_scenes$mainMenu(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *module_code_shiboken6(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[395] = {
{MAKE_NAME("PySide6", 0), module_code_PySide6, 0, 0, NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("PySide6-postLoad", 1), module_code_PySide6$$45$postLoad, 0, 0, 0
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("PySide6-preLoad", 2), module_code_PySide6$$45$preLoad, 0, 0, 0
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("PySide6.QtCore", 3), NULL, 0, 0, NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("PySide6.QtCore-postLoad", 4), module_code_PySide6$QtCore$$45$postLoad, 0, 0, 0
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("PySide6.QtGui", 5), NULL, 0, 0, NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("PySide6.QtNetwork", 6), NULL, 0, 0, NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("PySide6.QtWidgets", 7), NULL, 0, 0, NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("PySide6.support", 8), module_code_PySide6$support, 0, 0, NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("PySide6.support.deprecated", 9), module_code_PySide6$support$deprecated, 0, 0, 0
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("__main__", 10), module_code___main__, 0, 0, 0
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_bz2", 11), NULL, 0, 0, NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_ctypes", 12), NULL, 0, 0, NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_decimal", 13), NULL, 0, 0, NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_hashlib", 14), NULL, 0, 0, NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_lzma", 15), NULL, 0, 0, NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_socket", 16), NULL, 0, 0, NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_ssl", 17), NULL, 0, 0, NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_wmi", 18), NULL, 0, 0, NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_zstd", 19), NULL, 0, 0, NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("operations", 20), module_code_operations, 0, 0, 0
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("sceneChanger", 21), module_code_sceneChanger, 0, 0, 0
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("scenes", 22), module_code_scenes, 0, 0, NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("scenes.difficultyMenu", 23), module_code_scenes$difficultyMenu, 0, 0, 0
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("scenes.game", 24), module_code_scenes$game, 0, 0, 0
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("scenes.mainMenu", 25), module_code_scenes$mainMenu, 0, 0, 0
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("select", 26), NULL, 0, 0, NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("shiboken6", 27), module_code_shiboken6, 0, 0, NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("shiboken6.Shiboken", 28), NULL, 0, 0, NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("unicodedata", 29), NULL, 0, 0, NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("__future__", 30), NULL, 0, 4742, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("__hello__", 31), NULL, 1, 929, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("__phello__", 32), NULL, 2, 334, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("__phello__.ham", 33), NULL, 3, 100, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("__phello__.ham.eggs", 34), NULL, 4, 105, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("__phello__.spam", 35), NULL, 5, 339, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_aix_support", 36), NULL, 6, 4764, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_android_support", 37), NULL, 7, 8043, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_apple_support", 38), NULL, 8, 3543, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_ast_unparse", 39), NULL, 9, 74268, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_collections_abc", 40), NULL, 10, 47890, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_colorize", 41), NULL, 11, 18481, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_compat_pickle", 42), NULL, 12, 7338, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_markupbase", 43), NULL, 13, 13067, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_opcode_metadata", 44), NULL, 14, 10366, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_osx_support", 45), NULL, 15, 18934, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_py_abc", 46), NULL, 16, 7383, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_py_warnings", 47), NULL, 17, 36944, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_pydatetime", 48), NULL, 18, 101406, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_pydecimal", 49), NULL, 19, 227065, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_pyio", 50), NULL, 20, 116540, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_pylong", 51), NULL, 21, 15942, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_pyrepl", 52), NULL, 22, 93, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_pyrepl._module_completer", 53), NULL, 23, 28916, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_pyrepl._threading_handler", 54), NULL, 24, 6456, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_pyrepl.base_eventqueue", 55), NULL, 25, 5502, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_pyrepl.commands", 56), NULL, 26, 32971, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_pyrepl.completing_reader", 57), NULL, 27, 13357, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_pyrepl.console", 58), NULL, 28, 12197, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_pyrepl.historical_reader", 59), NULL, 29, 26184, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_pyrepl.input", 60), NULL, 30, 4591, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_pyrepl.keymap", 61), NULL, 31, 7224, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_pyrepl.main", 62), NULL, 32, 3064, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_pyrepl.pager", 63), NULL, 33, 11511, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_pyrepl.reader", 64), NULL, 34, 39762, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_pyrepl.readline", 65), NULL, 35, 34778, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_pyrepl.simple_interact", 66), NULL, 36, 8616, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_pyrepl.terminfo", 67), NULL, 37, 18117, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_pyrepl.trace", 68), NULL, 38, 1682, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_pyrepl.types", 69), NULL, 39, 1753, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_pyrepl.utils", 70), NULL, 40, 21979, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_pyrepl.windows_console", 71), NULL, 41, 33065, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_pyrepl.windows_eventqueue", 72), NULL, 42, 2022, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_sitebuiltins", 73), NULL, 43, 4682, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_strptime", 74), NULL, 44, 36841, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_threading_local", 75), NULL, 45, 5727, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("_weakrefset", 76), NULL, 46, 9365, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("abc", 77), NULL, 47, 7989, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("annotationlib", 78), NULL, 48, 49620, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("argparse", 79), NULL, 49, 113577, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("ast", 80), NULL, 50, 31558, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("base64", 81), NULL, 51, 26825, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("bisect", 82), NULL, 52, 3556, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("bz2", 83), NULL, 53, 15245, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("calendar", 84), NULL, 54, 47345, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("cmd", 85), NULL, 55, 19364, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("code", 86), NULL, 56, 16289, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("codecs", 87), NULL, 57, 41840, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("codeop", 88), NULL, 58, 6922, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("collections", 89), NULL, 59, 74824, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("colorsys", 90), NULL, 60, 5233, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("compression", 91), NULL, 61, 97, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("compression._common", 92), NULL, 62, 105, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("compression._common._streams", 93), NULL, 63, 7767, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("compression.bz2", 94), NULL, 64, 184, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("compression.gzip", 95), NULL, 65, 186, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("compression.lzma", 96), NULL, 66, 186, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("compression.zlib", 97), NULL, 67, 186, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("compression.zstd", 98), NULL, 68, 11678, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("compression.zstd._zstdfile", 99), NULL, 69, 15747, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("configparser", 100), NULL, 70, 73477, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("contextlib", 101), NULL, 71, 31100, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("contextvars", 102), NULL, 72, 351, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("copy", 103), NULL, 73, 10076, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("copyreg", 104), NULL, 74, 7880, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("csv", 105), NULL, 75, 22085, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("ctypes", 106), NULL, 76, 29751, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("ctypes._endian", 107), NULL, 77, 3646, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("ctypes._layout", 108), NULL, 78, 8574, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("ctypes.wintypes", 109), NULL, 79, 8880, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("dataclasses", 110), NULL, 80, 54856, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("datetime", 111), NULL, 81, 462, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("decimal", 112), NULL, 82, 2969, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("difflib", 113), NULL, 83, 73893, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("dis", 114), NULL, 84, 54188, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("email", 115), NULL, 85, 1824, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("email._encoded_words", 116), NULL, 86, 8495, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("email._header_value_parser", 117), NULL, 87, 144429, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("email._parseaddr", 118), NULL, 88, 23851, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("email._policybase", 119), NULL, 89, 18592, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("email.base64mime", 120), NULL, 90, 3968, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("email.charset", 121), NULL, 91, 14963, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("email.contentmanager", 122), NULL, 92, 12466, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("email.encoders", 123), NULL, 93, 2053, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("email.errors", 124), NULL, 94, 7544, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("email.feedparser", 125), NULL, 95, 20991, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("email.generator", 126), NULL, 96, 21734, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("email.header", 127), NULL, 97, 25509, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("email.headerregistry", 128), NULL, 98, 32778, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("email.iterators", 129), NULL, 99, 2860, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("email.message", 130), NULL, 100, 52417, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("email.parser", 131), NULL, 101, 6562, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("email.policy", 132), NULL, 102, 11756, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("email.quoprimime", 133), NULL, 103, 10344, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("email.utils", 134), NULL, 104, 17121, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings", 135), NULL, 105, 6693, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings._win_cp_codecs", 136), NULL, 106, 3479, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.aliases", 137), NULL, 107, 12931, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.ascii", 138), NULL, 108, 2729, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.base64_codec", 139), NULL, 109, 3207, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.big5", 140), NULL, 110, 2080, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.big5hkscs", 141), NULL, 111, 2090, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.bz2_codec", 142), NULL, 112, 4615, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.charmap", 143), NULL, 113, 4061, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp037", 144), NULL, 114, 3322, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp1006", 145), NULL, 115, 3398, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp1026", 146), NULL, 116, 3326, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp1125", 147), NULL, 117, 12038, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp1140", 148), NULL, 118, 3312, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp1250", 149), NULL, 119, 3349, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp1251", 150), NULL, 120, 3346, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp1252", 151), NULL, 121, 3349, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp1253", 152), NULL, 122, 3362, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp1254", 153), NULL, 123, 3351, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp1255", 154), NULL, 124, 3370, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp1256", 155), NULL, 125, 3348, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp1257", 156), NULL, 126, 3356, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp1258", 157), NULL, 127, 3354, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp273", 158), NULL, 128, 3308, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp424", 159), NULL, 129, 3352, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp437", 160), NULL, 130, 11855, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp500", 161), NULL, 131, 3322, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp720", 162), NULL, 132, 3420, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp737", 163), NULL, 133, 12083, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp775", 164), NULL, 134, 11869, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp850", 165), NULL, 135, 11602, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp852", 166), NULL, 136, 11871, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp855", 167), NULL, 137, 12052, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp856", 168), NULL, 138, 3384, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp857", 169), NULL, 139, 11375, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp858", 170), NULL, 140, 11572, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp860", 171), NULL, 141, 11838, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp861", 172), NULL, 142, 11849, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp862", 173), NULL, 143, 11984, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp863", 174), NULL, 144, 11849, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp864", 175), NULL, 145, 11763, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp865", 176), NULL, 146, 11849, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp866", 177), NULL, 147, 12084, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp869", 178), NULL, 148, 11679, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp874", 179), NULL, 149, 3450, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp875", 180), NULL, 150, 3319, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp932", 181), NULL, 151, 2082, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp949", 182), NULL, 152, 2082, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.cp950", 183), NULL, 153, 2082, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.euc_jis_2004", 184), NULL, 154, 2096, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.euc_jisx0213", 185), NULL, 155, 2096, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.euc_jp", 186), NULL, 156, 2084, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.euc_kr", 187), NULL, 157, 2084, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.gb18030", 188), NULL, 158, 2086, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.gb2312", 189), NULL, 159, 2084, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.gbk", 190), NULL, 160, 2078, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.hex_codec", 191), NULL, 161, 3194, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.hp_roman8", 192), NULL, 162, 3507, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.hz", 193), NULL, 163, 2076, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.idna", 194), NULL, 164, 14956, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.iso2022_jp", 195), NULL, 165, 2097, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.iso2022_jp_1", 196), NULL, 166, 2101, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.iso2022_jp_2", 197), NULL, 167, 2101, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.iso2022_jp_2004", 198), NULL, 168, 2108, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.iso2022_jp_3", 199), NULL, 169, 2101, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.iso2022_jp_ext", 200), NULL, 170, 2106, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.iso2022_kr", 201), NULL, 171, 2097, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.iso8859_1", 202), NULL, 172, 3321, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.iso8859_10", 203), NULL, 173, 3326, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.iso8859_11", 204), NULL, 174, 3420, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.iso8859_13", 205), NULL, 175, 3329, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.iso8859_14", 206), NULL, 176, 3347, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.iso8859_15", 207), NULL, 177, 3326, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.iso8859_16", 208), NULL, 178, 3328, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.iso8859_2", 209), NULL, 179, 3321, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.iso8859_3", 210), NULL, 180, 3328, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.iso8859_4", 211), NULL, 181, 3321, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.iso8859_5", 212), NULL, 182, 3322, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.iso8859_6", 213), NULL, 183, 3366, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.iso8859_7", 214), NULL, 184, 3329, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.iso8859_8", 215), NULL, 185, 3360, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.iso8859_9", 216), NULL, 186, 3321, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.johab", 217), NULL, 187, 2082, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.koi8_r", 218), NULL, 188, 3373, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.koi8_t", 219), NULL, 189, 3284, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.koi8_u", 220), NULL, 190, 3359, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.kz1048", 221), NULL, 191, 3336, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.latin_1", 222), NULL, 192, 2741, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.mac_arabic", 223), NULL, 193, 11755, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.mac_croatian", 224), NULL, 194, 3368, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.mac_cyrillic", 225), NULL, 195, 3358, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.mac_farsi", 226), NULL, 196, 3302, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.mac_greek", 227), NULL, 197, 3342, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.mac_iceland", 228), NULL, 198, 3361, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.mac_latin2", 229), NULL, 199, 3502, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.mac_roman", 230), NULL, 200, 3359, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.mac_romanian", 231), NULL, 201, 3369, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.mac_turkish", 232), NULL, 202, 3362, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.mbcs", 233), NULL, 203, 2234, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.oem", 234), NULL, 204, 2047, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.palmos", 235), NULL, 205, 3350, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.ptcp154", 236), NULL, 206, 3443, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.punycode", 237), NULL, 207, 10499, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.quopri_codec", 238), NULL, 208, 3367, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.raw_unicode_escape", 239), NULL, 209, 2807, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.rot_13", 240), NULL, 210, 4354, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.shift_jis", 241), NULL, 211, 2090, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.shift_jis_2004", 242), NULL, 212, 2101, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.shift_jisx0213", 243), NULL, 213, 2101, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.tis_620", 244), NULL, 214, 3411, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.undefined", 245), NULL, 215, 2727, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.unicode_escape", 246), NULL, 216, 2787, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.utf_16", 247), NULL, 217, 8042, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.utf_16_be", 248), NULL, 218, 2314, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.utf_16_le", 249), NULL, 219, 2314, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.utf_32", 250), NULL, 220, 7936, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.utf_32_be", 251), NULL, 221, 2208, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.utf_32_le", 252), NULL, 222, 2208, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.utf_7", 253), NULL, 223, 2235, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.utf_8", 254), NULL, 224, 2294, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.utf_8_sig", 255), NULL, 225, 7164, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.uu_codec", 256), NULL, 226, 4933, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("encodings.zlib_codec", 257), NULL, 227, 4542, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("enum", 258), NULL, 228, 88096, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("filecmp", 259), NULL, 229, 15273, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("fileinput", 260), NULL, 230, 21100, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("fnmatch", 261), NULL, 231, 7826, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("fractions", 262), NULL, 232, 41833, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("ftplib", 263), NULL, 233, 43674, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("functools", 264), NULL, 234, 47974, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("genericpath", 265), NULL, 235, 7902, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("getopt", 266), NULL, 236, 9517, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("gettext", 267), NULL, 237, 23118, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("glob", 268), NULL, 238, 26077, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("graphlib", 269), NULL, 239, 10400, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("gzip", 270), NULL, 240, 33633, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("hashlib", 271), NULL, 241, 8311, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("heapq", 272), NULL, 242, 18561, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("html", 273), NULL, 243, 5740, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("html.entities", 274), NULL, 244, 96978, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("html.parser", 275), NULL, 245, 24238, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("http", 276), NULL, 246, 10330, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("http.client", 277), NULL, 247, 60814, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("http.cookiejar", 278), NULL, 248, 84570, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("imaplib", 279), NULL, 249, 81162, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("importlib", 280), NULL, 250, 4570, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("importlib._abc", 281), NULL, 251, 1631, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("importlib.abc", 282), NULL, 252, 10206, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("importlib.machinery", 283), NULL, 253, 2030, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("importlib.metadata", 284), NULL, 254, 60037, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("importlib.metadata._adapters", 285), NULL, 255, 4096, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("importlib.metadata._collections", 286), NULL, 256, 1945, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("importlib.metadata._functools", 287), NULL, 257, 3216, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("importlib.metadata._itertools", 288), NULL, 258, 2256, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("importlib.metadata._meta", 289), NULL, 259, 5533, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("importlib.metadata._text", 290), NULL, 260, 3760, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("importlib.metadata.diagnose", 291), NULL, 261, 1138, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("importlib.readers", 292), NULL, 262, 423, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("importlib.resources", 293), NULL, 263, 768, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("importlib.resources._adapters", 294), NULL, 264, 9908, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("importlib.resources._common", 295), NULL, 265, 10069, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("importlib.resources._functional", 296), NULL, 266, 3447, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("importlib.resources._itertools", 297), NULL, 267, 1438, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("importlib.resources.abc", 298), NULL, 268, 11380, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("importlib.resources.readers", 299), NULL, 269, 12808, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("importlib.resources.simple", 300), NULL, 270, 6538, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("importlib.simple", 301), NULL, 271, 430, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("importlib.util", 302), NULL, 272, 12180, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("inspect", 303), NULL, 273, 139774, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("io", 304), NULL, 274, 6227, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("ipaddress", 305), NULL, 275, 93981, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("json", 306), NULL, 276, 14170, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("json.decoder", 307), NULL, 277, 14435, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("json.encoder", 308), NULL, 278, 16991, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("json.scanner", 309), NULL, 279, 3506, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("keyword", 310), NULL, 280, 1495, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("linecache", 311), NULL, 281, 9462, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("locale", 312), NULL, 282, 65527, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("logging", 313), NULL, 283, 96779, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("lzma", 314), NULL, 284, 16425, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("mimetypes", 315), NULL, 285, 28861, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("modulefinder", 316), NULL, 286, 29247, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("netrc", 317), NULL, 287, 9739, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("ntpath", 318), NULL, 288, 28690, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("nturl2path", 319), NULL, 289, 2469, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("numbers", 320), NULL, 290, 14153, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("opcode", 321), NULL, 291, 4452, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("operator", 322), NULL, 292, 18960, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("os", 323), NULL, 293, 47210, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("pathlib", 324), NULL, 294, 61602, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("pathlib._local", 325), NULL, 295, 363, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("pathlib._os", 326), NULL, 296, 22403, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("pathlib.types", 327), NULL, 297, 22368, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("pickle", 328), NULL, 298, 85022, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("pickletools", 329), NULL, 299, 81177, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("pkgutil", 330), NULL, 300, 17975, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("platform", 331), NULL, 301, 47614, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("poplib", 332), NULL, 302, 18698, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("posixpath", 333), NULL, 303, 19656, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("pprint", 334), NULL, 304, 30778, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("pstats", 335), NULL, 305, 40043, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("py_compile", 336), NULL, 306, 10194, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("pyclbr", 337), NULL, 307, 15471, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("quopri", 338), NULL, 308, 9777, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("random", 339), NULL, 309, 37916, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("re", 340), NULL, 310, 19920, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("re._casefix", 341), NULL, 311, 1772, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("re._compiler", 342), NULL, 312, 29627, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("re._constants", 343), NULL, 313, 5587, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("re._parser", 344), NULL, 314, 45217, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("reprlib", 345), NULL, 315, 11644, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("rlcompleter", 346), NULL, 316, 9020, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("sched", 347), NULL, 317, 7783, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("selectors", 348), NULL, 318, 27023, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("shlex", 349), NULL, 319, 15438, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("shutil", 350), NULL, 320, 71554, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("signal", 351), NULL, 321, 4547, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("socket", 352), NULL, 322, 43098, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("socketserver", 353), NULL, 323, 35139, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("sre_compile", 354), NULL, 324, 608, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("sre_constants", 355), NULL, 325, 611, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("sre_parse", 356), NULL, 326, 604, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("ssl", 357), NULL, 327, 65862, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("stat", 358), NULL, 328, 5607, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("statistics", 359), NULL, 329, 77541, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("string", 360), NULL, 330, 12921, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("string.templatelib", 361), NULL, 331, 1434, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("stringprep", 362), NULL, 332, 25340, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("struct", 363), NULL, 333, 291, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("subprocess", 364), NULL, 334, 84917, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("symtable", 365), NULL, 335, 25386, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("sysconfig", 366), NULL, 336, 28551, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("tarfile", 367), NULL, 337, 134192, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("tempfile", 368), NULL, 338, 42054, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("textwrap", 369), NULL, 339, 18398, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("threading", 370), NULL, 340, 66452, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("timeit", 371), NULL, 341, 14872, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("token", 372), NULL, 342, 3838, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("tokenize", 373), NULL, 343, 26908, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("tomllib", 374), NULL, 344, 260, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("tomllib._parser", 375), NULL, 345, 35224, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("tomllib._re", 376), NULL, 346, 4481, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("tomllib._types", 377), NULL, 347, 296, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("trace", 378), NULL, 348, 34813, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("traceback", 379), NULL, 349, 78570, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("tracemalloc", 380), NULL, 350, 28741, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("types", 381), NULL, 351, 15805, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("typing", 382), NULL, 352, 171793, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("urllib", 383), NULL, 353, 92, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("urllib.error", 384), NULL, 354, 3816, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("urllib.parse", 385), NULL, 355, 53570, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("urllib.request", 386), NULL, 356, 91049, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("urllib.response", 387), NULL, 357, 4662, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("warnings", 388), NULL, 358, 2460, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("weakref", 389), NULL, 359, 27594, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("webbrowser", 390), NULL, 360, 30644, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("zipfile", 391), NULL, 361, 111490, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("zipfile._path", 392), NULL, 362, 20576, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("zipfile._path.glob", 393), NULL, 363, 5810, NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
{MAKE_NAME("socket", 394), NUITKA_CAST_INIT_REASON("according to yaml 'no-auto-follow' configuration of 'email.utils' for 'socket'"), 0, 0, NUITKA_EXCLUDED_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
};

static void _loadBytesCodesBlob(PyThreadState *tstate) {
    static bool init_done = false;

    if (init_done == false) {
        // Note needed for mere data.
        loadConstantsBlob(tstate, bytecode_data, ".bytecode");

        init_done = true;
    }
}

void setupMetaPathBasedLoader(PyThreadState *tstate) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob(tstate);
        registerMetaPathBasedLoader(meta_path_loader_entries, bytecode_data, 395);

        init_done = true;
    }
}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {
{"_collections_abc", 10, 47890},
{"_opcode_metadata", 14, 10366},
{"_weakrefset", 46, 9365},
{"abc", 47, 7989},
{"annotationlib", 48, 49620},
{"ast", 50, 31558},
{"codecs", 57, 41840},
{"collections", 59, -74824},
{"copyreg", 74, 7880},
{"dis", 84, 54188},
{"encodings", 105, -6693},
{"encodings._win_cp_codecs", 106, 3479},
{"encodings.aliases", 107, 12931},
{"encodings.ascii", 108, 2729},
{"encodings.big5", 110, 2080},
{"encodings.big5hkscs", 111, 2090},
{"encodings.charmap", 113, 4061},
{"encodings.cp037", 114, 3322},
{"encodings.cp1006", 115, 3398},
{"encodings.cp1026", 116, 3326},
{"encodings.cp1125", 117, 12038},
{"encodings.cp1140", 118, 3312},
{"encodings.cp1250", 119, 3349},
{"encodings.cp1251", 120, 3346},
{"encodings.cp1252", 121, 3349},
{"encodings.cp1253", 122, 3362},
{"encodings.cp1254", 123, 3351},
{"encodings.cp1255", 124, 3370},
{"encodings.cp1256", 125, 3348},
{"encodings.cp1257", 126, 3356},
{"encodings.cp1258", 127, 3354},
{"encodings.cp273", 128, 3308},
{"encodings.cp424", 129, 3352},
{"encodings.cp437", 130, 11855},
{"encodings.cp500", 131, 3322},
{"encodings.cp720", 132, 3420},
{"encodings.cp737", 133, 12083},
{"encodings.cp775", 134, 11869},
{"encodings.cp850", 135, 11602},
{"encodings.cp852", 136, 11871},
{"encodings.cp855", 137, 12052},
{"encodings.cp856", 138, 3384},
{"encodings.cp857", 139, 11375},
{"encodings.cp858", 140, 11572},
{"encodings.cp860", 141, 11838},
{"encodings.cp861", 142, 11849},
{"encodings.cp862", 143, 11984},
{"encodings.cp863", 144, 11849},
{"encodings.cp864", 145, 11763},
{"encodings.cp865", 146, 11849},
{"encodings.cp866", 147, 12084},
{"encodings.cp869", 148, 11679},
{"encodings.cp874", 149, 3450},
{"encodings.cp875", 150, 3319},
{"encodings.cp932", 151, 2082},
{"encodings.cp949", 152, 2082},
{"encodings.cp950", 153, 2082},
{"encodings.euc_jis_2004", 154, 2096},
{"encodings.euc_jisx0213", 155, 2096},
{"encodings.euc_jp", 156, 2084},
{"encodings.euc_kr", 157, 2084},
{"encodings.gb18030", 158, 2086},
{"encodings.gb2312", 159, 2084},
{"encodings.gbk", 160, 2078},
{"encodings.hp_roman8", 162, 3507},
{"encodings.hz", 163, 2076},
{"encodings.iso2022_jp", 165, 2097},
{"encodings.iso2022_jp_1", 166, 2101},
{"encodings.iso2022_jp_2", 167, 2101},
{"encodings.iso2022_jp_2004", 168, 2108},
{"encodings.iso2022_jp_3", 169, 2101},
{"encodings.iso2022_jp_ext", 170, 2106},
{"encodings.iso2022_kr", 171, 2097},
{"encodings.iso8859_1", 172, 3321},
{"encodings.iso8859_10", 173, 3326},
{"encodings.iso8859_11", 174, 3420},
{"encodings.iso8859_13", 175, 3329},
{"encodings.iso8859_14", 176, 3347},
{"encodings.iso8859_15", 177, 3326},
{"encodings.iso8859_16", 178, 3328},
{"encodings.iso8859_2", 179, 3321},
{"encodings.iso8859_3", 180, 3328},
{"encodings.iso8859_4", 181, 3321},
{"encodings.iso8859_5", 182, 3322},
{"encodings.iso8859_6", 183, 3366},
{"encodings.iso8859_7", 184, 3329},
{"encodings.iso8859_8", 185, 3360},
{"encodings.iso8859_9", 186, 3321},
{"encodings.johab", 187, 2082},
{"encodings.koi8_r", 188, 3373},
{"encodings.koi8_t", 189, 3284},
{"encodings.koi8_u", 190, 3359},
{"encodings.kz1048", 191, 3336},
{"encodings.latin_1", 192, 2741},
{"encodings.mac_arabic", 193, 11755},
{"encodings.mac_croatian", 194, 3368},
{"encodings.mac_cyrillic", 195, 3358},
{"encodings.mac_farsi", 196, 3302},
{"encodings.mac_greek", 197, 3342},
{"encodings.mac_iceland", 198, 3361},
{"encodings.mac_latin2", 199, 3502},
{"encodings.mac_roman", 200, 3359},
{"encodings.mac_romanian", 201, 3369},
{"encodings.mac_turkish", 202, 3362},
{"encodings.mbcs", 203, 2234},
{"encodings.oem", 204, 2047},
{"encodings.palmos", 205, 3350},
{"encodings.ptcp154", 206, 3443},
{"encodings.quopri_codec", 208, 3367},
{"encodings.raw_unicode_escape", 209, 2807},
{"encodings.shift_jis", 211, 2090},
{"encodings.shift_jis_2004", 212, 2101},
{"encodings.shift_jisx0213", 213, 2101},
{"encodings.tis_620", 214, 3411},
{"encodings.undefined", 215, 2727},
{"encodings.unicode_escape", 216, 2787},
{"encodings.utf_16", 217, 8042},
{"encodings.utf_16_be", 218, 2314},
{"encodings.utf_16_le", 219, 2314},
{"encodings.utf_32", 220, 7936},
{"encodings.utf_32_be", 221, 2208},
{"encodings.utf_32_le", 222, 2208},
{"encodings.utf_7", 223, 2235},
{"encodings.utf_8", 224, 2294},
{"encodings.utf_8_sig", 225, 7164},
{"encodings.uu_codec", 226, 4933},
{"encodings.zlib_codec", 227, 4542},
{"enum", 228, 88096},
{"functools", 234, 47974},
{"genericpath", 235, 7902},
{"importlib", 250, -4570},
{"importlib.machinery", 253, 2030},
{"inspect", 273, 139774},
{"io", 274, 6227},
{"keyword", 280, 1495},
{"linecache", 281, 9462},
{"locale", 282, 65527},
{"ntpath", 288, 28690},
{"opcode", 291, 4452},
{"operator", 292, 18960},
{"os", 293, 47210},
{"quopri", 308, 9777},
{"re", 310, -19920},
{"re._casefix", 311, 1772},
{"re._compiler", 312, 29627},
{"re._constants", 313, 5587},
{"re._parser", 314, 45217},
{"reprlib", 315, 11644},
{"stat", 328, 5607},
{"token", 342, 3838},
{"tokenize", 343, 26908},
{"types", 351, 15805},
{"weakref", 359, 27594},
    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    NUITKA_PRINT_TIMING("copyFrozenModulesTo(): Calling _loadBytesCodesBlob.");
    _loadBytesCodesBlob(NULL);

    NUITKA_PRINT_TIMING("copyFrozenModulesTo(): Updating frozen module table sizes.");

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;
#if PYTHON_VERSION >= 0x3b0
        destination->is_package = current->size < 0;
        destination->size = Py_ABS(destination->size);
#if PYTHON_VERSION < 0x3d0
        destination->get_code = NULL;
#endif
#endif
        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}

#if _NUITKA_MODULE_MODE

#ifndef NUITKA_LOADER_COMPARE_NAME
#define NUITKA_LOADER_COMPARE_NAME(name, index, entry) strcmp(name, (entry)->name)
#endif

struct Nuitka_MetaPathBasedLoaderEntry const *getLoaderEntry(char const *name) {
    for (int i = 0; i < 395; i++) {
        if (NUITKA_LOADER_COMPARE_NAME(name, i, &meta_path_loader_entries[i]) == 0) {
            return &meta_path_loader_entries[i];
        }
    }

    assert(false);
    return NULL;
}
#endif

