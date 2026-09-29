/* Generated code for Python module 'operations'
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



/* The "module_operations" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_operations;
PyDictObject *moduledict_operations;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject * const_codeobj_3d82c815c1457b65101ce55dd20dada7;
PyObject * const_codeobj_32771056370be648cdb98776a97ad22f;
PyObject * const_codeobj_3ae5246c4e286026350142b723fd95af;
PyObject * const_codeobj_57245b8ad61642b095b842e51c01a14c;
PyObject * const_codeobj_0a2961bb78c9c3f4ea4df0baeff72bf9;
PyObject * const_str_plain_origin;
PyObject * const_str_plain_has_location;
PyObject * const_str_plain_operations;
PyObject * const_str_plain_Operations;
PyObject * const_str_plain___firstlineno__;
PyObject * const_str_plain_plus;
PyObject * const_str_digest_eff1ebf8e24555571e729d3dbe6fe527;
PyObject * const_str_plain_minus;
PyObject * const_str_digest_1f10fef42e31e2fcb22fe97619060033;
PyObject * const_str_plain_multiply;
PyObject * const_str_digest_b25c438a59d09a27c771ef59a338c51d;
PyObject * const_str_plain_divide;
PyObject * const_str_digest_848a1d83812e81674286f760046b2a9d;
PyObject * const_str_plain___static_attributes__;
PyObject * const_str_digest_0d2da33b391380fc5112efcae09ed23f;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[20];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

NUITKA_DECLARE_CONSTANT_BLOB(
    module$operations_bin,
    module$operations_bin,
    const
);

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
#if 0
        LOAD_DIRECT_CONSTANTS_BLOB(tstate, (PyObject **)&mod_consts, module$operations_bin);
#else
        loadConstantsBlob(tstate, &mod_consts, UN_TRANSLATE("operations"));
#endif
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_3d82c815c1457b65101ce55dd20dada7", mod_consts.const_codeobj_3d82c815c1457b65101ce55dd20dada7);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_codeobj_3d82c815c1457b65101ce55dd20dada7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_32771056370be648cdb98776a97ad22f", mod_consts.const_codeobj_32771056370be648cdb98776a97ad22f);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_codeobj_32771056370be648cdb98776a97ad22f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_3ae5246c4e286026350142b723fd95af", mod_consts.const_codeobj_3ae5246c4e286026350142b723fd95af);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_codeobj_3ae5246c4e286026350142b723fd95af);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_57245b8ad61642b095b842e51c01a14c", mod_consts.const_codeobj_57245b8ad61642b095b842e51c01a14c);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_codeobj_57245b8ad61642b095b842e51c01a14c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_0a2961bb78c9c3f4ea4df0baeff72bf9", mod_consts.const_codeobj_0a2961bb78c9c3f4ea4df0baeff72bf9);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_codeobj_0a2961bb78c9c3f4ea4df0baeff72bf9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_operations", mod_consts.const_str_plain_operations);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_operations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Operations", mod_consts.const_str_plain_Operations);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_Operations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_plus", mod_consts.const_str_plain_plus);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_plus);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_eff1ebf8e24555571e729d3dbe6fe527", mod_consts.const_str_digest_eff1ebf8e24555571e729d3dbe6fe527);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_eff1ebf8e24555571e729d3dbe6fe527);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_minus", mod_consts.const_str_plain_minus);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_minus);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1f10fef42e31e2fcb22fe97619060033", mod_consts.const_str_digest_1f10fef42e31e2fcb22fe97619060033);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_1f10fef42e31e2fcb22fe97619060033);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_multiply", mod_consts.const_str_plain_multiply);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_multiply);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b25c438a59d09a27c771ef59a338c51d", mod_consts.const_str_digest_b25c438a59d09a27c771ef59a338c51d);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_b25c438a59d09a27c771ef59a338c51d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_divide", mod_consts.const_str_plain_divide);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_divide);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_848a1d83812e81674286f760046b2a9d", mod_consts.const_str_digest_848a1d83812e81674286f760046b2a9d);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_848a1d83812e81674286f760046b2a9d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0d2da33b391380fc5112efcae09ed23f", mod_consts.const_str_digest_0d2da33b391380fc5112efcae09ed23f);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_0d2da33b391380fc5112efcae09ed23f);
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
void checkModuleConstants_operations(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_3d82c815c1457b65101ce55dd20dada7", mod_consts.const_codeobj_3d82c815c1457b65101ce55dd20dada7);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_codeobj_3d82c815c1457b65101ce55dd20dada7) && "mod_consts.const_codeobj_3d82c815c1457b65101ce55dd20dada7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_32771056370be648cdb98776a97ad22f", mod_consts.const_codeobj_32771056370be648cdb98776a97ad22f);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_codeobj_32771056370be648cdb98776a97ad22f) && "mod_consts.const_codeobj_32771056370be648cdb98776a97ad22f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_3ae5246c4e286026350142b723fd95af", mod_consts.const_codeobj_3ae5246c4e286026350142b723fd95af);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_codeobj_3ae5246c4e286026350142b723fd95af) && "mod_consts.const_codeobj_3ae5246c4e286026350142b723fd95af");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_57245b8ad61642b095b842e51c01a14c", mod_consts.const_codeobj_57245b8ad61642b095b842e51c01a14c);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_codeobj_57245b8ad61642b095b842e51c01a14c) && "mod_consts.const_codeobj_57245b8ad61642b095b842e51c01a14c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_0a2961bb78c9c3f4ea4df0baeff72bf9", mod_consts.const_codeobj_0a2961bb78c9c3f4ea4df0baeff72bf9);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_codeobj_0a2961bb78c9c3f4ea4df0baeff72bf9) && "mod_consts.const_codeobj_0a2961bb78c9c3f4ea4df0baeff72bf9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_operations", mod_consts.const_str_plain_operations);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_operations) && "mod_consts.const_str_plain_operations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Operations", mod_consts.const_str_plain_Operations);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_Operations) && "mod_consts.const_str_plain_Operations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_plus", mod_consts.const_str_plain_plus);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_plus) && "mod_consts.const_str_plain_plus");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_eff1ebf8e24555571e729d3dbe6fe527", mod_consts.const_str_digest_eff1ebf8e24555571e729d3dbe6fe527);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_eff1ebf8e24555571e729d3dbe6fe527) && "mod_consts.const_str_digest_eff1ebf8e24555571e729d3dbe6fe527");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_minus", mod_consts.const_str_plain_minus);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_minus) && "mod_consts.const_str_plain_minus");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1f10fef42e31e2fcb22fe97619060033", mod_consts.const_str_digest_1f10fef42e31e2fcb22fe97619060033);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_1f10fef42e31e2fcb22fe97619060033) && "mod_consts.const_str_digest_1f10fef42e31e2fcb22fe97619060033");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_multiply", mod_consts.const_str_plain_multiply);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_multiply) && "mod_consts.const_str_plain_multiply");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b25c438a59d09a27c771ef59a338c51d", mod_consts.const_str_digest_b25c438a59d09a27c771ef59a338c51d);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_b25c438a59d09a27c771ef59a338c51d) && "mod_consts.const_str_digest_b25c438a59d09a27c771ef59a338c51d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_divide", mod_consts.const_str_plain_divide);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_divide) && "mod_consts.const_str_plain_divide");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_848a1d83812e81674286f760046b2a9d", mod_consts.const_str_digest_848a1d83812e81674286f760046b2a9d);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_848a1d83812e81674286f760046b2a9d) && "mod_consts.const_str_digest_848a1d83812e81674286f760046b2a9d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0d2da33b391380fc5112efcae09ed23f", mod_consts.const_str_digest_0d2da33b391380fc5112efcae09ed23f);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_0d2da33b391380fc5112efcae09ed23f) && "mod_consts.const_str_digest_0d2da33b391380fc5112efcae09ed23f");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 1
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
static PyObject *module_var_accessor_operations$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_operations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_operations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_operations, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_operations->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_operations, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_operations, (Nuitka_StringObject *)const_str_plain___spec__);
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
static PyObject *MAKE_FUNCTION_operations$$$function__1_plus(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_operations$$$function__2_minus(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_operations$$$function__3_multiply(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_operations$$$function__4_divide(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_operations$$$function__1_plus(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_n1 = python_pars[1];
PyObject *par_n2 = python_pars[2];
struct Nuitka_FrameObject *frame_frame_operations$$$function__1_plus;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_operations$$$function__1_plus = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_operations$$$function__1_plus)) {
    Py_XDECREF(cache_frame_frame_operations$$$function__1_plus);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_operations$$$function__1_plus == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_operations$$$function__1_plus = MAKE_FUNCTION_FRAME(tstate, USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_3d82c815c1457b65101ce55dd20dada7, module_filename_obj), module_operations, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_operations$$$function__1_plus->m_type_description == NULL);
frame_frame_operations$$$function__1_plus = cache_frame_frame_operations$$$function__1_plus;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_operations$$$function__1_plus);
assert(Py_REFCNT(frame_frame_operations$$$function__1_plus) == 2);

// Framed code:
{
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(par_n1);
tmp_add_expr_left_1 = par_n1;
CHECK_OBJECT(par_n2);
tmp_add_expr_right_1 = par_n2;
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_return_exit_1:

// Put the previous frame back on top.
popFrameStack(tstate);

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_operations$$$function__1_plus, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_operations$$$function__1_plus->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_operations$$$function__1_plus, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_operations$$$function__1_plus,
    type_description_1,
    par_self,
    par_n1,
    par_n2
);


// Release cached frame if used for exception.
if (frame_frame_operations$$$function__1_plus == cache_frame_frame_operations$$$function__1_plus) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_operations$$$function__1_plus);
    cache_frame_frame_operations$$$function__1_plus = NULL;
}

assertFrameObject(frame_frame_operations$$$function__1_plus);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_n1);
Py_DECREF(par_n1);
CHECK_OBJECT(par_n2);
Py_DECREF(par_n2);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_n1);
Py_DECREF(par_n1);
CHECK_OBJECT(par_n2);
Py_DECREF(par_n2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_operations$$$function__2_minus(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_n1 = python_pars[1];
PyObject *par_n2 = python_pars[2];
struct Nuitka_FrameObject *frame_frame_operations$$$function__2_minus;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_operations$$$function__2_minus = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_operations$$$function__2_minus)) {
    Py_XDECREF(cache_frame_frame_operations$$$function__2_minus);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_operations$$$function__2_minus == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_operations$$$function__2_minus = MAKE_FUNCTION_FRAME(tstate, USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_32771056370be648cdb98776a97ad22f, module_filename_obj), module_operations, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_operations$$$function__2_minus->m_type_description == NULL);
frame_frame_operations$$$function__2_minus = cache_frame_frame_operations$$$function__2_minus;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_operations$$$function__2_minus);
assert(Py_REFCNT(frame_frame_operations$$$function__2_minus) == 2);

// Framed code:
{
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
CHECK_OBJECT(par_n1);
tmp_sub_expr_left_1 = par_n1;
CHECK_OBJECT(par_n2);
tmp_sub_expr_right_1 = par_n2;
tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_return_exit_1:

// Put the previous frame back on top.
popFrameStack(tstate);

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_operations$$$function__2_minus, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_operations$$$function__2_minus->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_operations$$$function__2_minus, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_operations$$$function__2_minus,
    type_description_1,
    par_self,
    par_n1,
    par_n2
);


// Release cached frame if used for exception.
if (frame_frame_operations$$$function__2_minus == cache_frame_frame_operations$$$function__2_minus) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_operations$$$function__2_minus);
    cache_frame_frame_operations$$$function__2_minus = NULL;
}

assertFrameObject(frame_frame_operations$$$function__2_minus);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_n1);
Py_DECREF(par_n1);
CHECK_OBJECT(par_n2);
Py_DECREF(par_n2);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_n1);
Py_DECREF(par_n1);
CHECK_OBJECT(par_n2);
Py_DECREF(par_n2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_operations$$$function__3_multiply(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_n1 = python_pars[1];
PyObject *par_n2 = python_pars[2];
struct Nuitka_FrameObject *frame_frame_operations$$$function__3_multiply;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_operations$$$function__3_multiply = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_operations$$$function__3_multiply)) {
    Py_XDECREF(cache_frame_frame_operations$$$function__3_multiply);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_operations$$$function__3_multiply == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_operations$$$function__3_multiply = MAKE_FUNCTION_FRAME(tstate, USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_3ae5246c4e286026350142b723fd95af, module_filename_obj), module_operations, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_operations$$$function__3_multiply->m_type_description == NULL);
frame_frame_operations$$$function__3_multiply = cache_frame_frame_operations$$$function__3_multiply;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_operations$$$function__3_multiply);
assert(Py_REFCNT(frame_frame_operations$$$function__3_multiply) == 2);

// Framed code:
{
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
CHECK_OBJECT(par_n1);
tmp_mult_expr_left_1 = par_n1;
CHECK_OBJECT(par_n2);
tmp_mult_expr_right_1 = par_n2;
tmp_return_value = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_return_exit_1:

// Put the previous frame back on top.
popFrameStack(tstate);

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_operations$$$function__3_multiply, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_operations$$$function__3_multiply->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_operations$$$function__3_multiply, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_operations$$$function__3_multiply,
    type_description_1,
    par_self,
    par_n1,
    par_n2
);


// Release cached frame if used for exception.
if (frame_frame_operations$$$function__3_multiply == cache_frame_frame_operations$$$function__3_multiply) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_operations$$$function__3_multiply);
    cache_frame_frame_operations$$$function__3_multiply = NULL;
}

assertFrameObject(frame_frame_operations$$$function__3_multiply);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_n1);
Py_DECREF(par_n1);
CHECK_OBJECT(par_n2);
Py_DECREF(par_n2);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_n1);
Py_DECREF(par_n1);
CHECK_OBJECT(par_n2);
Py_DECREF(par_n2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_operations$$$function__4_divide(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_n1 = python_pars[1];
PyObject *par_n2 = python_pars[2];
struct Nuitka_FrameObject *frame_frame_operations$$$function__4_divide;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_operations$$$function__4_divide = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_operations$$$function__4_divide)) {
    Py_XDECREF(cache_frame_frame_operations$$$function__4_divide);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_operations$$$function__4_divide == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_operations$$$function__4_divide = MAKE_FUNCTION_FRAME(tstate, USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_57245b8ad61642b095b842e51c01a14c, module_filename_obj), module_operations, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_operations$$$function__4_divide->m_type_description == NULL);
frame_frame_operations$$$function__4_divide = cache_frame_frame_operations$$$function__4_divide;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_operations$$$function__4_divide);
assert(Py_REFCNT(frame_frame_operations$$$function__4_divide) == 2);

// Framed code:
{
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
CHECK_OBJECT(par_n1);
tmp_truediv_expr_left_1 = par_n1;
CHECK_OBJECT(par_n2);
tmp_truediv_expr_right_1 = par_n2;
tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_return_exit_1:

// Put the previous frame back on top.
popFrameStack(tstate);

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_operations$$$function__4_divide, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_operations$$$function__4_divide->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_operations$$$function__4_divide, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_operations$$$function__4_divide,
    type_description_1,
    par_self,
    par_n1,
    par_n2
);


// Release cached frame if used for exception.
if (frame_frame_operations$$$function__4_divide == cache_frame_frame_operations$$$function__4_divide) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_operations$$$function__4_divide);
    cache_frame_frame_operations$$$function__4_divide = NULL;
}

assertFrameObject(frame_frame_operations$$$function__4_divide);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_n1);
Py_DECREF(par_n1);
CHECK_OBJECT(par_n2);
Py_DECREF(par_n2);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_n1);
Py_DECREF(par_n1);
CHECK_OBJECT(par_n2);
Py_DECREF(par_n2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_operations$$$function__1_plus(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_operations$$$function__1_plus,
        mod_consts.const_str_plain_plus,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_eff1ebf8e24555571e729d3dbe6fe527,
#endif
        USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_3d82c815c1457b65101ce55dd20dada7, module_filename_obj),
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_operations,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_operations$$$function__2_minus(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_operations$$$function__2_minus,
        mod_consts.const_str_plain_minus,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1f10fef42e31e2fcb22fe97619060033,
#endif
        USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_32771056370be648cdb98776a97ad22f, module_filename_obj),
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_operations,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_operations$$$function__3_multiply(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_operations$$$function__3_multiply,
        mod_consts.const_str_plain_multiply,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b25c438a59d09a27c771ef59a338c51d,
#endif
        USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_3ae5246c4e286026350142b723fd95af, module_filename_obj),
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_operations,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_operations$$$function__4_divide(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_operations$$$function__4_divide,
        mod_consts.const_str_plain_divide,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_848a1d83812e81674286f760046b2a9d,
#endif
        USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_57245b8ad61642b095b842e51c01a14c, module_filename_obj),
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_operations,
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

static function_impl_code const function_table_operations[] = {
impl_operations$$$function__1_plus,
impl_operations$$$function__2_minus,
impl_operations$$$function__3_multiply,
impl_operations$$$function__4_divide,
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

    return Nuitka_Function_GetFunctionState(function, function_table_operations);
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
        module_operations,
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
        function_table_operations,
        sizeof(function_table_operations) / sizeof(function_impl_code)
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
static char const *module_full_name = "operations";
#endif

// Internal entry point for module code.
PyObject *module_code_operations(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("operations");

    // Store the module for future use.
    module_operations = module;

    moduledict_operations = MODULE_DICT(module_operations);

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
        PRINT_STRING("operations: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("operations: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("operations: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "operations" "-preLoad", false);
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initoperations\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_operations, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_operations,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_operations,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        UPDATE_STRING_DICT0(
            moduledict_operations,
            (Nuitka_StringObject *)const_str_plain___package__,
            GET_STRING_DICT_VALUE(moduledict_operations, (Nuitka_StringObject *)const_str_plain___name__)
        );
#else
        {
            PyObject *parent_name = makeParentModuleName(
                GET_STRING_DICT_VALUE(moduledict_operations, (Nuitka_StringObject *)const_str_plain___name__)
            );

            if (parent_name != NULL) {
                UPDATE_STRING_DICT1(
                    moduledict_operations,
                    (Nuitka_StringObject *)const_str_plain___package__,
                    parent_name
                );
            }
        }
#endif
    }

    CHECK_OBJECT(module_operations);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_operations, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_operations, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_operations, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0 && !0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_operations, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules, and main modules running as a package (-m flag),
    // get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_operations);
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

        UPDATE_STRING_DICT1(moduledict_operations, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
struct Nuitka_FrameObject *frame_frame_operations;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_operations$$$class__1_Operations_1 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module init code if any
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_0d2da33b391380fc5112efcae09ed23f);;

    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_operations, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_operations, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_operations = MAKE_MODULE_FRAME(USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_0a2961bb78c9c3f4ea4df0baeff72bf9, module_filename_obj), module_operations);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_operations);
assert(Py_REFCNT(frame_frame_operations) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_operations$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_operations$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_operations, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_operations, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_operations$$$class__1_Operations_1 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_plain_operations;
tmp_result = DICT_SET_ITEM(locals_operations$$$class__1_Operations_1, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_Operations;
tmp_result = DICT_SET_ITEM(locals_operations$$$class__1_Operations_1, const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = const_int_pos_1;
tmp_result = DICT_SET_ITEM(locals_operations$$$class__1_Operations_1, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_operations$$$function__1_plus(tstate);

tmp_result = DICT_SET_ITEM(locals_operations$$$class__1_Operations_1, mod_consts.const_str_plain_plus, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_operations$$$function__2_minus(tstate);

tmp_result = DICT_SET_ITEM(locals_operations$$$class__1_Operations_1, mod_consts.const_str_plain_minus, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_operations$$$function__3_multiply(tstate);

tmp_result = DICT_SET_ITEM(locals_operations$$$class__1_Operations_1, mod_consts.const_str_plain_multiply, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_operations$$$function__4_divide(tstate);

tmp_result = DICT_SET_ITEM(locals_operations$$$class__1_Operations_1, mod_consts.const_str_plain_divide, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = const_tuple_empty;
tmp_result = DICT_SET_ITEM(locals_operations$$$class__1_Operations_1, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_metaclass_value_1;
PyObject *tmp_name_value_1;
PyObject *tmp_bases_value_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
tmp_name_value_1 = mod_consts.const_str_plain_Operations;
tmp_bases_value_1 = const_tuple_empty;
tmp_dict_arg_value_1 = locals_operations$$$class__1_Operations_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_1, tmp_bases_value_1, tmp_dict_arg_value_1);
tmp_assign_source_8 = CALL_FUNCTION(tstate, tmp_metaclass_value_1, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto try_except_handler_3;
}
{
    PyObject *old = outline_0_var___class__;
    outline_0_var___class__ = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_7 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_7);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_operations$$$class__1_Operations_1);
locals_operations$$$class__1_Operations_1 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_operations$$$class__1_Operations_1);
locals_operations$$$class__1_Operations_1 = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_operations, (Nuitka_StringObject *)mod_consts.const_str_plain_Operations, tmp_assign_source_7);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
Py_DECREF(tmp_class_container$class_creation_1__prepared);
tmp_class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
Py_DECREF(tmp_class_container$class_creation_1__prepared);
tmp_class_container$class_creation_1__prepared = NULL;
tmp_outline_return_value_1 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_1);
goto outline_result_1;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_operations, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_operations->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_operations, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_operations);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("operations", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "operations" "-postLoad", false);
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_operations);
    return module_operations;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_operations, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("operations", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
