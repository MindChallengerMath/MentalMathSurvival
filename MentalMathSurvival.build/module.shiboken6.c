/* Generated code for Python module 'shiboken6'
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



/* The "module_shiboken6" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_shiboken6;
PyDictObject *moduledict_shiboken6;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject * const_codeobj_fef0f9a7099b5af085b25a88f172606f;
PyObject * const_str_plain_environ;
PyObject * const_tuple_ebdd3efa8d3983ae42e61c394088594a_tuple;
PyObject * const_str_plain_origin;
PyObject * const_str_plain_has_location;
PyObject * const_str_plain_submodule_search_locations;
PyObject * const_str_digest_fd18c8fc34c3c981cf864f359da23cd7;
PyObject * const_str_plain___version__;
PyObject * const_tuple_int_pos_6_int_pos_11_int_pos_2_str_empty_str_empty_tuple;
PyObject * const_str_plain___version_info__;
PyObject * const_tuple_int_pos_3_int_pos_10_tuple;
PyObject * const_str_plain___minimum_python_version__;
PyObject * const_tuple_int_pos_3_int_pos_14_tuple;
PyObject * const_str_plain___maximum_python_version__;
PyObject * const_str_plain_sys;
PyObject * const_str_plain_os;
PyObject * const_str_plain_zipfile;
PyObject * const_str_plain_base64;
PyObject * const_str_plain_marshal;
PyObject * const_str_plain_io;
PyObject * const_str_plain_contextlib;
PyObject * const_str_plain_textwrap;
PyObject * const_str_plain_traceback;
PyObject * const_str_plain_struct;
PyObject * const_str_plain_re;
PyObject * const_str_plain_tempfile;
PyObject * const_str_plain_keyword;
PyObject * const_str_plain_functools;
PyObject * const_str_plain_typing;
PyObject * const_str_digest_a28a8cb2dc0a0763d12769ba05461e94;
PyObject * const_tuple_str_chr_42_tuple;
PyObject * const_str_digest_35a37fb38a31f864ed37db110481de33;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[32];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

NUITKA_DECLARE_CONSTANT_BLOB(
    module$shiboken6_bin,
    module$shiboken6_bin,
    const
);

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
#if 0
        LOAD_DIRECT_CONSTANTS_BLOB(tstate, (PyObject **)&mod_consts, module$shiboken6_bin);
#else
        loadConstantsBlob(tstate, &mod_consts, UN_TRANSLATE("shiboken6"));
#endif
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_fef0f9a7099b5af085b25a88f172606f", mod_consts.const_codeobj_fef0f9a7099b5af085b25a88f172606f);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_codeobj_fef0f9a7099b5af085b25a88f172606f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_environ", mod_consts.const_str_plain_environ);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ebdd3efa8d3983ae42e61c394088594a_tuple", mod_consts.const_tuple_ebdd3efa8d3983ae42e61c394088594a_tuple);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_ebdd3efa8d3983ae42e61c394088594a_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_submodule_search_locations", mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fd18c8fc34c3c981cf864f359da23cd7", mod_consts.const_str_digest_fd18c8fc34c3c981cf864f359da23cd7);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_fd18c8fc34c3c981cf864f359da23cd7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___version__", mod_consts.const_str_plain___version__);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain___version__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_6_int_pos_11_int_pos_2_str_empty_str_empty_tuple", mod_consts.const_tuple_int_pos_6_int_pos_11_int_pos_2_str_empty_str_empty_tuple);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_6_int_pos_11_int_pos_2_str_empty_str_empty_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___version_info__", mod_consts.const_str_plain___version_info__);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain___version_info__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_3_int_pos_10_tuple", mod_consts.const_tuple_int_pos_3_int_pos_10_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_3_int_pos_10_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___minimum_python_version__", mod_consts.const_str_plain___minimum_python_version__);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain___minimum_python_version__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_3_int_pos_14_tuple", mod_consts.const_tuple_int_pos_3_int_pos_14_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_3_int_pos_14_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___maximum_python_version__", mod_consts.const_str_plain___maximum_python_version__);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain___maximum_python_version__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sys", mod_consts.const_str_plain_sys);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_os", mod_consts.const_str_plain_os);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_zipfile", mod_consts.const_str_plain_zipfile);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_zipfile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_base64", mod_consts.const_str_plain_base64);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_base64);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_marshal", mod_consts.const_str_plain_marshal);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_marshal);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_io", mod_consts.const_str_plain_io);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_io);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_contextlib", mod_consts.const_str_plain_contextlib);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_textwrap", mod_consts.const_str_plain_textwrap);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_textwrap);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_traceback", mod_consts.const_str_plain_traceback);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_traceback);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_struct", mod_consts.const_str_plain_struct);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_struct);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_re", mod_consts.const_str_plain_re);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tempfile", mod_consts.const_str_plain_tempfile);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_tempfile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_keyword", mod_consts.const_str_plain_keyword);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_keyword);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_functools", mod_consts.const_str_plain_functools);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_functools);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a28a8cb2dc0a0763d12769ba05461e94", mod_consts.const_str_digest_a28a8cb2dc0a0763d12769ba05461e94);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_a28a8cb2dc0a0763d12769ba05461e94);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_chr_42_tuple", mod_consts.const_tuple_str_chr_42_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_42_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_35a37fb38a31f864ed37db110481de33", mod_consts.const_str_digest_35a37fb38a31f864ed37db110481de33);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_35a37fb38a31f864ed37db110481de33);
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
void checkModuleConstants_shiboken6(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_fef0f9a7099b5af085b25a88f172606f", mod_consts.const_codeobj_fef0f9a7099b5af085b25a88f172606f);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_codeobj_fef0f9a7099b5af085b25a88f172606f) && "mod_consts.const_codeobj_fef0f9a7099b5af085b25a88f172606f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_environ", mod_consts.const_str_plain_environ);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ) && "mod_consts.const_str_plain_environ");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ebdd3efa8d3983ae42e61c394088594a_tuple", mod_consts.const_tuple_ebdd3efa8d3983ae42e61c394088594a_tuple);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_ebdd3efa8d3983ae42e61c394088594a_tuple) && "mod_consts.const_tuple_ebdd3efa8d3983ae42e61c394088594a_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_submodule_search_locations", mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations) && "mod_consts.const_str_plain_submodule_search_locations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fd18c8fc34c3c981cf864f359da23cd7", mod_consts.const_str_digest_fd18c8fc34c3c981cf864f359da23cd7);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_fd18c8fc34c3c981cf864f359da23cd7) && "mod_consts.const_str_digest_fd18c8fc34c3c981cf864f359da23cd7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___version__", mod_consts.const_str_plain___version__);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain___version__) && "mod_consts.const_str_plain___version__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_6_int_pos_11_int_pos_2_str_empty_str_empty_tuple", mod_consts.const_tuple_int_pos_6_int_pos_11_int_pos_2_str_empty_str_empty_tuple);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_6_int_pos_11_int_pos_2_str_empty_str_empty_tuple) && "mod_consts.const_tuple_int_pos_6_int_pos_11_int_pos_2_str_empty_str_empty_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___version_info__", mod_consts.const_str_plain___version_info__);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain___version_info__) && "mod_consts.const_str_plain___version_info__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_3_int_pos_10_tuple", mod_consts.const_tuple_int_pos_3_int_pos_10_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_3_int_pos_10_tuple) && "mod_consts.const_tuple_int_pos_3_int_pos_10_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___minimum_python_version__", mod_consts.const_str_plain___minimum_python_version__);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain___minimum_python_version__) && "mod_consts.const_str_plain___minimum_python_version__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_3_int_pos_14_tuple", mod_consts.const_tuple_int_pos_3_int_pos_14_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_3_int_pos_14_tuple) && "mod_consts.const_tuple_int_pos_3_int_pos_14_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___maximum_python_version__", mod_consts.const_str_plain___maximum_python_version__);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain___maximum_python_version__) && "mod_consts.const_str_plain___maximum_python_version__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sys", mod_consts.const_str_plain_sys);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys) && "mod_consts.const_str_plain_sys");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_os", mod_consts.const_str_plain_os);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_os) && "mod_consts.const_str_plain_os");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_zipfile", mod_consts.const_str_plain_zipfile);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_zipfile) && "mod_consts.const_str_plain_zipfile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_base64", mod_consts.const_str_plain_base64);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_base64) && "mod_consts.const_str_plain_base64");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_marshal", mod_consts.const_str_plain_marshal);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_marshal) && "mod_consts.const_str_plain_marshal");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_io", mod_consts.const_str_plain_io);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_io) && "mod_consts.const_str_plain_io");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_contextlib", mod_consts.const_str_plain_contextlib);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib) && "mod_consts.const_str_plain_contextlib");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_textwrap", mod_consts.const_str_plain_textwrap);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_textwrap) && "mod_consts.const_str_plain_textwrap");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_traceback", mod_consts.const_str_plain_traceback);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_traceback) && "mod_consts.const_str_plain_traceback");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_struct", mod_consts.const_str_plain_struct);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_struct) && "mod_consts.const_str_plain_struct");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_re", mod_consts.const_str_plain_re);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_re) && "mod_consts.const_str_plain_re");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tempfile", mod_consts.const_str_plain_tempfile);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_tempfile) && "mod_consts.const_str_plain_tempfile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_keyword", mod_consts.const_str_plain_keyword);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_keyword) && "mod_consts.const_str_plain_keyword");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_functools", mod_consts.const_str_plain_functools);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_functools) && "mod_consts.const_str_plain_functools");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing) && "mod_consts.const_str_plain_typing");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a28a8cb2dc0a0763d12769ba05461e94", mod_consts.const_str_digest_a28a8cb2dc0a0763d12769ba05461e94);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_a28a8cb2dc0a0763d12769ba05461e94) && "mod_consts.const_str_digest_a28a8cb2dc0a0763d12769ba05461e94");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_chr_42_tuple", mod_consts.const_tuple_str_chr_42_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_42_tuple) && "mod_consts.const_tuple_str_chr_42_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_35a37fb38a31f864ed37db110481de33", mod_consts.const_str_digest_35a37fb38a31f864ed37db110481de33);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_35a37fb38a31f864ed37db110481de33) && "mod_consts.const_str_digest_35a37fb38a31f864ed37db110481de33");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 2
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
static PyObject *module_var_accessor_shiboken6$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_shiboken6->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_shiboken6->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_shiboken6, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_shiboken6->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___path__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___path__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___path__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___path__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_shiboken6, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_shiboken6, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_shiboken6$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_shiboken6->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_shiboken6->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_shiboken6, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_shiboken6->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_shiboken6, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_shiboken6, (Nuitka_StringObject *)const_str_plain___spec__);
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

static function_impl_code const function_table_shiboken6[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_shiboken6);
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
        module_shiboken6,
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
        function_table_shiboken6,
        sizeof(function_table_shiboken6) / sizeof(function_impl_code)
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
static char const *module_full_name = "shiboken6";
#endif

// Internal entry point for module code.
PyObject *module_code_shiboken6(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("shiboken6");

    // Store the module for future use.
    module_shiboken6 = module;

    moduledict_shiboken6 = MODULE_DICT(module_shiboken6);

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
        PRINT_STRING("shiboken6: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("shiboken6: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("shiboken6: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "shiboken6" "-preLoad", false);
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initshiboken6\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_shiboken6, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_shiboken6,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_shiboken6,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        UPDATE_STRING_DICT0(
            moduledict_shiboken6,
            (Nuitka_StringObject *)const_str_plain___package__,
            GET_STRING_DICT_VALUE(moduledict_shiboken6, (Nuitka_StringObject *)const_str_plain___name__)
        );
#else
        {
            PyObject *parent_name = makeParentModuleName(
                GET_STRING_DICT_VALUE(moduledict_shiboken6, (Nuitka_StringObject *)const_str_plain___name__)
            );

            if (parent_name != NULL) {
                UPDATE_STRING_DICT1(
                    moduledict_shiboken6,
                    (Nuitka_StringObject *)const_str_plain___package__,
                    parent_name
                );
            }
        }
#endif
    }

    CHECK_OBJECT(module_shiboken6);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_shiboken6, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_shiboken6, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_shiboken6, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0 && !0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_shiboken6, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules, and main modules running as a package (-m flag),
    // get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_shiboken6);
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

        UPDATE_STRING_DICT1(moduledict_shiboken6, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_shiboken6;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;

    // Module init code if any
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_35a37fb38a31f864ed37db110481de33);;

    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_shiboken6, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_shiboken6, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_shiboken6 = MAKE_MODULE_FRAME(USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_fef0f9a7099b5af085b25a88f172606f, module_filename_obj), module_shiboken6);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_shiboken6);
assert(Py_REFCNT(frame_frame_shiboken6) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_shiboken6->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, const_str_plain_path);


    } else {
        tmp_expression_value_1 = NULL;
    }
}
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_dirname);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_filename_obj;
frame_frame_shiboken6->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
frame_frame_shiboken6->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_2 = NULL;
    }
}
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_shiboken6->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_ebdd3efa8d3983ae42e61c394088594a_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assign_source_3);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_shiboken6, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_shiboken6$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_shiboken6$__spec__(tstate);
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
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
tmp_ass_attr_value_3 = module_var_accessor_shiboken6$__path__(tstate);
if (unlikely(tmp_ass_attr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_ass_attr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_ass_attr_target_3 = module_var_accessor_shiboken6$__spec__(tstate);
assert(!(tmp_ass_attr_target_3 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain_submodule_search_locations, tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Py_None;
UPDATE_STRING_DICT0(moduledict_shiboken6, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_shiboken6, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = mod_consts.const_str_digest_fd18c8fc34c3c981cf864f359da23cd7;
UPDATE_STRING_DICT0(moduledict_shiboken6, (Nuitka_StringObject *)mod_consts.const_str_plain___version__, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = mod_consts.const_tuple_int_pos_6_int_pos_11_int_pos_2_str_empty_str_empty_tuple;
UPDATE_STRING_DICT0(moduledict_shiboken6, (Nuitka_StringObject *)mod_consts.const_str_plain___version_info__, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = mod_consts.const_tuple_int_pos_3_int_pos_10_tuple;
UPDATE_STRING_DICT0(moduledict_shiboken6, (Nuitka_StringObject *)mod_consts.const_str_plain___minimum_python_version__, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = mod_consts.const_tuple_int_pos_3_int_pos_14_tuple;
UPDATE_STRING_DICT0(moduledict_shiboken6, (Nuitka_StringObject *)mod_consts.const_str_plain___maximum_python_version__, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_10 == NULL));
UPDATE_STRING_DICT0(moduledict_shiboken6, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_11 == NULL));
UPDATE_STRING_DICT0(moduledict_shiboken6, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_zipfile;
tmp_globals_arg_value_1 = (PyObject *)moduledict_shiboken6;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_shiboken6->m_frame.f_lineno = 12;
tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_shiboken6, (Nuitka_StringObject *)mod_consts.const_str_plain_zipfile, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_base64;
tmp_globals_arg_value_2 = (PyObject *)moduledict_shiboken6;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_shiboken6->m_frame.f_lineno = 13;
tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_shiboken6, (Nuitka_StringObject *)mod_consts.const_str_plain_base64, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_marshal;
tmp_globals_arg_value_3 = (PyObject *)moduledict_shiboken6;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_shiboken6->m_frame.f_lineno = 14;
tmp_assign_source_14 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_shiboken6, (Nuitka_StringObject *)mod_consts.const_str_plain_marshal, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = IMPORT_HARD_IO();
assert(!(tmp_assign_source_15 == NULL));
UPDATE_STRING_DICT0(moduledict_shiboken6, (Nuitka_StringObject *)mod_consts.const_str_plain_io, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_contextlib;
tmp_globals_arg_value_4 = (PyObject *)moduledict_shiboken6;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_shiboken6->m_frame.f_lineno = 16;
tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_shiboken6, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_textwrap;
tmp_globals_arg_value_5 = (PyObject *)moduledict_shiboken6;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = Py_None;
tmp_level_value_5 = const_int_0;
frame_frame_shiboken6->m_frame.f_lineno = 17;
tmp_assign_source_17 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_shiboken6, (Nuitka_StringObject *)mod_consts.const_str_plain_textwrap, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_traceback;
tmp_globals_arg_value_6 = (PyObject *)moduledict_shiboken6;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = Py_None;
tmp_level_value_6 = const_int_0;
frame_frame_shiboken6->m_frame.f_lineno = 18;
tmp_assign_source_18 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_shiboken6, (Nuitka_StringObject *)mod_consts.const_str_plain_traceback, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = IMPORT_HARD_TYPES();
assert(!(tmp_assign_source_19 == NULL));
UPDATE_STRING_DICT0(moduledict_shiboken6, (Nuitka_StringObject *)const_str_plain_types, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_struct;
tmp_globals_arg_value_7 = (PyObject *)moduledict_shiboken6;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = Py_None;
tmp_level_value_7 = const_int_0;
frame_frame_shiboken6->m_frame.f_lineno = 20;
tmp_assign_source_20 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_shiboken6, (Nuitka_StringObject *)mod_consts.const_str_plain_struct, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_8 = (PyObject *)moduledict_shiboken6;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = Py_None;
tmp_level_value_8 = const_int_0;
frame_frame_shiboken6->m_frame.f_lineno = 21;
tmp_assign_source_21 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_shiboken6, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain_tempfile;
tmp_globals_arg_value_9 = (PyObject *)moduledict_shiboken6;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = Py_None;
tmp_level_value_9 = const_int_0;
frame_frame_shiboken6->m_frame.f_lineno = 22;
tmp_assign_source_22 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_shiboken6, (Nuitka_StringObject *)mod_consts.const_str_plain_tempfile, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain_keyword;
tmp_globals_arg_value_10 = (PyObject *)moduledict_shiboken6;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = Py_None;
tmp_level_value_10 = const_int_0;
frame_frame_shiboken6->m_frame.f_lineno = 23;
tmp_assign_source_23 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_shiboken6, (Nuitka_StringObject *)mod_consts.const_str_plain_keyword, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_assign_source_24 == NULL));
UPDATE_STRING_DICT0(moduledict_shiboken6, (Nuitka_StringObject *)mod_consts.const_str_plain_functools, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_25 == NULL));
UPDATE_STRING_DICT0(moduledict_shiboken6, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_25);
}
{
PyObject *tmp_star_imported_1;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_digest_a28a8cb2dc0a0763d12769ba05461e94;
tmp_globals_arg_value_11 = (PyObject *)moduledict_shiboken6;
tmp_locals_arg_value_11 = (PyObject *)moduledict_shiboken6;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_chr_42_tuple;
tmp_level_value_11 = const_int_0;
frame_frame_shiboken6->m_frame.f_lineno = 27;
tmp_star_imported_1 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_star_imported_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
tmp_result = IMPORT_MODULE_STAR(tstate, module_shiboken6, true, tmp_star_imported_1);
CHECK_OBJECT(tmp_star_imported_1);
Py_DECREF(tmp_star_imported_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_shiboken6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_shiboken6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_shiboken6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_shiboken6);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("shiboken6", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "shiboken6" "-postLoad", false);
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_shiboken6);
    return module_shiboken6;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_shiboken6, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("shiboken6", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
