/* Generated code for Python module 'PySide6$QtCore$$45$postLoad'
 * created by Nuitka version 4.2.2
 *
 * This code is in part copyright 2026 Kay Hayen.
 *
 * Licensed under the GNU Affero General Public License, Version 3 (the "License");
 * you may not use this file except in compliance with the License.
 *
 * You may obtain a copy of the License in "LICENSE.txt" and the runtime
 * exception granted in "LICENSE-RUNTIME.txt" from Nuitka source code. For
 * deploying the generated code it is intended to not restrict distributing
 * created binaries.
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"



/* The "module_PySide6$QtCore$$45$postLoad" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PySide6$QtCore$$45$postLoad;
PyDictObject *moduledict_PySide6$QtCore$$45$postLoad;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject * const_codeobj_3720406647eb16e67561f4aae6a3ece6;
PyObject * const_str_plain_origin;
PyObject * const_str_plain_has_location;
PyObject * const_str_plain_absolute_import;
PyObject * const_str_digest_6f58f8c1126c067a27ac68fd038b69f1;
PyObject * const_tuple_str_plain_QCoreApplication_tuple;
PyObject * const_str_plain_QCoreApplication;
PyObject * const_str_plain_os;
PyObject * const_str_digest_513309be6b777cea03bfd8680d021b3f;
PyObject * const_str_plain_qt_plugins_path;
PyObject * const_str_plain_setLibraryPaths;
PyObject * const_str_plain_join;
PyObject * const_str_digest_7b79a8950d64155a442741f6cc8c809b;
PyObject * const_str_plain_qml;
PyObject * const_str_plain_environ;
PyObject * const_str_plain_QML2_IMPORT_PATH;
PyObject * const_str_digest_b3d560157f6237ddfd0b0748c6cd560a;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[17];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

NUITKA_DECLARE_CONSTANT_BLOB(
    module$PySide6$QtCore$$45$postLoad_bin,
    module$PySide6$QtCore$$45$postLoad_bin,
    const
);

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
#if 0
        LOAD_DIRECT_CONSTANTS_BLOB(tstate, (PyObject **)&mod_consts, module$PySide6$QtCore$$45$postLoad_bin);
#else
        loadConstantsBlob(tstate, &mod_consts, UN_TRANSLATE("PySide6.QtCore-postLoad"));
#endif
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_3720406647eb16e67561f4aae6a3ece6", mod_consts.const_codeobj_3720406647eb16e67561f4aae6a3ece6);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_codeobj_3720406647eb16e67561f4aae6a3ece6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_absolute_import", mod_consts.const_str_plain_absolute_import);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_absolute_import);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6f58f8c1126c067a27ac68fd038b69f1", mod_consts.const_str_digest_6f58f8c1126c067a27ac68fd038b69f1);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_6f58f8c1126c067a27ac68fd038b69f1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_QCoreApplication_tuple", mod_consts.const_tuple_str_plain_QCoreApplication_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_QCoreApplication_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QCoreApplication", mod_consts.const_str_plain_QCoreApplication);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_QCoreApplication);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_os", mod_consts.const_str_plain_os);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_513309be6b777cea03bfd8680d021b3f", mod_consts.const_str_digest_513309be6b777cea03bfd8680d021b3f);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_513309be6b777cea03bfd8680d021b3f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_qt_plugins_path", mod_consts.const_str_plain_qt_plugins_path);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_qt_plugins_path);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setLibraryPaths", mod_consts.const_str_plain_setLibraryPaths);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_setLibraryPaths);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_join", mod_consts.const_str_plain_join);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7b79a8950d64155a442741f6cc8c809b", mod_consts.const_str_digest_7b79a8950d64155a442741f6cc8c809b);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_7b79a8950d64155a442741f6cc8c809b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_qml", mod_consts.const_str_plain_qml);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_qml);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_environ", mod_consts.const_str_plain_environ);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QML2_IMPORT_PATH", mod_consts.const_str_plain_QML2_IMPORT_PATH);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_QML2_IMPORT_PATH);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b3d560157f6237ddfd0b0748c6cd560a", mod_consts.const_str_digest_b3d560157f6237ddfd0b0748c6cd560a);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_b3d560157f6237ddfd0b0748c6cd560a);
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_PySide6$QtCore$$45$postLoad(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_3720406647eb16e67561f4aae6a3ece6", mod_consts.const_codeobj_3720406647eb16e67561f4aae6a3ece6);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_codeobj_3720406647eb16e67561f4aae6a3ece6) && "mod_consts.const_codeobj_3720406647eb16e67561f4aae6a3ece6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_absolute_import", mod_consts.const_str_plain_absolute_import);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_absolute_import) && "mod_consts.const_str_plain_absolute_import");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6f58f8c1126c067a27ac68fd038b69f1", mod_consts.const_str_digest_6f58f8c1126c067a27ac68fd038b69f1);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_6f58f8c1126c067a27ac68fd038b69f1) && "mod_consts.const_str_digest_6f58f8c1126c067a27ac68fd038b69f1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_QCoreApplication_tuple", mod_consts.const_tuple_str_plain_QCoreApplication_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_QCoreApplication_tuple) && "mod_consts.const_tuple_str_plain_QCoreApplication_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QCoreApplication", mod_consts.const_str_plain_QCoreApplication);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_QCoreApplication) && "mod_consts.const_str_plain_QCoreApplication");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_os", mod_consts.const_str_plain_os);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_os) && "mod_consts.const_str_plain_os");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_513309be6b777cea03bfd8680d021b3f", mod_consts.const_str_digest_513309be6b777cea03bfd8680d021b3f);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_513309be6b777cea03bfd8680d021b3f) && "mod_consts.const_str_digest_513309be6b777cea03bfd8680d021b3f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_qt_plugins_path", mod_consts.const_str_plain_qt_plugins_path);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_qt_plugins_path) && "mod_consts.const_str_plain_qt_plugins_path");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setLibraryPaths", mod_consts.const_str_plain_setLibraryPaths);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_setLibraryPaths) && "mod_consts.const_str_plain_setLibraryPaths");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_join", mod_consts.const_str_plain_join);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_join) && "mod_consts.const_str_plain_join");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7b79a8950d64155a442741f6cc8c809b", mod_consts.const_str_digest_7b79a8950d64155a442741f6cc8c809b);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_7b79a8950d64155a442741f6cc8c809b) && "mod_consts.const_str_digest_7b79a8950d64155a442741f6cc8c809b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_qml", mod_consts.const_str_plain_qml);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_qml) && "mod_consts.const_str_plain_qml");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_environ", mod_consts.const_str_plain_environ);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ) && "mod_consts.const_str_plain_environ");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QML2_IMPORT_PATH", mod_consts.const_str_plain_QML2_IMPORT_PATH);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_QML2_IMPORT_PATH) && "mod_consts.const_str_plain_QML2_IMPORT_PATH");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b3d560157f6237ddfd0b0748c6cd560a", mod_consts.const_str_digest_b3d560157f6237ddfd0b0748c6cd560a);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_b3d560157f6237ddfd0b0748c6cd560a) && "mod_consts.const_str_digest_b3d560157f6237ddfd0b0748c6cd560a");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 3
#if PYTHON_VERSION >= 0x3c0
NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyInterpreterState *interp, PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = Nuitka_PyInterpreterState_GetDictState(interp)->next_keys_version++;
    dk->dk_version = result;
    return result;
}
#elif PYTHON_VERSION >= 0x3b0
static uint32_t _Nuitka_next_dict_keys_version = 2;

NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = _Nuitka_next_dict_keys_version++;
    dk->dk_version = result;
    return result;
}
#endif
#endif

// Accessors to module variables.
static PyObject *module_var_accessor_PySide6$QtCore$$45$postLoad$QCoreApplication(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PySide6$QtCore$$45$postLoad->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PySide6$QtCore$$45$postLoad->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PySide6$QtCore$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_QCoreApplication);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PySide6$QtCore$$45$postLoad->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_QCoreApplication);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_QCoreApplication, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_QCoreApplication);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_QCoreApplication, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PySide6$QtCore$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_QCoreApplication);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PySide6$QtCore$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_QCoreApplication);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_QCoreApplication);
    }

    return result;
}

static PyObject *module_var_accessor_PySide6$QtCore$$45$postLoad$__file__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PySide6$QtCore$$45$postLoad->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PySide6$QtCore$$45$postLoad->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PySide6$QtCore$$45$postLoad, (Nuitka_StringObject *)const_str_plain___file__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PySide6$QtCore$$45$postLoad->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___file__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___file__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___file__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___file__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PySide6$QtCore$$45$postLoad, (Nuitka_StringObject *)const_str_plain___file__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PySide6$QtCore$$45$postLoad, (Nuitka_StringObject *)const_str_plain___file__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___file__);
    }

    return result;
}

static PyObject *module_var_accessor_PySide6$QtCore$$45$postLoad$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PySide6$QtCore$$45$postLoad->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PySide6$QtCore$$45$postLoad->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PySide6$QtCore$$45$postLoad, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PySide6$QtCore$$45$postLoad->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___spec__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___spec__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___spec__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___spec__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PySide6$QtCore$$45$postLoad, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PySide6$QtCore$$45$postLoad, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.


static void createModuleCodeObjects(void) {

}
#endif

// The module function declarations.


// The module function definitions.


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_PySide6$QtCore$$45$postLoad[] = {

    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    return Nuitka_Function_GetFunctionState(function, function_table_PySide6$QtCore$$45$postLoad);
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;
    PyObject *closure;
    PyObject *annotations;
    PyObject *func_dict;

    if (!PyArg_ParseTuple(args, "OOOOOOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, &closure, &annotations, &func_dict, NULL)) {
        return NULL;
    }

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_PySide6$QtCore$$45$postLoad,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        annotations,
        func_dict,
        function_table_PySide6$QtCore$$45$postLoad,
        sizeof(function_table_PySide6$QtCore$$45$postLoad) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Actual name might be different when loaded as a package.
#if _NUITKA_MODULE_MODE && 0
static char const *module_full_name = "PySide6.QtCore-postLoad";
#endif

// Internal entry point for module code.
PyObject *module_code_PySide6$QtCore$$45$postLoad(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("PySide6$QtCore$$45$postLoad");

    // Store the module for future use.
    module_PySide6$QtCore$$45$postLoad = module;

    moduledict_PySide6$QtCore$$45$postLoad = MODULE_DICT(module_PySide6$QtCore$$45$postLoad);

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if _NUITKA_MODULE_MODE && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.
#if PYTHON_VERSION > 0x350 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_ALLOCATORS)
        initNuitkaAllocators();
#endif
        // Initialize the constant values used.
        _initBuiltinModule(tstate);

        PyObject *real_module_name = PyObject_GetAttrString(module, "__name__");
        CHECK_OBJECT(real_module_name);
        module_full_name = strdup(Nuitka_String_AsString(real_module_name));

        createGlobalConstants(tstate, real_module_name);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("PySide6$QtCore$$45$postLoad: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("PySide6$QtCore$$45$postLoad: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("PySide6$QtCore$$45$postLoad: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "PySide6.QtCore-postLoad" "-preLoad", false);
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initPySide6$QtCore$$45$postLoad\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PySide6$QtCore$$45$postLoad, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // For Python 3.11 standalone modules, package "__path__" is inserted by the
    // loader before module code runs. Pre-seed "__compiled__" for non-packages
    // to keep their dangerous dict slots aligned with packages.
#if PYTHON_VERSION >= 0x3b0 && PYTHON_VERSION < 0x3c0 && _NUITKA_STANDALONE_MODE && !0
    UPDATE_STRING_DICT0(
        moduledict_PySide6$QtCore$$45$postLoad,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_PySide6$QtCore$$45$postLoad,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        UPDATE_STRING_DICT0(
            moduledict_PySide6$QtCore$$45$postLoad,
            (Nuitka_StringObject *)const_str_plain___package__,
            GET_STRING_DICT_VALUE(moduledict_PySide6$QtCore$$45$postLoad, (Nuitka_StringObject *)const_str_plain___name__)
        );
#else
        {
            PyObject *parent_name = makeParentModuleName(
                GET_STRING_DICT_VALUE(moduledict_PySide6$QtCore$$45$postLoad, (Nuitka_StringObject *)const_str_plain___name__)
            );

            if (parent_name != NULL) {
                UPDATE_STRING_DICT1(
                    moduledict_PySide6$QtCore$$45$postLoad,
                    (Nuitka_StringObject *)const_str_plain___package__,
                    parent_name
                );
            }
        }
#endif
    }

    CHECK_OBJECT(module_PySide6$QtCore$$45$postLoad);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_PySide6$QtCore$$45$postLoad, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_PySide6$QtCore$$45$postLoad, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_PySide6$QtCore$$45$postLoad, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0 && !0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_PySide6$QtCore$$45$postLoad, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules, and main modules running as a package (-m flag),
    // get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_PySide6$QtCore$$45$postLoad);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

        // Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

#if _NUITKA_MODULE_MODE && 0 && 0 >= 0
        // Set our loader object in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain_loader, module_loader);
#endif

        UPDATE_STRING_DICT1(moduledict_PySide6$QtCore$$45$postLoad, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_PySide6$QtCore$$45$postLoad;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module init code if any
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_b3d560157f6237ddfd0b0748c6cd560a);;

    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_PySide6$QtCore$$45$postLoad, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_PySide6$QtCore$$45$postLoad, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_PySide6$QtCore$$45$postLoad = MAKE_MODULE_FRAME(USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_3720406647eb16e67561f4aae6a3ece6, module_filename_obj), module_PySide6$QtCore$$45$postLoad);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PySide6$QtCore$$45$postLoad);
assert(Py_REFCNT(frame_frame_PySide6$QtCore$$45$postLoad) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_PySide6$QtCore$$45$postLoad$__spec__(tstate);
assert(!(tmp_ass_attr_target_1 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_origin, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
tmp_ass_attr_value_2 = Py_True;
tmp_ass_attr_target_2 = module_var_accessor_PySide6$QtCore$$45$postLoad$__spec__(tstate);
assert(!(tmp_ass_attr_target_2 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_has_location, tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = Py_None;
UPDATE_STRING_DICT0(moduledict_PySide6$QtCore$$45$postLoad, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_PySide6$QtCore$$45$postLoad, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_absolute_import);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_PySide6$QtCore$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_absolute_import, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_6f58f8c1126c067a27ac68fd038b69f1;
tmp_globals_arg_value_1 = (PyObject *)moduledict_PySide6$QtCore$$45$postLoad;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_QCoreApplication_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_PySide6$QtCore$$45$postLoad->m_frame.f_lineno = 3;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_PySide6$QtCore$$45$postLoad,
        mod_consts.const_str_plain_QCoreApplication,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_QCoreApplication);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PySide6$QtCore$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_QCoreApplication, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_PySide6$QtCore$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = mod_consts.const_str_digest_513309be6b777cea03bfd8680d021b3f;
UPDATE_STRING_DICT0(moduledict_PySide6$QtCore$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_qt_plugins_path, tmp_assign_source_8);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_path_arg_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_1 = module_var_accessor_PySide6$QtCore$$45$postLoad$QCoreApplication(tstate);
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_setLibraryPaths);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
tmp_expression_value_2 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_2 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_join);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 11;

    goto frame_exception_exit_1;
}
tmp_path_arg_1 = module_var_accessor_PySide6$QtCore$$45$postLoad$__file__(tstate);
if (unlikely(tmp_path_arg_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___file__);
}

if (tmp_path_arg_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 12;

    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = OS_PATH_DIRNAME(tstate, tmp_path_arg_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 12;

    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = mod_consts.const_str_digest_7b79a8950d64155a442741f6cc8c809b;
tmp_args_element_value_4 = mod_consts.const_str_digest_513309be6b777cea03bfd8680d021b3f;
frame_frame_PySide6$QtCore$$45$postLoad->m_frame.f_lineno = 11;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 11;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_args_element_value_1, 0, tmp_list_element_1);
frame_frame_PySide6$QtCore$$45$postLoad->m_frame.f_lineno = 9;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_path_arg_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_ass_subscript_1;
tmp_expression_value_3 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_3 == NULL));
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_join);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
tmp_path_arg_2 = module_var_accessor_PySide6$QtCore$$45$postLoad$__file__(tstate);
if (unlikely(tmp_path_arg_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___file__);
}

if (tmp_path_arg_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 20;

    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = OS_PATH_DIRNAME(tstate, tmp_path_arg_2);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 20;

    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = mod_consts.const_str_plain_qml;
frame_frame_PySide6$QtCore$$45$postLoad->m_frame.f_lineno = 19;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
tmp_expression_value_4 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_4 == NULL));
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_environ);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 19;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_QML2_IMPORT_PATH;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PySide6$QtCore$$45$postLoad, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PySide6$QtCore$$45$postLoad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PySide6$QtCore$$45$postLoad, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_PySide6$QtCore$$45$postLoad);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("PySide6$QtCore$$45$postLoad", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "PySide6.QtCore-postLoad" "-postLoad", false);
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_PySide6$QtCore$$45$postLoad);
    return module_PySide6$QtCore$$45$postLoad;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PySide6$QtCore$$45$postLoad, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("PySide6$QtCore$$45$postLoad", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
