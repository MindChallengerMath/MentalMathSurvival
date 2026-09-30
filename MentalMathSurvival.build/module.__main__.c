/* Generated code for Python module '__main__'
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



/* The "module___main__" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module___main__;
PyDictObject *moduledict___main__;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject * const_str_plain___mro_entries__;
PyObject * const_str_plain_bases;
PyObject * const_str_plain___getitem__;
PyObject * const_str_digest_adc474dd61fbd736d69c1bac5d9712e0;
PyObject * const_str_digest_9816e8d1552296af90d250823c964059;
PyObject * const_str_digest_fdd1f239b4f3ffd6efcccf00e4a637e0;
PyObject * const_str_plain_called;
PyObject * const_str_plain_star_arg_dict;
PyObject * const_str_plain_sys;
PyObject * const_codeobj_6778d70bb0a2568e74476cc24e3f716d;
PyObject * const_str_plain_sceneChanger;
PyObject * const_tuple_str_plain_SceneChanger_tuple;
PyObject * const_str_plain_SceneChanger;
PyObject * const_str_plain_operations;
PyObject * const_tuple_str_plain_Operations_tuple;
PyObject * const_str_plain_Operations;
PyObject * const_str_digest_f20e8af092953f99962301618f9688fe;
PyObject * const_tuple_str_plain_MainMenu_tuple;
PyObject * const_str_plain_MainMenu;
PyObject * const_str_digest_5903e3e78fb9af9b2fe3bf08a191afc6;
PyObject * const_tuple_str_plain_DifficultyMenu_tuple;
PyObject * const_str_plain_DifficultyMenu;
PyObject * const_str_digest_8f92c47793facf553e30aef454d1a1a7;
PyObject * const_tuple_str_plain_Game_tuple;
PyObject * const_str_plain_Game;
PyObject * const_str_digest_4d6103d00e7b576e129039abc8d8159f;
PyObject * const_tuple_str_plain_QApplication_tuple;
PyObject * const_str_plain_QApplication;
PyObject * const_str_digest_b417b19b6d22cc0660e178a7a9a9fa05;
PyObject * const_tuple_str_plain_QIcon_tuple;
PyObject * const_str_plain_QIcon;
PyObject * const_str_plain_argv;
PyObject * const_str_plain_app;
PyObject * const_str_plain_mainMenu;
PyObject * const_str_plain_difficultyMenu;
PyObject * const_str_plain_game;
PyObject * const_str_plain_stack;
PyObject * const_str_plain_insertWidget;
PyObject * const_int_pos_2;
PyObject * const_str_plain_setWindowTitle;
PyObject * const_str_plain_title;
PyObject * const_str_plain_setWindowIcon;
PyObject * const_tuple_str_digest_d0936ad3d079a5ad737aa0786daa6e44_tuple;
PyObject * const_str_plain_setGeometry;
PyObject * const_tuple_int_pos_250_int_pos_100_int_pos_1000_int_pos_600_tuple;
PyObject * const_str_plain_show;
PyObject * const_str_plain_exec;
PyObject * const_str_digest_1358840a8f779ff5b739ae512b8802d1;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[48];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

NUITKA_DECLARE_CONSTANT_BLOB(
    module$__main___bin,
    module$__main___bin,
    const
);

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
#if 0
        LOAD_DIRECT_CONSTANTS_BLOB(tstate, (PyObject **)&mod_consts, module$__main___bin);
#else
        loadConstantsBlob(tstate, &mod_consts, UN_TRANSLATE("__main__"));
#endif
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___mro_entries__", mod_consts.const_str_plain___mro_entries__);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain___mro_entries__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_bases", mod_consts.const_str_plain_bases);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_bases);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_adc474dd61fbd736d69c1bac5d9712e0", mod_consts.const_str_digest_adc474dd61fbd736d69c1bac5d9712e0);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_adc474dd61fbd736d69c1bac5d9712e0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9816e8d1552296af90d250823c964059", mod_consts.const_str_digest_9816e8d1552296af90d250823c964059);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_9816e8d1552296af90d250823c964059);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fdd1f239b4f3ffd6efcccf00e4a637e0", mod_consts.const_str_digest_fdd1f239b4f3ffd6efcccf00e4a637e0);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_fdd1f239b4f3ffd6efcccf00e4a637e0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_called", mod_consts.const_str_plain_called);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_called);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_star_arg_dict", mod_consts.const_str_plain_star_arg_dict);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_star_arg_dict);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sys", mod_consts.const_str_plain_sys);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_6778d70bb0a2568e74476cc24e3f716d", mod_consts.const_codeobj_6778d70bb0a2568e74476cc24e3f716d);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_codeobj_6778d70bb0a2568e74476cc24e3f716d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sceneChanger", mod_consts.const_str_plain_sceneChanger);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_sceneChanger);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_SceneChanger_tuple", mod_consts.const_tuple_str_plain_SceneChanger_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SceneChanger_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SceneChanger", mod_consts.const_str_plain_SceneChanger);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_SceneChanger);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_operations", mod_consts.const_str_plain_operations);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_operations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Operations_tuple", mod_consts.const_tuple_str_plain_Operations_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Operations_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Operations", mod_consts.const_str_plain_Operations);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_Operations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f20e8af092953f99962301618f9688fe", mod_consts.const_str_digest_f20e8af092953f99962301618f9688fe);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_f20e8af092953f99962301618f9688fe);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_MainMenu_tuple", mod_consts.const_tuple_str_plain_MainMenu_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MainMenu_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MainMenu", mod_consts.const_str_plain_MainMenu);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_MainMenu);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5903e3e78fb9af9b2fe3bf08a191afc6", mod_consts.const_str_digest_5903e3e78fb9af9b2fe3bf08a191afc6);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_5903e3e78fb9af9b2fe3bf08a191afc6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_DifficultyMenu_tuple", mod_consts.const_tuple_str_plain_DifficultyMenu_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DifficultyMenu_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DifficultyMenu", mod_consts.const_str_plain_DifficultyMenu);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_DifficultyMenu);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8f92c47793facf553e30aef454d1a1a7", mod_consts.const_str_digest_8f92c47793facf553e30aef454d1a1a7);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_8f92c47793facf553e30aef454d1a1a7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Game_tuple", mod_consts.const_tuple_str_plain_Game_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Game_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Game", mod_consts.const_str_plain_Game);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_Game);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4d6103d00e7b576e129039abc8d8159f", mod_consts.const_str_digest_4d6103d00e7b576e129039abc8d8159f);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_4d6103d00e7b576e129039abc8d8159f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_QApplication_tuple", mod_consts.const_tuple_str_plain_QApplication_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_QApplication_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QApplication", mod_consts.const_str_plain_QApplication);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_QApplication);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b417b19b6d22cc0660e178a7a9a9fa05", mod_consts.const_str_digest_b417b19b6d22cc0660e178a7a9a9fa05);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_b417b19b6d22cc0660e178a7a9a9fa05);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_QIcon_tuple", mod_consts.const_tuple_str_plain_QIcon_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_QIcon_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QIcon", mod_consts.const_str_plain_QIcon);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_QIcon);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_argv", mod_consts.const_str_plain_argv);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_argv);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_app", mod_consts.const_str_plain_app);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_app);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mainMenu", mod_consts.const_str_plain_mainMenu);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_mainMenu);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_difficultyMenu", mod_consts.const_str_plain_difficultyMenu);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_difficultyMenu);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_game", mod_consts.const_str_plain_game);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_game);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_stack", mod_consts.const_str_plain_stack);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_stack);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_insertWidget", mod_consts.const_str_plain_insertWidget);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_insertWidget);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setWindowTitle", mod_consts.const_str_plain_setWindowTitle);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_setWindowTitle);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_title", mod_consts.const_str_plain_title);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_title);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setWindowIcon", mod_consts.const_str_plain_setWindowIcon);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_setWindowIcon);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_d0936ad3d079a5ad737aa0786daa6e44_tuple", mod_consts.const_tuple_str_digest_d0936ad3d079a5ad737aa0786daa6e44_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d0936ad3d079a5ad737aa0786daa6e44_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setGeometry", mod_consts.const_str_plain_setGeometry);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_setGeometry);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_250_int_pos_100_int_pos_1000_int_pos_600_tuple", mod_consts.const_tuple_int_pos_250_int_pos_100_int_pos_1000_int_pos_600_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_250_int_pos_100_int_pos_1000_int_pos_600_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_show", mod_consts.const_str_plain_show);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_show);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exec", mod_consts.const_str_plain_exec);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_exec);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1358840a8f779ff5b739ae512b8802d1", mod_consts.const_str_digest_1358840a8f779ff5b739ae512b8802d1);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_1358840a8f779ff5b739ae512b8802d1);
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 1
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants___main__(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___mro_entries__", mod_consts.const_str_plain___mro_entries__);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain___mro_entries__) && "mod_consts.const_str_plain___mro_entries__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_bases", mod_consts.const_str_plain_bases);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_bases) && "mod_consts.const_str_plain_bases");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_adc474dd61fbd736d69c1bac5d9712e0", mod_consts.const_str_digest_adc474dd61fbd736d69c1bac5d9712e0);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_adc474dd61fbd736d69c1bac5d9712e0) && "mod_consts.const_str_digest_adc474dd61fbd736d69c1bac5d9712e0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9816e8d1552296af90d250823c964059", mod_consts.const_str_digest_9816e8d1552296af90d250823c964059);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_9816e8d1552296af90d250823c964059) && "mod_consts.const_str_digest_9816e8d1552296af90d250823c964059");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fdd1f239b4f3ffd6efcccf00e4a637e0", mod_consts.const_str_digest_fdd1f239b4f3ffd6efcccf00e4a637e0);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_fdd1f239b4f3ffd6efcccf00e4a637e0) && "mod_consts.const_str_digest_fdd1f239b4f3ffd6efcccf00e4a637e0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_called", mod_consts.const_str_plain_called);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_called) && "mod_consts.const_str_plain_called");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_star_arg_dict", mod_consts.const_str_plain_star_arg_dict);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_star_arg_dict) && "mod_consts.const_str_plain_star_arg_dict");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sys", mod_consts.const_str_plain_sys);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys) && "mod_consts.const_str_plain_sys");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_6778d70bb0a2568e74476cc24e3f716d", mod_consts.const_codeobj_6778d70bb0a2568e74476cc24e3f716d);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_codeobj_6778d70bb0a2568e74476cc24e3f716d) && "mod_consts.const_codeobj_6778d70bb0a2568e74476cc24e3f716d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sceneChanger", mod_consts.const_str_plain_sceneChanger);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_sceneChanger) && "mod_consts.const_str_plain_sceneChanger");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_SceneChanger_tuple", mod_consts.const_tuple_str_plain_SceneChanger_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SceneChanger_tuple) && "mod_consts.const_tuple_str_plain_SceneChanger_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SceneChanger", mod_consts.const_str_plain_SceneChanger);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_SceneChanger) && "mod_consts.const_str_plain_SceneChanger");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_operations", mod_consts.const_str_plain_operations);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_operations) && "mod_consts.const_str_plain_operations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Operations_tuple", mod_consts.const_tuple_str_plain_Operations_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Operations_tuple) && "mod_consts.const_tuple_str_plain_Operations_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Operations", mod_consts.const_str_plain_Operations);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_Operations) && "mod_consts.const_str_plain_Operations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f20e8af092953f99962301618f9688fe", mod_consts.const_str_digest_f20e8af092953f99962301618f9688fe);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_f20e8af092953f99962301618f9688fe) && "mod_consts.const_str_digest_f20e8af092953f99962301618f9688fe");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_MainMenu_tuple", mod_consts.const_tuple_str_plain_MainMenu_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MainMenu_tuple) && "mod_consts.const_tuple_str_plain_MainMenu_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MainMenu", mod_consts.const_str_plain_MainMenu);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_MainMenu) && "mod_consts.const_str_plain_MainMenu");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5903e3e78fb9af9b2fe3bf08a191afc6", mod_consts.const_str_digest_5903e3e78fb9af9b2fe3bf08a191afc6);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_5903e3e78fb9af9b2fe3bf08a191afc6) && "mod_consts.const_str_digest_5903e3e78fb9af9b2fe3bf08a191afc6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_DifficultyMenu_tuple", mod_consts.const_tuple_str_plain_DifficultyMenu_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DifficultyMenu_tuple) && "mod_consts.const_tuple_str_plain_DifficultyMenu_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DifficultyMenu", mod_consts.const_str_plain_DifficultyMenu);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_DifficultyMenu) && "mod_consts.const_str_plain_DifficultyMenu");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8f92c47793facf553e30aef454d1a1a7", mod_consts.const_str_digest_8f92c47793facf553e30aef454d1a1a7);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_8f92c47793facf553e30aef454d1a1a7) && "mod_consts.const_str_digest_8f92c47793facf553e30aef454d1a1a7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Game_tuple", mod_consts.const_tuple_str_plain_Game_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Game_tuple) && "mod_consts.const_tuple_str_plain_Game_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Game", mod_consts.const_str_plain_Game);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_Game) && "mod_consts.const_str_plain_Game");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4d6103d00e7b576e129039abc8d8159f", mod_consts.const_str_digest_4d6103d00e7b576e129039abc8d8159f);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_4d6103d00e7b576e129039abc8d8159f) && "mod_consts.const_str_digest_4d6103d00e7b576e129039abc8d8159f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_QApplication_tuple", mod_consts.const_tuple_str_plain_QApplication_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_QApplication_tuple) && "mod_consts.const_tuple_str_plain_QApplication_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QApplication", mod_consts.const_str_plain_QApplication);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_QApplication) && "mod_consts.const_str_plain_QApplication");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b417b19b6d22cc0660e178a7a9a9fa05", mod_consts.const_str_digest_b417b19b6d22cc0660e178a7a9a9fa05);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_b417b19b6d22cc0660e178a7a9a9fa05) && "mod_consts.const_str_digest_b417b19b6d22cc0660e178a7a9a9fa05");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_QIcon_tuple", mod_consts.const_tuple_str_plain_QIcon_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_QIcon_tuple) && "mod_consts.const_tuple_str_plain_QIcon_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QIcon", mod_consts.const_str_plain_QIcon);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_QIcon) && "mod_consts.const_str_plain_QIcon");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_argv", mod_consts.const_str_plain_argv);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_argv) && "mod_consts.const_str_plain_argv");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_app", mod_consts.const_str_plain_app);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_app) && "mod_consts.const_str_plain_app");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mainMenu", mod_consts.const_str_plain_mainMenu);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_mainMenu) && "mod_consts.const_str_plain_mainMenu");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_difficultyMenu", mod_consts.const_str_plain_difficultyMenu);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_difficultyMenu) && "mod_consts.const_str_plain_difficultyMenu");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_game", mod_consts.const_str_plain_game);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_game) && "mod_consts.const_str_plain_game");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_stack", mod_consts.const_str_plain_stack);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_stack) && "mod_consts.const_str_plain_stack");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_insertWidget", mod_consts.const_str_plain_insertWidget);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_insertWidget) && "mod_consts.const_str_plain_insertWidget");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_int_pos_2) && "mod_consts.const_int_pos_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setWindowTitle", mod_consts.const_str_plain_setWindowTitle);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_setWindowTitle) && "mod_consts.const_str_plain_setWindowTitle");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_title", mod_consts.const_str_plain_title);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_title) && "mod_consts.const_str_plain_title");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setWindowIcon", mod_consts.const_str_plain_setWindowIcon);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_setWindowIcon) && "mod_consts.const_str_plain_setWindowIcon");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_d0936ad3d079a5ad737aa0786daa6e44_tuple", mod_consts.const_tuple_str_digest_d0936ad3d079a5ad737aa0786daa6e44_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d0936ad3d079a5ad737aa0786daa6e44_tuple) && "mod_consts.const_tuple_str_digest_d0936ad3d079a5ad737aa0786daa6e44_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setGeometry", mod_consts.const_str_plain_setGeometry);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_setGeometry) && "mod_consts.const_str_plain_setGeometry");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_250_int_pos_100_int_pos_1000_int_pos_600_tuple", mod_consts.const_tuple_int_pos_250_int_pos_100_int_pos_1000_int_pos_600_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_250_int_pos_100_int_pos_1000_int_pos_600_tuple) && "mod_consts.const_tuple_int_pos_250_int_pos_100_int_pos_1000_int_pos_600_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_show", mod_consts.const_str_plain_show);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_show) && "mod_consts.const_str_plain_show");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exec", mod_consts.const_str_plain_exec);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_exec) && "mod_consts.const_str_plain_exec");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1358840a8f779ff5b739ae512b8802d1", mod_consts.const_str_digest_1358840a8f779ff5b739ae512b8802d1);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_1358840a8f779ff5b739ae512b8802d1) && "mod_consts.const_str_digest_1358840a8f779ff5b739ae512b8802d1");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 13
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
static PyObject *module_var_accessor___main__$DifficultyMenu(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict___main__->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict___main__->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_DifficultyMenu);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict___main__->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DifficultyMenu);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DifficultyMenu, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DifficultyMenu);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DifficultyMenu, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_DifficultyMenu);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_DifficultyMenu);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DifficultyMenu);
    }

    return result;
}

static PyObject *module_var_accessor___main__$Game(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict___main__->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict___main__->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_Game);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict___main__->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Game);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Game, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Game);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Game, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_Game);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_Game);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Game);
    }

    return result;
}

static PyObject *module_var_accessor___main__$MainMenu(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict___main__->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict___main__->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_MainMenu);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict___main__->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MainMenu);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MainMenu, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MainMenu);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MainMenu, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_MainMenu);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_MainMenu);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MainMenu);
    }

    return result;
}

static PyObject *module_var_accessor___main__$Operations(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict___main__->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict___main__->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_Operations);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict___main__->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Operations);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Operations, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Operations);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Operations, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_Operations);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_Operations);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Operations);
    }

    return result;
}

static PyObject *module_var_accessor___main__$QApplication(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict___main__->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict___main__->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_QApplication);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict___main__->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_QApplication);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_QApplication, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_QApplication);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_QApplication, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_QApplication);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_QApplication);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_QApplication);
    }

    return result;
}

static PyObject *module_var_accessor___main__$QIcon(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict___main__->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict___main__->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_QIcon);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict___main__->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_QIcon);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_QIcon, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_QIcon);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_QIcon, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_QIcon);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_QIcon);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_QIcon);
    }

    return result;
}

static PyObject *module_var_accessor___main__$SceneChanger(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict___main__->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict___main__->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_SceneChanger);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict___main__->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SceneChanger);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SceneChanger, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SceneChanger);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SceneChanger, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_SceneChanger);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_SceneChanger);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SceneChanger);
    }

    return result;
}

static PyObject *module_var_accessor___main__$app(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict___main__->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict___main__->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_app);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict___main__->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_app);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_app, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_app);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_app, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_app);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_app);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_app);
    }

    return result;
}

static PyObject *module_var_accessor___main__$difficultyMenu(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict___main__->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict___main__->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_difficultyMenu);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict___main__->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_difficultyMenu);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_difficultyMenu, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_difficultyMenu);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_difficultyMenu, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_difficultyMenu);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_difficultyMenu);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_difficultyMenu);
    }

    return result;
}

static PyObject *module_var_accessor___main__$game(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict___main__->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict___main__->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_game);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict___main__->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_game);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_game, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_game);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_game, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_game);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_game);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_game);
    }

    return result;
}

static PyObject *module_var_accessor___main__$mainMenu(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict___main__->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict___main__->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_mainMenu);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict___main__->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_mainMenu);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_mainMenu, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_mainMenu);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_mainMenu, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_mainMenu);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_mainMenu);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_mainMenu);
    }

    return result;
}

static PyObject *module_var_accessor___main__$operations(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict___main__->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict___main__->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_operations);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict___main__->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_operations);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_operations, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_operations);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_operations, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_operations);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_operations);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_operations);
    }

    return result;
}

static PyObject *module_var_accessor___main__$sceneChanger(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict___main__->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict___main__->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_sceneChanger);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict___main__->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_sceneChanger);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_sceneChanger, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_sceneChanger);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_sceneChanger, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_sceneChanger);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_sceneChanger);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_sceneChanger);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.


static void createModuleCodeObjects(void) {

}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_LOCAL_MODULE PyObject *impl___main__$$$helper_function_get_callable_name_desc(PyThreadState *tstate, PyObject **python_pars);


// The module function definitions.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
PyObject *par_bases = python_pars[0];
PyObject *tmp_base = NULL;
PyObject *tmp_iter = NULL;
PyObject *tmp_list = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_bases);
tmp_iter_arg_1 = par_bases;
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
{
    PyObject *old = tmp_iter;
    tmp_iter = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = tmp_list;
    tmp_list = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_iter);
tmp_next_source_1 = tmp_iter;
tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        goto try_except_handler_1;
    }
}

{
    PyObject *old = tmp_base;
    tmp_base = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_type_check_cls_1;
CHECK_OBJECT(tmp_base);
tmp_type_check_cls_1 = tmp_base;
tmp_res = PyType_Check(tmp_type_check_cls_1);
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
CHECK_OBJECT(tmp_list);
tmp_append_list_1 = tmp_list;
CHECK_OBJECT(tmp_base);
tmp_append_value_1 = tmp_base;
tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
}
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_base);
tmp_expression_value_1 = tmp_base;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain___mro_entries__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_value_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(tmp_list);
tmp_list_arg_value_1 = tmp_list;
CHECK_OBJECT(tmp_base);
tmp_expression_value_2 = tmp_base;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain___mro_entries__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
if (par_bases == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bases);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_args_element_value_1 = par_bases;
tmp_value_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
tmp_result = LIST_EXTEND_FROM_ITERABLE(tstate, tmp_list_arg_value_1, tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_append_list_2;
PyObject *tmp_append_value_2;
CHECK_OBJECT(tmp_list);
tmp_append_list_2 = tmp_list;
CHECK_OBJECT(tmp_base);
tmp_append_value_2 = tmp_base;
tmp_result = LIST_APPEND0(tmp_append_list_2, tmp_append_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
}
branch_end_2:;
branch_end_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
goto loop_start_1;
loop_end_1:;
{
PyObject *tmp_tuple_arg_1;
CHECK_OBJECT(tmp_list);
tmp_tuple_arg_1 = tmp_list;
tmp_return_value = PySequence_Tuple(tmp_tuple_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(tmp_list);
CHECK_OBJECT(tmp_list);
Py_DECREF(tmp_list);
tmp_list = NULL;
CHECK_OBJECT(tmp_iter);
CHECK_OBJECT(tmp_iter);
Py_DECREF(tmp_iter);
tmp_iter = NULL;
Py_XDECREF(tmp_base);
tmp_base = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_list);
tmp_list = NULL;
Py_XDECREF(tmp_iter);
tmp_iter = NULL;
Py_XDECREF(tmp_base);
tmp_base = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_bases);
Py_DECREF(par_bases);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_bases);
Py_DECREF(par_bases);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
PyObject *par_called = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *par_star_arg_list = python_pars[2];
PyObject *par_star_arg_dict = python_pars[3];
PyObject *tmp_mapping_1__dict = NULL;
PyObject *tmp_mapping_1__iter = NULL;
PyObject *tmp_mapping_1__key = NULL;
PyObject *tmp_mapping_1__keys = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_type_arg_1;
CHECK_OBJECT(par_star_arg_list);
tmp_type_arg_1 = par_star_arg_list;
tmp_cmp_expr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_cmp_expr_left_1 == NULL));
tmp_cmp_expr_right_1 = (PyObject *)&PyTuple_Type;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
bool tmp_condition_result_2;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_star_arg_list);
tmp_expression_value_1 = par_star_arg_list;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, const_str_plain___iter__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
tmp_or_left_value_1 = (tmp_res != 0) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_star_arg_list);
tmp_expression_value_2 = par_star_arg_list;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
tmp_or_right_value_1 = (tmp_res != 0) ? true : false;
tmp_condition_result_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_2 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_tuple_arg_1;
CHECK_OBJECT(par_star_arg_list);
tmp_tuple_arg_1 = par_star_arg_list;
tmp_assign_source_1 = PySequence_Tuple(tmp_tuple_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
{
    PyObject *old = par_star_arg_list;
    assert(old != NULL);
    par_star_arg_list = tmp_assign_source_1;
    Py_DECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg1_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_adc474dd61fbd736d69c1bac5d9712e0;
CHECK_OBJECT(par_called);
tmp_direct_call_arg1_1 = par_called;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_tuple_element_1 = impl___main__$$$helper_function_get_callable_name_desc(tstate, dir_call_args);
}
assert(!(tmp_tuple_element_1 == NULL));
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_3;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_star_arg_list);
tmp_type_arg_2 = par_star_arg_list;
tmp_expression_value_3 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_3 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto function_exception_exit;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto function_exception_exit;
}
branch_end_2:;
branch_no_1:;
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_type_arg_3;
CHECK_OBJECT(par_star_arg_dict);
tmp_type_arg_3 = par_star_arg_dict;
tmp_cmp_expr_left_2 = BUILTIN_TYPE1(tmp_type_arg_3);
assert(!(tmp_cmp_expr_left_2 == NULL));
tmp_cmp_expr_right_2 = (PyObject *)&PyDict_Type;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_star_arg_dict);
tmp_expression_value_4 = par_star_arg_dict;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_keys);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_2;
}
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_2;
}
{
    PyObject *old = tmp_mapping_1__keys;
    tmp_mapping_1__keys = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = exception_keeper_name_1.exception_value;
tmp_cmp_expr_right_3 = PyExc_AttributeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
assert(!(tmp_res == -1));
tmp_condition_result_4 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_direct_call_arg1_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_9816e8d1552296af90d250823c964059;
CHECK_OBJECT(par_called);
tmp_direct_call_arg1_2 = par_called;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_tuple_element_2 = impl___main__$$$helper_function_get_callable_name_desc(tstate, dir_call_args);
}
assert(!(tmp_tuple_element_2 == NULL));
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_5;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_star_arg_dict);
tmp_type_arg_4 = par_star_arg_dict;
tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_5 == NULL));
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);



    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);
goto try_except_handler_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);



    goto try_except_handler_1;
}
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
goto branch_end_4;
branch_no_4:;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_1;
branch_end_4:;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(tmp_mapping_1__keys);
tmp_iter_arg_1 = tmp_mapping_1__keys;
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
{
    PyObject *old = tmp_mapping_1__iter;
    tmp_mapping_1__iter = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = tmp_mapping_1__dict;
    tmp_mapping_1__dict = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_mapping_1__iter);
tmp_next_source_1 = tmp_mapping_1__iter;
tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        goto try_except_handler_1;
    }
}

{
    PyObject *old = tmp_mapping_1__key;
    tmp_mapping_1__key = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_5;
PyObject *tmp_key_value_1;
PyObject *tmp_dict_arg_value_1;
CHECK_OBJECT(tmp_mapping_1__key);
tmp_key_value_1 = tmp_mapping_1__key;
CHECK_OBJECT(tmp_mapping_1__dict);
tmp_dict_arg_value_1 = tmp_mapping_1__dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_direct_call_arg1_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_fdd1f239b4f3ffd6efcccf00e4a637e0;
if (par_called == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_called);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_direct_call_arg1_3 = par_called;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_tuple_element_3 = impl___main__$$$helper_function_get_callable_name_desc(tstate, dir_call_args);
}
assert(!(tmp_tuple_element_3 == NULL));
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_mapping_1__key);
tmp_tuple_element_3 = tmp_mapping_1__key;
PyTuple_SET_ITEM0(tmp_mod_expr_right_3, 1, tmp_tuple_element_3);
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_5:;
{
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_1;
if (par_star_arg_dict == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_star_arg_dict);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_expression_value_6 = par_star_arg_dict;
CHECK_OBJECT(tmp_mapping_1__key);
tmp_subscript_value_1 = tmp_mapping_1__key;
tmp_dictset_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_mapping_1__dict);
tmp_dictset_dict = tmp_mapping_1__dict;
CHECK_OBJECT(tmp_mapping_1__key);
tmp_dictset_key = tmp_mapping_1__key;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
goto loop_start_1;
loop_end_1:;
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_mapping_1__dict);
tmp_assign_source_6 = tmp_mapping_1__dict;
{
    PyObject *old = par_star_arg_dict;
    par_star_arg_dict = tmp_assign_source_6;
    Py_INCREF(par_star_arg_dict);
    Py_XDECREF(old);
}

}
branch_no_3:;
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_mapping_1__dict);
tmp_mapping_1__dict = NULL;
Py_XDECREF(tmp_mapping_1__iter);
tmp_mapping_1__iter = NULL;
Py_XDECREF(tmp_mapping_1__keys);
tmp_mapping_1__keys = NULL;
Py_XDECREF(tmp_mapping_1__key);
tmp_mapping_1__key = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(tmp_mapping_1__dict);
tmp_mapping_1__dict = NULL;
Py_XDECREF(tmp_mapping_1__iter);
tmp_mapping_1__iter = NULL;
Py_XDECREF(tmp_mapping_1__keys);
tmp_mapping_1__keys = NULL;
Py_XDECREF(tmp_mapping_1__key);
tmp_mapping_1__key = NULL;
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_kwargs_value_1;
if (par_called == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_called);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto function_exception_exit;
}

tmp_called_value_2 = par_called;
CHECK_OBJECT(par_args);
tmp_add_expr_left_1 = par_args;
CHECK_OBJECT(par_star_arg_list);
tmp_add_expr_right_1 = par_star_arg_list;
tmp_args_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_args_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
CHECK_OBJECT(par_star_arg_dict);
tmp_kwargs_value_1 = par_star_arg_dict;
tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_called);
Py_DECREF(par_called);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_star_arg_list);
Py_DECREF(par_star_arg_list);
CHECK_OBJECT(par_star_arg_dict);
Py_DECREF(par_star_arg_dict);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_called);
Py_DECREF(par_called);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_star_arg_list);
Py_DECREF(par_star_arg_list);
CHECK_OBJECT(par_star_arg_dict);
Py_DECREF(par_star_arg_dict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


NUITKA_LOCAL_MODULE PyObject *impl___main__$$$helper_function_get_callable_name_desc(PyThreadState *tstate, PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
PyObject *par_called = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_func_arg_1;
CHECK_OBJECT(par_called);
tmp_func_arg_1 = par_called;
tmp_return_value = _PyObject_FunctionStr(tmp_func_arg_1);
assert(!(tmp_return_value == NULL));
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_called);
Py_DECREF(par_called);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
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

static function_impl_code const function_table___main__[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table___main__);
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
        module___main__,
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
        function_table___main__,
        sizeof(function_table___main__) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Actual name might be different when loaded as a package.
#if _NUITKA_MODULE_MODE && 1
static char const *module_full_name = "__main__";
#endif

// Internal entry point for module code.
PyObject *module_code___main__(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("__main__");

    // Store the module for future use.
    module___main__ = module;

    moduledict___main__ = MODULE_DICT(module___main__);

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if _NUITKA_MODULE_MODE && 1
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
        PRINT_STRING("__main__: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("__main__: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("__main__: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 1
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "__main__" "-preLoad", false);
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in init__main__\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict___main__,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 1
        UPDATE_STRING_DICT0(
            moduledict___main__,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#elif 0
        UPDATE_STRING_DICT0(
            moduledict___main__,
            (Nuitka_StringObject *)const_str_plain___package__,
            GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__)
        );
#else
        {
            PyObject *parent_name = makeParentModuleName(
                GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__)
            );

            if (parent_name != NULL) {
                UPDATE_STRING_DICT1(
                    moduledict___main__,
                    (Nuitka_StringObject *)const_str_plain___package__,
                    parent_name
                );
            }
        }
#endif
    }

    CHECK_OBJECT(module___main__);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !1
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 1 && !0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules, and main modules running as a package (-m flag),
    // get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module___main__);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

        // Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

#if _NUITKA_MODULE_MODE && 1 && 0 >= 0
        // Set our loader object in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain_loader, module_loader);
#endif

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame___main__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module init code if any
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_1358840a8f779ff5b739ae512b8802d1);;

    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = Py_None;
UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_5);
}
frame_frame___main__ = MAKE_MODULE_FRAME(USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_6778d70bb0a2568e74476cc24e3f716d, module_filename_obj), module___main__);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame___main__);
assert(Py_REFCNT(frame_frame___main__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_sceneChanger;
tmp_globals_arg_value_1 = (PyObject *)moduledict___main__;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_SceneChanger_tuple;
tmp_level_value_1 = const_int_0;
frame_frame___main__->m_frame.f_lineno = 2;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict___main__,
        mod_consts.const_str_plain_SceneChanger,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_SceneChanger);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_SceneChanger, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_operations;
tmp_globals_arg_value_2 = (PyObject *)moduledict___main__;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Operations_tuple;
tmp_level_value_2 = const_int_0;
frame_frame___main__->m_frame.f_lineno = 3;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict___main__,
        mod_consts.const_str_plain_Operations,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Operations);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_Operations, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_f20e8af092953f99962301618f9688fe;
tmp_globals_arg_value_3 = (PyObject *)moduledict___main__;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_MainMenu_tuple;
tmp_level_value_3 = const_int_0;
frame_frame___main__->m_frame.f_lineno = 4;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict___main__,
        mod_consts.const_str_plain_MainMenu,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_MainMenu);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_MainMenu, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_5903e3e78fb9af9b2fe3bf08a191afc6;
tmp_globals_arg_value_4 = (PyObject *)moduledict___main__;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_DifficultyMenu_tuple;
tmp_level_value_4 = const_int_0;
frame_frame___main__->m_frame.f_lineno = 5;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict___main__,
        mod_consts.const_str_plain_DifficultyMenu,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_DifficultyMenu);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_DifficultyMenu, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_8f92c47793facf553e30aef454d1a1a7;
tmp_globals_arg_value_5 = (PyObject *)moduledict___main__;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_Game_tuple;
tmp_level_value_5 = const_int_0;
frame_frame___main__->m_frame.f_lineno = 6;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict___main__,
        mod_consts.const_str_plain_Game,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Game);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_Game, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_4d6103d00e7b576e129039abc8d8159f;
tmp_globals_arg_value_6 = (PyObject *)moduledict___main__;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_QApplication_tuple;
tmp_level_value_6 = const_int_0;
frame_frame___main__->m_frame.f_lineno = 7;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict___main__,
        mod_consts.const_str_plain_QApplication,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_QApplication);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_QApplication, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_b417b19b6d22cc0660e178a7a9a9fa05;
tmp_globals_arg_value_7 = (PyObject *)moduledict___main__;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_QIcon_tuple;
tmp_level_value_7 = const_int_0;
frame_frame___main__->m_frame.f_lineno = 8;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict___main__,
        mod_consts.const_str_plain_QIcon,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_QIcon);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_QIcon, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor___main__$QApplication(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_QApplication);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 12;

    goto frame_exception_exit_1;
}
tmp_expression_value_1 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_1 == NULL));
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_argv);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
frame_frame___main__->m_frame.f_lineno = 12;
tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_app, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor___main__$SceneChanger(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SceneChanger);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 13;

    goto frame_exception_exit_1;
}
frame_frame___main__->m_frame.f_lineno = 13;
tmp_assign_source_14 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_sceneChanger, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor___main__$Operations(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Operations);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 14;

    goto frame_exception_exit_1;
}
frame_frame___main__->m_frame.f_lineno = 14;
tmp_assign_source_15 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_operations, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
tmp_called_value_4 = module_var_accessor___main__$MainMenu(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MainMenu);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 15;

    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor___main__$sceneChanger(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sceneChanger);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 15;

    goto frame_exception_exit_1;
}
frame_frame___main__->m_frame.f_lineno = 15;
tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_mainMenu, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_3;
tmp_called_value_5 = module_var_accessor___main__$DifficultyMenu(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DifficultyMenu);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 16;

    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = module_var_accessor___main__$sceneChanger(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sceneChanger);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 16;

    goto frame_exception_exit_1;
}
frame_frame___main__->m_frame.f_lineno = 16;
tmp_assign_source_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_difficultyMenu, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_6 = module_var_accessor___main__$Game(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Game);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 17;

    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = module_var_accessor___main__$operations(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_operations);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 17;

    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = module_var_accessor___main__$difficultyMenu(tstate);
assert(!(tmp_args_element_value_5 == NULL));
tmp_args_element_value_6 = module_var_accessor___main__$sceneChanger(tstate);
if (unlikely(tmp_args_element_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sceneChanger);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 17;

    goto frame_exception_exit_1;
}
frame_frame___main__->m_frame.f_lineno = 17;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_game, tmp_assign_source_18);
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_expression_value_3 = module_var_accessor___main__$sceneChanger(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sceneChanger);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;

    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_stack);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_insertWidget);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = const_int_0;
tmp_args_element_value_8 = module_var_accessor___main__$mainMenu(tstate);
if (unlikely(tmp_args_element_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mainMenu);
}

if (tmp_args_element_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);

exception_lineno = 19;

    goto frame_exception_exit_1;
}
frame_frame___main__->m_frame.f_lineno = 19;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_expression_value_5 = module_var_accessor___main__$sceneChanger(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sceneChanger);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 20;

    goto frame_exception_exit_1;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_stack);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_insertWidget);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = const_int_pos_1;
tmp_args_element_value_10 = module_var_accessor___main__$difficultyMenu(tstate);
if (unlikely(tmp_args_element_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_difficultyMenu);
}

if (tmp_args_element_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);

exception_lineno = 20;

    goto frame_exception_exit_1;
}
frame_frame___main__->m_frame.f_lineno = 20;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
tmp_expression_value_7 = module_var_accessor___main__$sceneChanger(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sceneChanger);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 21;

    goto frame_exception_exit_1;
}
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_stack);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_insertWidget);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
tmp_args_element_value_11 = mod_consts.const_int_pos_2;
tmp_args_element_value_12 = module_var_accessor___main__$game(tstate);
if (unlikely(tmp_args_element_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_game);
}

if (tmp_args_element_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_9);

exception_lineno = 21;

    goto frame_exception_exit_1;
}
frame_frame___main__->m_frame.f_lineno = 21;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_13;
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_format_spec_1;
tmp_expression_value_9 = module_var_accessor___main__$sceneChanger(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sceneChanger);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 22;

    goto frame_exception_exit_1;
}
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_stack);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_setWindowTitle);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
tmp_expression_value_10 = module_var_accessor___main__$mainMenu(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mainMenu);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_10);

exception_lineno = 22;

    goto frame_exception_exit_1;
}
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_title);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 22;

    goto frame_exception_exit_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_args_element_value_13 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 22;

    goto frame_exception_exit_1;
}
frame_frame___main__->m_frame.f_lineno = 22;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_14;
PyObject *tmp_called_value_12;
tmp_expression_value_12 = module_var_accessor___main__$sceneChanger(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sceneChanger);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 23;

    goto frame_exception_exit_1;
}
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_stack);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_setWindowIcon);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
tmp_called_value_12 = module_var_accessor___main__$QIcon(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_QIcon);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);

exception_lineno = 23;

    goto frame_exception_exit_1;
}
frame_frame___main__->m_frame.f_lineno = 23;
tmp_args_element_value_14 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_12, mod_consts.const_tuple_str_digest_d0936ad3d079a5ad737aa0786daa6e44_tuple);

if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 23;

    goto frame_exception_exit_1;
}
frame_frame___main__->m_frame.f_lineno = 23;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_13;
PyObject *tmp_call_result_6;
tmp_expression_value_13 = module_var_accessor___main__$sceneChanger(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sceneChanger);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 24;

    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_stack);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
frame_frame___main__->m_frame.f_lineno = 24;
tmp_call_result_6 = CALL_METHOD_WITH_ARGS4(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_setGeometry,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_250_int_pos_100_int_pos_1000_int_pos_600_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_14;
PyObject *tmp_call_result_7;
tmp_expression_value_14 = module_var_accessor___main__$sceneChanger(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sceneChanger);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 25;

    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_stack);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
frame_frame___main__->m_frame.f_lineno = 25;
tmp_call_result_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_show);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_called_instance_3;
tmp_called_instance_3 = module_var_accessor___main__$app(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_app);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 26;

    goto frame_exception_exit_1;
}
frame_frame___main__->m_frame.f_lineno = 26;
tmp_make_exception_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_exec);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
tmp_raise_type_1 = MAKE_EXCEPTION_WITH_VALUE(tstate, PyExc_SystemExit, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 26;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame___main__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame___main__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame___main__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame___main__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("__main__", false);

#if _NUITKA_MODULE_MODE && 1
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "__main__" "-postLoad", false);
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module___main__);
    return module___main__;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 1
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("__main__", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
