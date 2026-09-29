/* Generated code for Python module 'scenes'
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



/* The "module_scenes" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scenes;
PyDictObject *moduledict_scenes;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject * const_str_plain__NamespacePath;
PyObject * const_str_plain_scenes;
PyObject * const_str_plain_environ;
PyObject * const_tuple_ef20b520fa4582ca66a043d15f573020_tuple;
PyObject * const_str_angle_lambda;
PyObject * const_codeobj_1ccddc867dc28102d7a60d7f0f2f7bd2;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[6];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

NUITKA_DECLARE_CONSTANT_BLOB(
    module$scenes_bin,
    module$scenes_bin,
    const
);

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
#if 0
        LOAD_DIRECT_CONSTANTS_BLOB(tstate, (PyObject **)&mod_consts, module$scenes_bin);
#else
        loadConstantsBlob(tstate, &mod_consts, UN_TRANSLATE("scenes"));
#endif
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__NamespacePath", mod_consts.const_str_plain__NamespacePath);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__NamespacePath);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_scenes", mod_consts.const_str_plain_scenes);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_scenes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_environ", mod_consts.const_str_plain_environ);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ef20b520fa4582ca66a043d15f573020_tuple", mod_consts.const_tuple_ef20b520fa4582ca66a043d15f573020_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_tuple_ef20b520fa4582ca66a043d15f573020_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_lambda", mod_consts.const_str_angle_lambda);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_angle_lambda);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_1ccddc867dc28102d7a60d7f0f2f7bd2", mod_consts.const_codeobj_1ccddc867dc28102d7a60d7f0f2f7bd2);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_codeobj_1ccddc867dc28102d7a60d7f0f2f7bd2);
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
void checkModuleConstants_scenes(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__NamespacePath", mod_consts.const_str_plain__NamespacePath);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__NamespacePath) && "mod_consts.const_str_plain__NamespacePath");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_scenes", mod_consts.const_str_plain_scenes);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_scenes) && "mod_consts.const_str_plain_scenes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_environ", mod_consts.const_str_plain_environ);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ) && "mod_consts.const_str_plain_environ");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ef20b520fa4582ca66a043d15f573020_tuple", mod_consts.const_tuple_ef20b520fa4582ca66a043d15f573020_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_tuple_ef20b520fa4582ca66a043d15f573020_tuple) && "mod_consts.const_tuple_ef20b520fa4582ca66a043d15f573020_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_lambda", mod_consts.const_str_angle_lambda);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_angle_lambda) && "mod_consts.const_str_angle_lambda");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_1ccddc867dc28102d7a60d7f0f2f7bd2", mod_consts.const_codeobj_1ccddc867dc28102d7a60d7f0f2f7bd2);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_codeobj_1ccddc867dc28102d7a60d7f0f2f7bd2) && "mod_consts.const_codeobj_1ccddc867dc28102d7a60d7f0f2f7bd2");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 0
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


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.


static void createModuleCodeObjects(void) {

}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_scenes$$$function__1_lambda(PyThreadState *tstate);


// The module function definitions.

static PyObject *MAKE_FUNCTION_scenes$$$function__1_lambda(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_1ccddc867dc28102d7a60d7f0f2f7bd2, module_filename_obj),
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scenes,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}


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

static function_impl_code const function_table_scenes[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_scenes);
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
        module_scenes,
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
        function_table_scenes,
        sizeof(function_table_scenes) / sizeof(function_impl_code)
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
static char const *module_full_name = "scenes";
#endif

// Internal entry point for module code.
PyObject *module_code_scenes(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("scenes");

    // Store the module for future use.
    module_scenes = module;

    moduledict_scenes = MODULE_DICT(module_scenes);

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
        PRINT_STRING("scenes: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("scenes: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("scenes: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "scenes" "-preLoad", false);
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initscenes\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scenes, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // For Python 3.11 standalone modules, package "__path__" is inserted by the
    // loader before module code runs. Pre-seed "__compiled__" for non-packages
    // to keep their dangerous dict slots aligned with packages.
#if PYTHON_VERSION >= 0x3b0 && PYTHON_VERSION < 0x3c0 && _NUITKA_STANDALONE_MODE && !1
    UPDATE_STRING_DICT0(
        moduledict_scenes,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_scenes,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        UPDATE_STRING_DICT0(
            moduledict_scenes,
            (Nuitka_StringObject *)const_str_plain___package__,
            GET_STRING_DICT_VALUE(moduledict_scenes, (Nuitka_StringObject *)const_str_plain___name__)
        );
#else
        {
            PyObject *parent_name = makeParentModuleName(
                GET_STRING_DICT_VALUE(moduledict_scenes, (Nuitka_StringObject *)const_str_plain___name__)
            );

            if (parent_name != NULL) {
                UPDATE_STRING_DICT1(
                    moduledict_scenes,
                    (Nuitka_StringObject *)const_str_plain___package__,
                    parent_name
                );
            }
        }
#endif
    }

    CHECK_OBJECT(module_scenes);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_scenes, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_scenes, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_scenes, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0 && !0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_scenes, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules, and main modules running as a package (-m flag),
    // get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_scenes);
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

        UPDATE_STRING_DICT1(moduledict_scenes, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_plain_scenes);;

    // Module code.
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_list_element_1;
PyObject *tmp_args_element_value_3;
tmp_import_name_from_1 = IMPORT_HARD__FROZEN_IMPORTLIB_EXTERNAL();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_called_value_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_scenes,
        mod_consts.const_str_plain__NamespacePath,
        const_int_0
    );
} else {
    tmp_called_value_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain__NamespacePath);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto module_exception_exit;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_scenes;
tmp_list_element_1 = module_filename_obj;
tmp_args_element_value_2 = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyList_SET_ITEM0(tmp_args_element_value_2, 0, tmp_list_element_1);
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_1 = NULL;
    }
}
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto list_build_exception_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto list_build_exception_1;
}
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_ef20b520fa4582ca66a043d15f573020_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_args_element_value_2, 1, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_2);
goto module_exception_exit;
// Finished with no exception for list_build:
list_build_no_exception_1:;

tmp_args_element_value_3 = MAKE_FUNCTION_scenes$$$function__1_lambda(tstate);

{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto module_exception_exit;
}
UPDATE_STRING_DICT1(moduledict_scenes, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_1);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("scenes", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "scenes" "-postLoad", false);
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_scenes);
    return module_scenes;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scenes, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("scenes", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
