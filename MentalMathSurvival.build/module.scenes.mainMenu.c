/* Generated code for Python module 'scenes$mainMenu'
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



/* The "module_scenes$mainMenu" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scenes$mainMenu;
PyDictObject *moduledict_scenes$mainMenu;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject * const_codeobj_c70ca49ea1349f94423430570037db38;
PyObject * const_str_plain_sceneChanger;
PyObject * const_str_digest_62ba6ba532da135582929705d680e436;
PyObject * const_str_plain_title;
PyObject * const_str_plain_QLabel;
PyObject * const_str_plain_label;
PyObject * const_str_plain_setAlignment;
PyObject * const_str_plain_Qt;
PyObject * const_str_plain_AlignCenter;
PyObject * const_str_plain_QPushButton;
PyObject * const_tuple_str_plain_Start_tuple;
PyObject * const_str_plain_startButton;
PyObject * const_str_plain_clicked;
PyObject * const_str_plain_connect;
PyObject * const_str_plain_start;
PyObject * const_tuple_str_plain_Exit_tuple;
PyObject * const_str_plain_exitButton;
PyObject * const_str_plain_exit;
PyObject * const_tuple_str_plain_Yes_tuple;
PyObject * const_str_plain_yesButton;
PyObject * const_str_plain_yes;
PyObject * const_tuple_str_plain_No_tuple;
PyObject * const_str_plain_noButton;
PyObject * const_str_plain_no;
PyObject * const_str_plain_initUI;
PyObject * const_codeobj_83673ab032360db1d5b1a019795323f4;
PyObject * const_str_plain_QVBoxLayout;
PyObject * const_str_plain_vbox;
PyObject * const_str_plain_QHBoxLayout;
PyObject * const_str_plain_hbox;
PyObject * const_str_plain_setLayout;
PyObject * const_str_plain_setStyleSheet;
PyObject * const_tuple_str_digest_14b8b0ac394cabdd9a1ac8373bc20d53_tuple;
PyObject * const_str_plain_addWidget;
PyObject * const_str_plain_addLayout;
PyObject * const_str_plain_hide;
PyObject * const_codeobj_753db212355ba80c2bd8de6f87121257;
PyObject * const_str_plain_changeScene;
PyObject * const_tuple_int_pos_1_tuple;
PyObject * const_codeobj_89bda0a62d36d82be3a55d6c52fd696f;
PyObject * const_str_plain_setText;
PyObject * const_tuple_str_digest_acae873eb4df00bc4965fcd84cecaa0a_tuple;
PyObject * const_str_plain_show;
PyObject * const_codeobj_16918e9e8d90140d226f60b71c5f8050;
PyObject * const_codeobj_ea8136ccdc2e2c7700a1c75200f87ad6;
PyObject * const_codeobj_66ac35f08b593d9266a75446e1a77015;
PyObject * const_str_plain_origin;
PyObject * const_str_plain_has_location;
PyObject * const_str_digest_4d6103d00e7b576e129039abc8d8159f;
PyObject * const_tuple_580ffbfe2e9c5072108ee3d7fca66dde_tuple;
PyObject * const_str_plain_QWidget;
PyObject * const_str_digest_6f58f8c1126c067a27ac68fd038b69f1;
PyObject * const_tuple_str_plain_Qt_tuple;
PyObject * const_str_plain_sys;
PyObject * const_str_plain___prepare__;
PyObject * const_str_plain_MainMenu;
PyObject * const_str_plain___getitem__;
PyObject * const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject * const_str_angle_metaclass;
PyObject * const_str_digest_f20e8af092953f99962301618f9688fe;
PyObject * const_int_pos_8;
PyObject * const_str_plain___firstlineno__;
PyObject * const_codeobj_4bb177dafa62c2f5308c92829ff21d93;
PyObject * const_str_digest_d82935589ff7610c209a0746d18f7a7f;
PyObject * const_str_digest_17517ac0920d1c9303014b3fcb4b1dcc;
PyObject * const_str_digest_3b67b6fd51075308bb5ccac94cb265ff;
PyObject * const_str_digest_82364d58041d3aea95c1f3ff3c5ed9dd;
PyObject * const_str_digest_d445be6a043333f5c2841b6f86e726a7;
PyObject * const_str_digest_3f160160f87bbcd6209c92f9d8307c6d;
PyObject * const_tuple_0511f1b1ed51bd5ca5ec1d0cdce54490_tuple;
PyObject * const_str_plain___static_attributes__;
PyObject * const_str_plain___orig_bases__;
PyObject * const_str_digest_804d3c12df9488647d52f0a9c26caa2a;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[73];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

NUITKA_DECLARE_CONSTANT_BLOB(
    module$scenes$mainMenu_bin,
    module$scenes$mainMenu_bin,
    const
);

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
#if 0
        LOAD_DIRECT_CONSTANTS_BLOB(tstate, (PyObject **)&mod_consts, module$scenes$mainMenu_bin);
#else
        loadConstantsBlob(tstate, &mod_consts, UN_TRANSLATE("scenes.mainMenu"));
#endif
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_c70ca49ea1349f94423430570037db38", mod_consts.const_codeobj_c70ca49ea1349f94423430570037db38);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_codeobj_c70ca49ea1349f94423430570037db38);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sceneChanger", mod_consts.const_str_plain_sceneChanger);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_sceneChanger);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_62ba6ba532da135582929705d680e436", mod_consts.const_str_digest_62ba6ba532da135582929705d680e436);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_62ba6ba532da135582929705d680e436);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_title", mod_consts.const_str_plain_title);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_title);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QLabel", mod_consts.const_str_plain_QLabel);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_QLabel);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_label", mod_consts.const_str_plain_label);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_label);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setAlignment", mod_consts.const_str_plain_setAlignment);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_setAlignment);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Qt", mod_consts.const_str_plain_Qt);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_Qt);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AlignCenter", mod_consts.const_str_plain_AlignCenter);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_AlignCenter);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QPushButton", mod_consts.const_str_plain_QPushButton);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_QPushButton);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Start_tuple", mod_consts.const_tuple_str_plain_Start_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Start_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_startButton", mod_consts.const_str_plain_startButton);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_startButton);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_clicked", mod_consts.const_str_plain_clicked);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_clicked);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connect", mod_consts.const_str_plain_connect);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_connect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_start", mod_consts.const_str_plain_start);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_start);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Exit_tuple", mod_consts.const_tuple_str_plain_Exit_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Exit_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exitButton", mod_consts.const_str_plain_exitButton);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_exitButton);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exit", mod_consts.const_str_plain_exit);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_exit);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Yes_tuple", mod_consts.const_tuple_str_plain_Yes_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Yes_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_yesButton", mod_consts.const_str_plain_yesButton);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_yesButton);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_yes", mod_consts.const_str_plain_yes);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_yes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_No_tuple", mod_consts.const_tuple_str_plain_No_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_No_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_noButton", mod_consts.const_str_plain_noButton);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_noButton);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_no", mod_consts.const_str_plain_no);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_no);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_initUI", mod_consts.const_str_plain_initUI);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_initUI);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_83673ab032360db1d5b1a019795323f4", mod_consts.const_codeobj_83673ab032360db1d5b1a019795323f4);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_codeobj_83673ab032360db1d5b1a019795323f4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QVBoxLayout", mod_consts.const_str_plain_QVBoxLayout);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_QVBoxLayout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_vbox", mod_consts.const_str_plain_vbox);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_vbox);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QHBoxLayout", mod_consts.const_str_plain_QHBoxLayout);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_QHBoxLayout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hbox", mod_consts.const_str_plain_hbox);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_hbox);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setLayout", mod_consts.const_str_plain_setLayout);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_setLayout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setStyleSheet", mod_consts.const_str_plain_setStyleSheet);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_setStyleSheet);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_14b8b0ac394cabdd9a1ac8373bc20d53_tuple", mod_consts.const_tuple_str_digest_14b8b0ac394cabdd9a1ac8373bc20d53_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_14b8b0ac394cabdd9a1ac8373bc20d53_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_addWidget", mod_consts.const_str_plain_addWidget);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_addWidget);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_addLayout", mod_consts.const_str_plain_addLayout);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_addLayout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hide", mod_consts.const_str_plain_hide);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_hide);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_753db212355ba80c2bd8de6f87121257", mod_consts.const_codeobj_753db212355ba80c2bd8de6f87121257);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_codeobj_753db212355ba80c2bd8de6f87121257);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_changeScene", mod_consts.const_str_plain_changeScene);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_changeScene);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_1_tuple", mod_consts.const_tuple_int_pos_1_tuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_89bda0a62d36d82be3a55d6c52fd696f", mod_consts.const_codeobj_89bda0a62d36d82be3a55d6c52fd696f);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_codeobj_89bda0a62d36d82be3a55d6c52fd696f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setText", mod_consts.const_str_plain_setText);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_setText);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_acae873eb4df00bc4965fcd84cecaa0a_tuple", mod_consts.const_tuple_str_digest_acae873eb4df00bc4965fcd84cecaa0a_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_acae873eb4df00bc4965fcd84cecaa0a_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_show", mod_consts.const_str_plain_show);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_show);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_16918e9e8d90140d226f60b71c5f8050", mod_consts.const_codeobj_16918e9e8d90140d226f60b71c5f8050);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_codeobj_16918e9e8d90140d226f60b71c5f8050);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_ea8136ccdc2e2c7700a1c75200f87ad6", mod_consts.const_codeobj_ea8136ccdc2e2c7700a1c75200f87ad6);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_codeobj_ea8136ccdc2e2c7700a1c75200f87ad6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_66ac35f08b593d9266a75446e1a77015", mod_consts.const_codeobj_66ac35f08b593d9266a75446e1a77015);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_codeobj_66ac35f08b593d9266a75446e1a77015);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4d6103d00e7b576e129039abc8d8159f", mod_consts.const_str_digest_4d6103d00e7b576e129039abc8d8159f);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_4d6103d00e7b576e129039abc8d8159f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_580ffbfe2e9c5072108ee3d7fca66dde_tuple", mod_consts.const_tuple_580ffbfe2e9c5072108ee3d7fca66dde_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_580ffbfe2e9c5072108ee3d7fca66dde_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QWidget", mod_consts.const_str_plain_QWidget);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_QWidget);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6f58f8c1126c067a27ac68fd038b69f1", mod_consts.const_str_digest_6f58f8c1126c067a27ac68fd038b69f1);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_6f58f8c1126c067a27ac68fd038b69f1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Qt_tuple", mod_consts.const_tuple_str_plain_Qt_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Qt_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sys", mod_consts.const_str_plain_sys);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MainMenu", mod_consts.const_str_plain_MainMenu);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_MainMenu);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f20e8af092953f99962301618f9688fe", mod_consts.const_str_digest_f20e8af092953f99962301618f9688fe);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_f20e8af092953f99962301618f9688fe);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8", mod_consts.const_int_pos_8);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_int_pos_8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_4bb177dafa62c2f5308c92829ff21d93", mod_consts.const_codeobj_4bb177dafa62c2f5308c92829ff21d93);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_codeobj_4bb177dafa62c2f5308c92829ff21d93);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d82935589ff7610c209a0746d18f7a7f", mod_consts.const_str_digest_d82935589ff7610c209a0746d18f7a7f);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_d82935589ff7610c209a0746d18f7a7f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_17517ac0920d1c9303014b3fcb4b1dcc", mod_consts.const_str_digest_17517ac0920d1c9303014b3fcb4b1dcc);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_17517ac0920d1c9303014b3fcb4b1dcc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3b67b6fd51075308bb5ccac94cb265ff", mod_consts.const_str_digest_3b67b6fd51075308bb5ccac94cb265ff);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_3b67b6fd51075308bb5ccac94cb265ff);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_82364d58041d3aea95c1f3ff3c5ed9dd", mod_consts.const_str_digest_82364d58041d3aea95c1f3ff3c5ed9dd);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_82364d58041d3aea95c1f3ff3c5ed9dd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d445be6a043333f5c2841b6f86e726a7", mod_consts.const_str_digest_d445be6a043333f5c2841b6f86e726a7);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_d445be6a043333f5c2841b6f86e726a7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3f160160f87bbcd6209c92f9d8307c6d", mod_consts.const_str_digest_3f160160f87bbcd6209c92f9d8307c6d);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_3f160160f87bbcd6209c92f9d8307c6d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_0511f1b1ed51bd5ca5ec1d0cdce54490_tuple", mod_consts.const_tuple_0511f1b1ed51bd5ca5ec1d0cdce54490_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_0511f1b1ed51bd5ca5ec1d0cdce54490_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_804d3c12df9488647d52f0a9c26caa2a", mod_consts.const_str_digest_804d3c12df9488647d52f0a9c26caa2a);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_804d3c12df9488647d52f0a9c26caa2a);
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
void checkModuleConstants_scenes$mainMenu(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_c70ca49ea1349f94423430570037db38", mod_consts.const_codeobj_c70ca49ea1349f94423430570037db38);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_codeobj_c70ca49ea1349f94423430570037db38) && "mod_consts.const_codeobj_c70ca49ea1349f94423430570037db38");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sceneChanger", mod_consts.const_str_plain_sceneChanger);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_sceneChanger) && "mod_consts.const_str_plain_sceneChanger");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_62ba6ba532da135582929705d680e436", mod_consts.const_str_digest_62ba6ba532da135582929705d680e436);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_62ba6ba532da135582929705d680e436) && "mod_consts.const_str_digest_62ba6ba532da135582929705d680e436");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_title", mod_consts.const_str_plain_title);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_title) && "mod_consts.const_str_plain_title");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QLabel", mod_consts.const_str_plain_QLabel);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_QLabel) && "mod_consts.const_str_plain_QLabel");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_label", mod_consts.const_str_plain_label);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_label) && "mod_consts.const_str_plain_label");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setAlignment", mod_consts.const_str_plain_setAlignment);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_setAlignment) && "mod_consts.const_str_plain_setAlignment");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Qt", mod_consts.const_str_plain_Qt);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_Qt) && "mod_consts.const_str_plain_Qt");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AlignCenter", mod_consts.const_str_plain_AlignCenter);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_AlignCenter) && "mod_consts.const_str_plain_AlignCenter");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QPushButton", mod_consts.const_str_plain_QPushButton);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_QPushButton) && "mod_consts.const_str_plain_QPushButton");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Start_tuple", mod_consts.const_tuple_str_plain_Start_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Start_tuple) && "mod_consts.const_tuple_str_plain_Start_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_startButton", mod_consts.const_str_plain_startButton);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_startButton) && "mod_consts.const_str_plain_startButton");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_clicked", mod_consts.const_str_plain_clicked);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_clicked) && "mod_consts.const_str_plain_clicked");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connect", mod_consts.const_str_plain_connect);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_connect) && "mod_consts.const_str_plain_connect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_start", mod_consts.const_str_plain_start);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_start) && "mod_consts.const_str_plain_start");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Exit_tuple", mod_consts.const_tuple_str_plain_Exit_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Exit_tuple) && "mod_consts.const_tuple_str_plain_Exit_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exitButton", mod_consts.const_str_plain_exitButton);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_exitButton) && "mod_consts.const_str_plain_exitButton");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exit", mod_consts.const_str_plain_exit);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_exit) && "mod_consts.const_str_plain_exit");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Yes_tuple", mod_consts.const_tuple_str_plain_Yes_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Yes_tuple) && "mod_consts.const_tuple_str_plain_Yes_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_yesButton", mod_consts.const_str_plain_yesButton);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_yesButton) && "mod_consts.const_str_plain_yesButton");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_yes", mod_consts.const_str_plain_yes);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_yes) && "mod_consts.const_str_plain_yes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_No_tuple", mod_consts.const_tuple_str_plain_No_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_No_tuple) && "mod_consts.const_tuple_str_plain_No_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_noButton", mod_consts.const_str_plain_noButton);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_noButton) && "mod_consts.const_str_plain_noButton");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_no", mod_consts.const_str_plain_no);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_no) && "mod_consts.const_str_plain_no");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_initUI", mod_consts.const_str_plain_initUI);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_initUI) && "mod_consts.const_str_plain_initUI");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_83673ab032360db1d5b1a019795323f4", mod_consts.const_codeobj_83673ab032360db1d5b1a019795323f4);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_codeobj_83673ab032360db1d5b1a019795323f4) && "mod_consts.const_codeobj_83673ab032360db1d5b1a019795323f4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QVBoxLayout", mod_consts.const_str_plain_QVBoxLayout);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_QVBoxLayout) && "mod_consts.const_str_plain_QVBoxLayout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_vbox", mod_consts.const_str_plain_vbox);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_vbox) && "mod_consts.const_str_plain_vbox");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QHBoxLayout", mod_consts.const_str_plain_QHBoxLayout);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_QHBoxLayout) && "mod_consts.const_str_plain_QHBoxLayout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hbox", mod_consts.const_str_plain_hbox);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_hbox) && "mod_consts.const_str_plain_hbox");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setLayout", mod_consts.const_str_plain_setLayout);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_setLayout) && "mod_consts.const_str_plain_setLayout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setStyleSheet", mod_consts.const_str_plain_setStyleSheet);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_setStyleSheet) && "mod_consts.const_str_plain_setStyleSheet");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_14b8b0ac394cabdd9a1ac8373bc20d53_tuple", mod_consts.const_tuple_str_digest_14b8b0ac394cabdd9a1ac8373bc20d53_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_14b8b0ac394cabdd9a1ac8373bc20d53_tuple) && "mod_consts.const_tuple_str_digest_14b8b0ac394cabdd9a1ac8373bc20d53_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_addWidget", mod_consts.const_str_plain_addWidget);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_addWidget) && "mod_consts.const_str_plain_addWidget");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_addLayout", mod_consts.const_str_plain_addLayout);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_addLayout) && "mod_consts.const_str_plain_addLayout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hide", mod_consts.const_str_plain_hide);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_hide) && "mod_consts.const_str_plain_hide");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_753db212355ba80c2bd8de6f87121257", mod_consts.const_codeobj_753db212355ba80c2bd8de6f87121257);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_codeobj_753db212355ba80c2bd8de6f87121257) && "mod_consts.const_codeobj_753db212355ba80c2bd8de6f87121257");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_changeScene", mod_consts.const_str_plain_changeScene);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_changeScene) && "mod_consts.const_str_plain_changeScene");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_1_tuple", mod_consts.const_tuple_int_pos_1_tuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple) && "mod_consts.const_tuple_int_pos_1_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_89bda0a62d36d82be3a55d6c52fd696f", mod_consts.const_codeobj_89bda0a62d36d82be3a55d6c52fd696f);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_codeobj_89bda0a62d36d82be3a55d6c52fd696f) && "mod_consts.const_codeobj_89bda0a62d36d82be3a55d6c52fd696f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setText", mod_consts.const_str_plain_setText);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_setText) && "mod_consts.const_str_plain_setText");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_acae873eb4df00bc4965fcd84cecaa0a_tuple", mod_consts.const_tuple_str_digest_acae873eb4df00bc4965fcd84cecaa0a_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_acae873eb4df00bc4965fcd84cecaa0a_tuple) && "mod_consts.const_tuple_str_digest_acae873eb4df00bc4965fcd84cecaa0a_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_show", mod_consts.const_str_plain_show);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_show) && "mod_consts.const_str_plain_show");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_16918e9e8d90140d226f60b71c5f8050", mod_consts.const_codeobj_16918e9e8d90140d226f60b71c5f8050);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_codeobj_16918e9e8d90140d226f60b71c5f8050) && "mod_consts.const_codeobj_16918e9e8d90140d226f60b71c5f8050");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_ea8136ccdc2e2c7700a1c75200f87ad6", mod_consts.const_codeobj_ea8136ccdc2e2c7700a1c75200f87ad6);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_codeobj_ea8136ccdc2e2c7700a1c75200f87ad6) && "mod_consts.const_codeobj_ea8136ccdc2e2c7700a1c75200f87ad6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_66ac35f08b593d9266a75446e1a77015", mod_consts.const_codeobj_66ac35f08b593d9266a75446e1a77015);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_codeobj_66ac35f08b593d9266a75446e1a77015) && "mod_consts.const_codeobj_66ac35f08b593d9266a75446e1a77015");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4d6103d00e7b576e129039abc8d8159f", mod_consts.const_str_digest_4d6103d00e7b576e129039abc8d8159f);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_4d6103d00e7b576e129039abc8d8159f) && "mod_consts.const_str_digest_4d6103d00e7b576e129039abc8d8159f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_580ffbfe2e9c5072108ee3d7fca66dde_tuple", mod_consts.const_tuple_580ffbfe2e9c5072108ee3d7fca66dde_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_580ffbfe2e9c5072108ee3d7fca66dde_tuple) && "mod_consts.const_tuple_580ffbfe2e9c5072108ee3d7fca66dde_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QWidget", mod_consts.const_str_plain_QWidget);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_QWidget) && "mod_consts.const_str_plain_QWidget");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6f58f8c1126c067a27ac68fd038b69f1", mod_consts.const_str_digest_6f58f8c1126c067a27ac68fd038b69f1);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_6f58f8c1126c067a27ac68fd038b69f1) && "mod_consts.const_str_digest_6f58f8c1126c067a27ac68fd038b69f1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Qt_tuple", mod_consts.const_tuple_str_plain_Qt_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Qt_tuple) && "mod_consts.const_tuple_str_plain_Qt_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sys", mod_consts.const_str_plain_sys);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys) && "mod_consts.const_str_plain_sys");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MainMenu", mod_consts.const_str_plain_MainMenu);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_MainMenu) && "mod_consts.const_str_plain_MainMenu");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f20e8af092953f99962301618f9688fe", mod_consts.const_str_digest_f20e8af092953f99962301618f9688fe);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_f20e8af092953f99962301618f9688fe) && "mod_consts.const_str_digest_f20e8af092953f99962301618f9688fe");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8", mod_consts.const_int_pos_8);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_int_pos_8) && "mod_consts.const_int_pos_8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_4bb177dafa62c2f5308c92829ff21d93", mod_consts.const_codeobj_4bb177dafa62c2f5308c92829ff21d93);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_codeobj_4bb177dafa62c2f5308c92829ff21d93) && "mod_consts.const_codeobj_4bb177dafa62c2f5308c92829ff21d93");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d82935589ff7610c209a0746d18f7a7f", mod_consts.const_str_digest_d82935589ff7610c209a0746d18f7a7f);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_d82935589ff7610c209a0746d18f7a7f) && "mod_consts.const_str_digest_d82935589ff7610c209a0746d18f7a7f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_17517ac0920d1c9303014b3fcb4b1dcc", mod_consts.const_str_digest_17517ac0920d1c9303014b3fcb4b1dcc);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_17517ac0920d1c9303014b3fcb4b1dcc) && "mod_consts.const_str_digest_17517ac0920d1c9303014b3fcb4b1dcc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3b67b6fd51075308bb5ccac94cb265ff", mod_consts.const_str_digest_3b67b6fd51075308bb5ccac94cb265ff);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_3b67b6fd51075308bb5ccac94cb265ff) && "mod_consts.const_str_digest_3b67b6fd51075308bb5ccac94cb265ff");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_82364d58041d3aea95c1f3ff3c5ed9dd", mod_consts.const_str_digest_82364d58041d3aea95c1f3ff3c5ed9dd);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_82364d58041d3aea95c1f3ff3c5ed9dd) && "mod_consts.const_str_digest_82364d58041d3aea95c1f3ff3c5ed9dd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d445be6a043333f5c2841b6f86e726a7", mod_consts.const_str_digest_d445be6a043333f5c2841b6f86e726a7);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_d445be6a043333f5c2841b6f86e726a7) && "mod_consts.const_str_digest_d445be6a043333f5c2841b6f86e726a7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3f160160f87bbcd6209c92f9d8307c6d", mod_consts.const_str_digest_3f160160f87bbcd6209c92f9d8307c6d);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_3f160160f87bbcd6209c92f9d8307c6d) && "mod_consts.const_str_digest_3f160160f87bbcd6209c92f9d8307c6d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_0511f1b1ed51bd5ca5ec1d0cdce54490_tuple", mod_consts.const_tuple_0511f1b1ed51bd5ca5ec1d0cdce54490_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_0511f1b1ed51bd5ca5ec1d0cdce54490_tuple) && "mod_consts.const_tuple_0511f1b1ed51bd5ca5ec1d0cdce54490_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__) && "mod_consts.const_str_plain___orig_bases__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_804d3c12df9488647d52f0a9c26caa2a", mod_consts.const_str_digest_804d3c12df9488647d52f0a9c26caa2a);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_804d3c12df9488647d52f0a9c26caa2a) && "mod_consts.const_str_digest_804d3c12df9488647d52f0a9c26caa2a");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 7
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
static PyObject *module_var_accessor_scenes$mainMenu$QHBoxLayout(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scenes$mainMenu->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scenes$mainMenu->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scenes$mainMenu, (Nuitka_StringObject *)mod_consts.const_str_plain_QHBoxLayout);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scenes$mainMenu->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_QHBoxLayout);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_QHBoxLayout, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_QHBoxLayout);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_QHBoxLayout, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scenes$mainMenu, (Nuitka_StringObject *)mod_consts.const_str_plain_QHBoxLayout);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scenes$mainMenu, (Nuitka_StringObject *)mod_consts.const_str_plain_QHBoxLayout);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_QHBoxLayout);
    }

    return result;
}

static PyObject *module_var_accessor_scenes$mainMenu$QLabel(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scenes$mainMenu->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scenes$mainMenu->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scenes$mainMenu, (Nuitka_StringObject *)mod_consts.const_str_plain_QLabel);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scenes$mainMenu->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_QLabel);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_QLabel, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_QLabel);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_QLabel, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scenes$mainMenu, (Nuitka_StringObject *)mod_consts.const_str_plain_QLabel);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scenes$mainMenu, (Nuitka_StringObject *)mod_consts.const_str_plain_QLabel);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_QLabel);
    }

    return result;
}

static PyObject *module_var_accessor_scenes$mainMenu$QPushButton(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scenes$mainMenu->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scenes$mainMenu->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scenes$mainMenu, (Nuitka_StringObject *)mod_consts.const_str_plain_QPushButton);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scenes$mainMenu->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_QPushButton);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_QPushButton, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_QPushButton);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_QPushButton, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scenes$mainMenu, (Nuitka_StringObject *)mod_consts.const_str_plain_QPushButton);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scenes$mainMenu, (Nuitka_StringObject *)mod_consts.const_str_plain_QPushButton);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_QPushButton);
    }

    return result;
}

static PyObject *module_var_accessor_scenes$mainMenu$QVBoxLayout(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scenes$mainMenu->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scenes$mainMenu->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scenes$mainMenu, (Nuitka_StringObject *)mod_consts.const_str_plain_QVBoxLayout);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scenes$mainMenu->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_QVBoxLayout);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_QVBoxLayout, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_QVBoxLayout);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_QVBoxLayout, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scenes$mainMenu, (Nuitka_StringObject *)mod_consts.const_str_plain_QVBoxLayout);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scenes$mainMenu, (Nuitka_StringObject *)mod_consts.const_str_plain_QVBoxLayout);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_QVBoxLayout);
    }

    return result;
}

static PyObject *module_var_accessor_scenes$mainMenu$QWidget(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scenes$mainMenu->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scenes$mainMenu->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scenes$mainMenu, (Nuitka_StringObject *)mod_consts.const_str_plain_QWidget);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scenes$mainMenu->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_QWidget);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_QWidget, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_QWidget);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_QWidget, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scenes$mainMenu, (Nuitka_StringObject *)mod_consts.const_str_plain_QWidget);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scenes$mainMenu, (Nuitka_StringObject *)mod_consts.const_str_plain_QWidget);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_QWidget);
    }

    return result;
}

static PyObject *module_var_accessor_scenes$mainMenu$Qt(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scenes$mainMenu->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scenes$mainMenu->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scenes$mainMenu, (Nuitka_StringObject *)mod_consts.const_str_plain_Qt);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scenes$mainMenu->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Qt);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Qt, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Qt);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Qt, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scenes$mainMenu, (Nuitka_StringObject *)mod_consts.const_str_plain_Qt);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scenes$mainMenu, (Nuitka_StringObject *)mod_consts.const_str_plain_Qt);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Qt);
    }

    return result;
}

static PyObject *module_var_accessor_scenes$mainMenu$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scenes$mainMenu->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scenes$mainMenu->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scenes$mainMenu, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scenes$mainMenu->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_scenes$mainMenu, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scenes$mainMenu, (Nuitka_StringObject *)const_str_plain___spec__);
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
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_scenes$mainMenu$$$function__1___init__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scenes$mainMenu$$$function__2_initUI(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_scenes$mainMenu$$$function__3_start(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_scenes$mainMenu$$$function__4_exit(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_scenes$mainMenu$$$function__5_yes(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_scenes$mainMenu$$$function__6_no(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_scenes$mainMenu$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_sceneChanger = python_pars[1];
struct Nuitka_FrameObject *frame_frame_scenes$mainMenu$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_scenes$mainMenu$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_scenes$mainMenu$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_scenes$mainMenu$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_scenes$mainMenu$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_scenes$mainMenu$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_c70ca49ea1349f94423430570037db38, module_filename_obj), module_scenes$mainMenu, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_scenes$mainMenu$$$function__1___init__->m_type_description == NULL);
frame_frame_scenes$mainMenu$$$function__1___init__ = cache_frame_frame_scenes$mainMenu$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_scenes$mainMenu$$$function__1___init__);
assert(Py_REFCNT(frame_frame_scenes$mainMenu$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
if (PyCell_GET((PyObject *)self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 12;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = PyCell_GET((PyObject *)self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_scenes$mainMenu, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__1___init__->m_frame.f_lineno = 12;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain___init__);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_sceneChanger);
tmp_ass_attr_value_1 = par_sceneChanger;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_sceneChanger, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
tmp_ass_attr_value_2 = mod_consts.const_str_digest_62ba6ba532da135582929705d680e436;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_title, tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_ass_attr_target_3;
tmp_called_value_1 = module_var_accessor_scenes$mainMenu$QLabel(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_QLabel);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 15;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_title);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__1___init__->m_frame.f_lineno = 15;
tmp_ass_attr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_ass_attr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain_label, tmp_ass_attr_value_3);
CHECK_OBJECT(tmp_ass_attr_value_3);
Py_DECREF(tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_label);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_setAlignment);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_scenes$mainMenu$Qt(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Qt);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 16;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_AlignCenter);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 16;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__1___init__->m_frame.f_lineno = 16;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_ass_attr_value_4;
PyObject *tmp_called_value_3;
PyObject *tmp_ass_attr_target_4;
tmp_called_value_3 = module_var_accessor_scenes$mainMenu$QPushButton(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_QPushButton);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 18;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__1___init__->m_frame.f_lineno = 18;
tmp_ass_attr_value_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_Start_tuple);

if (tmp_ass_attr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_4, mod_consts.const_str_plain_startButton, tmp_ass_attr_value_4);
CHECK_OBJECT(tmp_ass_attr_value_4);
Py_DECREF(tmp_ass_attr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_startButton);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_clicked);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_connect);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_start);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 19;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__1___init__->m_frame.f_lineno = 19;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_ass_attr_value_5;
PyObject *tmp_called_value_5;
PyObject *tmp_ass_attr_target_5;
tmp_called_value_5 = module_var_accessor_scenes$mainMenu$QPushButton(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_QPushButton);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 21;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__1___init__->m_frame.f_lineno = 21;
tmp_ass_attr_value_5 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain_Exit_tuple);

if (tmp_ass_attr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_5, mod_consts.const_str_plain_exitButton, tmp_ass_attr_value_5);
CHECK_OBJECT(tmp_ass_attr_value_5);
Py_DECREF(tmp_ass_attr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_exitButton);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_clicked);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_connect);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_exit);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 22;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__1___init__->m_frame.f_lineno = 22;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_ass_attr_value_6;
PyObject *tmp_called_value_7;
PyObject *tmp_ass_attr_target_6;
tmp_called_value_7 = module_var_accessor_scenes$mainMenu$QPushButton(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_QPushButton);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 24;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__1___init__->m_frame.f_lineno = 24;
tmp_ass_attr_value_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_str_plain_Yes_tuple);

if (tmp_ass_attr_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_6, mod_consts.const_str_plain_yesButton, tmp_ass_attr_value_6);
CHECK_OBJECT(tmp_ass_attr_value_6);
Py_DECREF(tmp_ass_attr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_yesButton);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_clicked);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_connect);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_16 = par_self;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_yes);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 25;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__1___init__->m_frame.f_lineno = 25;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
PyObject *tmp_ass_attr_value_7;
PyObject *tmp_called_value_9;
PyObject *tmp_ass_attr_target_7;
tmp_called_value_9 = module_var_accessor_scenes$mainMenu$QPushButton(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_QPushButton);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__1___init__->m_frame.f_lineno = 27;
tmp_ass_attr_value_7 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_9, mod_consts.const_tuple_str_plain_No_tuple);

if (tmp_ass_attr_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_7, mod_consts.const_str_plain_noButton, tmp_ass_attr_value_7);
CHECK_OBJECT(tmp_ass_attr_value_7);
Py_DECREF(tmp_ass_attr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(par_self);
tmp_expression_value_19 = par_self;
tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_noButton);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_clicked);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_connect);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_20 = par_self;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_no);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 28;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__1___init__->m_frame.f_lineno = 28;
tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_7;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_scenes$mainMenu$$$function__1___init__->m_frame.f_lineno = 30;
tmp_call_result_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_initUI);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_scenes$mainMenu$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_scenes$mainMenu$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scenes$mainMenu$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_scenes$mainMenu$$$function__1___init__,
    type_description_1,
    par_self,
    par_sceneChanger,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_scenes$mainMenu$$$function__1___init__ == cache_frame_frame_scenes$mainMenu$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_scenes$mainMenu$$$function__1___init__);
    cache_frame_frame_scenes$mainMenu$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_scenes$mainMenu$$$function__1___init__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_sceneChanger);
Py_DECREF(par_sceneChanger);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_sceneChanger);
Py_DECREF(par_sceneChanger);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scenes$mainMenu$$$function__2_initUI(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_scenes$mainMenu$$$function__2_initUI;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_scenes$mainMenu$$$function__2_initUI = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_scenes$mainMenu$$$function__2_initUI)) {
    Py_XDECREF(cache_frame_frame_scenes$mainMenu$$$function__2_initUI);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_scenes$mainMenu$$$function__2_initUI == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_scenes$mainMenu$$$function__2_initUI = MAKE_FUNCTION_FRAME(tstate, USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_83673ab032360db1d5b1a019795323f4, module_filename_obj), module_scenes$mainMenu, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_scenes$mainMenu$$$function__2_initUI->m_type_description == NULL);
frame_frame_scenes$mainMenu$$$function__2_initUI = cache_frame_frame_scenes$mainMenu$$$function__2_initUI;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_scenes$mainMenu$$$function__2_initUI);
assert(Py_REFCNT(frame_frame_scenes$mainMenu$$$function__2_initUI) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_called_value_1 = module_var_accessor_scenes$mainMenu$QVBoxLayout(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_QVBoxLayout);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__2_initUI->m_frame.f_lineno = 32;
tmp_ass_attr_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_vbox, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_ass_attr_target_2;
tmp_called_value_2 = module_var_accessor_scenes$mainMenu$QHBoxLayout(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_QHBoxLayout);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__2_initUI->m_frame.f_lineno = 33;
tmp_ass_attr_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_ass_attr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_hbox, tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_value_2);
Py_DECREF(tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_setLayout);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_vbox);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 35;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__2_initUI->m_frame.f_lineno = 35;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_scenes$mainMenu$$$function__2_initUI->m_frame.f_lineno = 36;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_setStyleSheet,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_14b8b0ac394cabdd9a1ac8373bc20d53_tuple, 0)
);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_vbox);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_addWidget);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_label);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 39;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__2_initUI->m_frame.f_lineno = 39;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_vbox);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_addWidget);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_startButton);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 40;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__2_initUI->m_frame.f_lineno = 40;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_vbox);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_addWidget);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_exitButton);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 41;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__2_initUI->m_frame.f_lineno = 41;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_vbox);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_addLayout);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_14 = par_self;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_hbox);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 43;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__2_initUI->m_frame.f_lineno = 43;
tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(par_self);
tmp_expression_value_16 = par_self;
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_hbox);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_addWidget);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_17 = par_self;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_yesButton);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 45;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__2_initUI->m_frame.f_lineno = 45;
tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_18;
PyObject *tmp_call_result_8;
CHECK_OBJECT(par_self);
tmp_expression_value_18 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_yesButton);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__2_initUI->m_frame.f_lineno = 46;
tmp_call_result_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_hide);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_19;
PyObject *tmp_expression_value_20;
PyObject *tmp_call_result_9;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_21;
CHECK_OBJECT(par_self);
tmp_expression_value_20 = par_self;
tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_hbox);
if (tmp_expression_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_addWidget);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_21 = par_self;
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_noButton);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 48;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__2_initUI->m_frame.f_lineno = 48;
tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_22;
PyObject *tmp_call_result_10;
CHECK_OBJECT(par_self);
tmp_expression_value_22 = par_self;
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_noButton);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__2_initUI->m_frame.f_lineno = 49;
tmp_call_result_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_hide);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_call_result_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_10);
Py_DECREF(tmp_call_result_10);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_scenes$mainMenu$$$function__2_initUI, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_scenes$mainMenu$$$function__2_initUI->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scenes$mainMenu$$$function__2_initUI, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_scenes$mainMenu$$$function__2_initUI,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_scenes$mainMenu$$$function__2_initUI == cache_frame_frame_scenes$mainMenu$$$function__2_initUI) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_scenes$mainMenu$$$function__2_initUI);
    cache_frame_frame_scenes$mainMenu$$$function__2_initUI = NULL;
}

assertFrameObject(frame_frame_scenes$mainMenu$$$function__2_initUI);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scenes$mainMenu$$$function__3_start(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_scenes$mainMenu$$$function__3_start;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_scenes$mainMenu$$$function__3_start = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_scenes$mainMenu$$$function__3_start)) {
    Py_XDECREF(cache_frame_frame_scenes$mainMenu$$$function__3_start);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_scenes$mainMenu$$$function__3_start == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_scenes$mainMenu$$$function__3_start = MAKE_FUNCTION_FRAME(tstate, USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_753db212355ba80c2bd8de6f87121257, module_filename_obj), module_scenes$mainMenu, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_scenes$mainMenu$$$function__3_start->m_type_description == NULL);
frame_frame_scenes$mainMenu$$$function__3_start = cache_frame_frame_scenes$mainMenu$$$function__3_start;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_scenes$mainMenu$$$function__3_start);
assert(Py_REFCNT(frame_frame_scenes$mainMenu$$$function__3_start) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_sceneChanger);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__3_start->m_frame.f_lineno = 52;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_changeScene,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_scenes$mainMenu$$$function__3_start, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_scenes$mainMenu$$$function__3_start->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scenes$mainMenu$$$function__3_start, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_scenes$mainMenu$$$function__3_start,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_scenes$mainMenu$$$function__3_start == cache_frame_frame_scenes$mainMenu$$$function__3_start) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_scenes$mainMenu$$$function__3_start);
    cache_frame_frame_scenes$mainMenu$$$function__3_start = NULL;
}

assertFrameObject(frame_frame_scenes$mainMenu$$$function__3_start);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scenes$mainMenu$$$function__4_exit(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_scenes$mainMenu$$$function__4_exit;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_scenes$mainMenu$$$function__4_exit = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_scenes$mainMenu$$$function__4_exit)) {
    Py_XDECREF(cache_frame_frame_scenes$mainMenu$$$function__4_exit);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_scenes$mainMenu$$$function__4_exit == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_scenes$mainMenu$$$function__4_exit = MAKE_FUNCTION_FRAME(tstate, USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_89bda0a62d36d82be3a55d6c52fd696f, module_filename_obj), module_scenes$mainMenu, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_scenes$mainMenu$$$function__4_exit->m_type_description == NULL);
frame_frame_scenes$mainMenu$$$function__4_exit = cache_frame_frame_scenes$mainMenu$$$function__4_exit;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_scenes$mainMenu$$$function__4_exit);
assert(Py_REFCNT(frame_frame_scenes$mainMenu$$$function__4_exit) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_label);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__4_exit->m_frame.f_lineno = 55;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_setText,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_acae873eb4df00bc4965fcd84cecaa0a_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_startButton);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__4_exit->m_frame.f_lineno = 57;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_hide);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_exitButton);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__4_exit->m_frame.f_lineno = 58;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_hide);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_yesButton);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__4_exit->m_frame.f_lineno = 60;
tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_show);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_called_instance_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_noButton);
if (tmp_called_instance_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__4_exit->m_frame.f_lineno = 61;
tmp_call_result_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_show);
CHECK_OBJECT(tmp_called_instance_5);
Py_DECREF(tmp_called_instance_5);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_scenes$mainMenu$$$function__4_exit, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_scenes$mainMenu$$$function__4_exit->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scenes$mainMenu$$$function__4_exit, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_scenes$mainMenu$$$function__4_exit,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_scenes$mainMenu$$$function__4_exit == cache_frame_frame_scenes$mainMenu$$$function__4_exit) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_scenes$mainMenu$$$function__4_exit);
    cache_frame_frame_scenes$mainMenu$$$function__4_exit = NULL;
}

assertFrameObject(frame_frame_scenes$mainMenu$$$function__4_exit);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scenes$mainMenu$$$function__5_yes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_scenes$mainMenu$$$function__5_yes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_scenes$mainMenu$$$function__5_yes = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_scenes$mainMenu$$$function__5_yes)) {
    Py_XDECREF(cache_frame_frame_scenes$mainMenu$$$function__5_yes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_scenes$mainMenu$$$function__5_yes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_scenes$mainMenu$$$function__5_yes = MAKE_FUNCTION_FRAME(tstate, USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_16918e9e8d90140d226f60b71c5f8050, module_filename_obj), module_scenes$mainMenu, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_scenes$mainMenu$$$function__5_yes->m_type_description == NULL);
frame_frame_scenes$mainMenu$$$function__5_yes = cache_frame_frame_scenes$mainMenu$$$function__5_yes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_scenes$mainMenu$$$function__5_yes);
assert(Py_REFCNT(frame_frame_scenes$mainMenu$$$function__5_yes) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
frame_frame_scenes$mainMenu$$$function__5_yes->m_frame.f_lineno = 64;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_SystemExit);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 64;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_scenes$mainMenu$$$function__5_yes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_scenes$mainMenu$$$function__5_yes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scenes$mainMenu$$$function__5_yes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_scenes$mainMenu$$$function__5_yes,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_scenes$mainMenu$$$function__5_yes == cache_frame_frame_scenes$mainMenu$$$function__5_yes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_scenes$mainMenu$$$function__5_yes);
    cache_frame_frame_scenes$mainMenu$$$function__5_yes = NULL;
}

assertFrameObject(frame_frame_scenes$mainMenu$$$function__5_yes);

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
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_scenes$mainMenu$$$function__6_no(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_scenes$mainMenu$$$function__6_no;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_scenes$mainMenu$$$function__6_no = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_scenes$mainMenu$$$function__6_no)) {
    Py_XDECREF(cache_frame_frame_scenes$mainMenu$$$function__6_no);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_scenes$mainMenu$$$function__6_no == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_scenes$mainMenu$$$function__6_no = MAKE_FUNCTION_FRAME(tstate, USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_ea8136ccdc2e2c7700a1c75200f87ad6, module_filename_obj), module_scenes$mainMenu, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_scenes$mainMenu$$$function__6_no->m_type_description == NULL);
frame_frame_scenes$mainMenu$$$function__6_no = cache_frame_frame_scenes$mainMenu$$$function__6_no;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_scenes$mainMenu$$$function__6_no);
assert(Py_REFCNT(frame_frame_scenes$mainMenu$$$function__6_no) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_label);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_setText);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_title);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 67;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__6_no->m_frame.f_lineno = 67;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_yesButton);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__6_no->m_frame.f_lineno = 69;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_hide);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_3;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_noButton);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__6_no->m_frame.f_lineno = 70;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_hide);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_4;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_startButton);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__6_no->m_frame.f_lineno = 72;
tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_show);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_5;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_exitButton);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_scenes$mainMenu$$$function__6_no->m_frame.f_lineno = 73;
tmp_call_result_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_show);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_scenes$mainMenu$$$function__6_no, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_scenes$mainMenu$$$function__6_no->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scenes$mainMenu$$$function__6_no, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_scenes$mainMenu$$$function__6_no,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_scenes$mainMenu$$$function__6_no == cache_frame_frame_scenes$mainMenu$$$function__6_no) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_scenes$mainMenu$$$function__6_no);
    cache_frame_frame_scenes$mainMenu$$$function__6_no = NULL;
}

assertFrameObject(frame_frame_scenes$mainMenu$$$function__6_no);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_scenes$mainMenu$$$function__1___init__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scenes$mainMenu$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d82935589ff7610c209a0746d18f7a7f,
#endif
        USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_c70ca49ea1349f94423430570037db38, module_filename_obj),
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scenes$mainMenu,
        NULL,
        closure,
        1
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scenes$mainMenu$$$function__2_initUI(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scenes$mainMenu$$$function__2_initUI,
        mod_consts.const_str_plain_initUI,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_17517ac0920d1c9303014b3fcb4b1dcc,
#endif
        USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_83673ab032360db1d5b1a019795323f4, module_filename_obj),
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scenes$mainMenu,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scenes$mainMenu$$$function__3_start(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scenes$mainMenu$$$function__3_start,
        mod_consts.const_str_plain_start,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3b67b6fd51075308bb5ccac94cb265ff,
#endif
        USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_753db212355ba80c2bd8de6f87121257, module_filename_obj),
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scenes$mainMenu,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scenes$mainMenu$$$function__4_exit(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scenes$mainMenu$$$function__4_exit,
        mod_consts.const_str_plain_exit,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_82364d58041d3aea95c1f3ff3c5ed9dd,
#endif
        USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_89bda0a62d36d82be3a55d6c52fd696f, module_filename_obj),
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scenes$mainMenu,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scenes$mainMenu$$$function__5_yes(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scenes$mainMenu$$$function__5_yes,
        mod_consts.const_str_plain_yes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d445be6a043333f5c2841b6f86e726a7,
#endif
        USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_16918e9e8d90140d226f60b71c5f8050, module_filename_obj),
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scenes$mainMenu,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scenes$mainMenu$$$function__6_no(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scenes$mainMenu$$$function__6_no,
        mod_consts.const_str_plain_no,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3f160160f87bbcd6209c92f9d8307c6d,
#endif
        USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_ea8136ccdc2e2c7700a1c75200f87ad6, module_filename_obj),
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scenes$mainMenu,
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

static function_impl_code const function_table_scenes$mainMenu[] = {
impl_scenes$mainMenu$$$function__1___init__,
impl_scenes$mainMenu$$$function__2_initUI,
impl_scenes$mainMenu$$$function__3_start,
impl_scenes$mainMenu$$$function__4_exit,
impl_scenes$mainMenu$$$function__5_yes,
impl_scenes$mainMenu$$$function__6_no,
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

    return Nuitka_Function_GetFunctionState(function, function_table_scenes$mainMenu);
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
        module_scenes$mainMenu,
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
        function_table_scenes$mainMenu,
        sizeof(function_table_scenes$mainMenu) / sizeof(function_impl_code)
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
static char const *module_full_name = "scenes.mainMenu";
#endif

// Internal entry point for module code.
PyObject *module_code_scenes$mainMenu(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("scenes$mainMenu");

    // Store the module for future use.
    module_scenes$mainMenu = module;

    moduledict_scenes$mainMenu = MODULE_DICT(module_scenes$mainMenu);

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
        PRINT_STRING("scenes$mainMenu: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("scenes$mainMenu: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("scenes$mainMenu: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "scenes.mainMenu" "-preLoad", false);
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initscenes$mainMenu\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scenes$mainMenu, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_scenes$mainMenu,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_scenes$mainMenu,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        UPDATE_STRING_DICT0(
            moduledict_scenes$mainMenu,
            (Nuitka_StringObject *)const_str_plain___package__,
            GET_STRING_DICT_VALUE(moduledict_scenes$mainMenu, (Nuitka_StringObject *)const_str_plain___name__)
        );
#else
        {
            PyObject *parent_name = makeParentModuleName(
                GET_STRING_DICT_VALUE(moduledict_scenes$mainMenu, (Nuitka_StringObject *)const_str_plain___name__)
            );

            if (parent_name != NULL) {
                UPDATE_STRING_DICT1(
                    moduledict_scenes$mainMenu,
                    (Nuitka_StringObject *)const_str_plain___package__,
                    parent_name
                );
            }
        }
#endif
    }

    CHECK_OBJECT(module_scenes$mainMenu);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_scenes$mainMenu, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_scenes$mainMenu, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_scenes$mainMenu, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0 && !0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_scenes$mainMenu, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules, and main modules running as a package (-m flag),
    // get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_scenes$mainMenu);
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

        UPDATE_STRING_DICT1(moduledict_scenes$mainMenu, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyCellObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_scenes$mainMenu;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_scenes$mainMenu$$$class__1_MainMenu_8 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_scenes$mainMenu$$$class__1_MainMenu_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module init code if any
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_804d3c12df9488647d52f0a9c26caa2a);;

    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_scenes$mainMenu, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_scenes$mainMenu, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_scenes$mainMenu = MAKE_MODULE_FRAME(USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_66ac35f08b593d9266a75446e1a77015, module_filename_obj), module_scenes$mainMenu);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_scenes$mainMenu);
assert(Py_REFCNT(frame_frame_scenes$mainMenu) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_scenes$mainMenu$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_scenes$mainMenu$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_scenes$mainMenu, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_scenes$mainMenu, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_4d6103d00e7b576e129039abc8d8159f;
tmp_globals_arg_value_1 = (PyObject *)moduledict_scenes$mainMenu;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_580ffbfe2e9c5072108ee3d7fca66dde_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_scenes$mainMenu->m_frame.f_lineno = 1;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_scenes$mainMenu,
        mod_consts.const_str_plain_QWidget,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_QWidget);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_scenes$mainMenu, (Nuitka_StringObject *)mod_consts.const_str_plain_QWidget, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_scenes$mainMenu,
        mod_consts.const_str_plain_QLabel,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_QLabel);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_scenes$mainMenu, (Nuitka_StringObject *)mod_consts.const_str_plain_QLabel, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_scenes$mainMenu,
        mod_consts.const_str_plain_QPushButton,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_QPushButton);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_scenes$mainMenu, (Nuitka_StringObject *)mod_consts.const_str_plain_QPushButton, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_scenes$mainMenu,
        mod_consts.const_str_plain_QVBoxLayout,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_QVBoxLayout);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_scenes$mainMenu, (Nuitka_StringObject *)mod_consts.const_str_plain_QVBoxLayout, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_scenes$mainMenu,
        mod_consts.const_str_plain_QHBoxLayout,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_QHBoxLayout);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_scenes$mainMenu, (Nuitka_StringObject *)mod_consts.const_str_plain_QHBoxLayout, tmp_assign_source_10);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_1__module);
CHECK_OBJECT(tmp_import_from_1__module);
Py_DECREF(tmp_import_from_1__module);
tmp_import_from_1__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_import_from_1__module);
CHECK_OBJECT(tmp_import_from_1__module);
Py_DECREF(tmp_import_from_1__module);
tmp_import_from_1__module = NULL;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_6f58f8c1126c067a27ac68fd038b69f1;
tmp_globals_arg_value_2 = (PyObject *)moduledict_scenes$mainMenu;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Qt_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_scenes$mainMenu->m_frame.f_lineno = 6;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_scenes$mainMenu,
        mod_consts.const_str_plain_Qt,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Qt);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_scenes$mainMenu, (Nuitka_StringObject *)mod_consts.const_str_plain_Qt, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_12 == NULL));
UPDATE_STRING_DICT0(moduledict_scenes$mainMenu, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_12);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_scenes$mainMenu$QWidget(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_QWidget);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 8;

    goto try_except_handler_2;
}
tmp_assign_source_13 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_13, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_14 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_1 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_16 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_16;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_MainMenu;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_scenes$mainMenu->m_frame.f_lineno = 8;
tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_17;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_4 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_3;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_3 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_3, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
frame_frame_scenes$mainMenu->m_frame.f_lineno = 8;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 8;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_18;
}
branch_end_1:;
{
PyObject *tmp_assign_source_19;
outline_0_var___class__ = (PyCellObject *)PyCell_New(NULL);
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_scenes$mainMenu$$$class__1_MainMenu_8 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f20e8af092953f99962301618f9688fe;
tmp_res = PyObject_SetItem(locals_scenes$mainMenu$$$class__1_MainMenu_8, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_MainMenu;
tmp_res = PyObject_SetItem(locals_scenes$mainMenu$$$class__1_MainMenu_8, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_8;
tmp_res = PyObject_SetItem(locals_scenes$mainMenu$$$class__1_MainMenu_8, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_4;
}
frame_frame_scenes$mainMenu$$$class__1_MainMenu_2 = MAKE_CLASS_FRAME(tstate, USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_4bb177dafa62c2f5308c92829ff21d93, module_filename_obj), module_scenes$mainMenu, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_scenes$mainMenu$$$class__1_MainMenu_2, locals_scenes$mainMenu$$$class__1_MainMenu_8);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_scenes$mainMenu$$$class__1_MainMenu_2);
assert(Py_REFCNT(frame_frame_scenes$mainMenu$$$class__1_MainMenu_2) == 2);

// Framed code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = (struct Nuitka_CellObject *)outline_0_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_scenes$mainMenu$$$function__1___init__(tstate, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_scenes$mainMenu$$$class__1_MainMenu_8, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_scenes$mainMenu$$$function__2_initUI(tstate);

tmp_res = PyObject_SetItem(locals_scenes$mainMenu$$$class__1_MainMenu_8, mod_consts.const_str_plain_initUI, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_scenes$mainMenu$$$function__3_start(tstate);

tmp_res = PyObject_SetItem(locals_scenes$mainMenu$$$class__1_MainMenu_8, mod_consts.const_str_plain_start, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_scenes$mainMenu$$$function__4_exit(tstate);

tmp_res = PyObject_SetItem(locals_scenes$mainMenu$$$class__1_MainMenu_8, mod_consts.const_str_plain_exit, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_scenes$mainMenu$$$function__5_yes(tstate);

tmp_res = PyObject_SetItem(locals_scenes$mainMenu$$$class__1_MainMenu_8, mod_consts.const_str_plain_yes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_scenes$mainMenu$$$function__6_no(tstate);

tmp_res = PyObject_SetItem(locals_scenes$mainMenu$$$class__1_MainMenu_8, mod_consts.const_str_plain_no, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "c";
    goto frame_exception_exit_2;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_scenes$mainMenu$$$class__1_MainMenu_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_scenes$mainMenu$$$class__1_MainMenu_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_scenes$mainMenu$$$class__1_MainMenu_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scenes$mainMenu$$$class__1_MainMenu_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_scenes$mainMenu$$$class__1_MainMenu_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_scenes$mainMenu$$$class__1_MainMenu_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_scenes$mainMenu$$$class__1_MainMenu_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_0511f1b1ed51bd5ca5ec1d0cdce54490_tuple;
tmp_res = PyObject_SetItem(locals_scenes$mainMenu$$$class__1_MainMenu_8, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_4;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_1 = tmp_class_container$class_creation_1__bases_orig;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_4;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_scenes$mainMenu$$$class__1_MainMenu_8, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_metaclass_value_2;
PyObject *tmp_name_value_4;
PyObject *tmp_bases_value_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_metaclass_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_4 = mod_consts.const_str_plain_MainMenu;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_1__bases;
tmp_dict_arg_value_1 = locals_scenes$mainMenu$$$class__1_MainMenu_8;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
DICT_SET_ITEM(tmp_dict_arg_value_1, const_str_plain___classcell__, (PyObject *)outline_0_var___class__);
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_4, tmp_bases_value_2, tmp_dict_arg_value_1);
tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_metaclass_value_2, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_4;
}
{
    PyObject *old = PyCell_GET((PyObject *)outline_0_var___class__);
    PyCell_SET((PyObject *)outline_0_var___class__, tmp_assign_source_20);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(PyCell_GET((PyObject *)outline_0_var___class__));
tmp_assign_source_19 = PyCell_GET((PyObject *)outline_0_var___class__);
Py_INCREF(tmp_assign_source_19);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_scenes$mainMenu$$$class__1_MainMenu_8);
locals_scenes$mainMenu$$$class__1_MainMenu_8 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_scenes$mainMenu$$$class__1_MainMenu_8);
locals_scenes$mainMenu$$$class__1_MainMenu_8 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(outline_0_var___class__);
assert(PyCell_Check((PyObject *)outline_0_var___class__));
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_scenes$mainMenu, (Nuitka_StringObject *)mod_consts.const_str_plain_MainMenu, tmp_assign_source_19);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_1__bases_orig);
tmp_class_container$class_creation_1__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__bases);
tmp_class_container$class_creation_1__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__metaclass);
tmp_class_container$class_creation_1__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__prepared);
tmp_class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
Py_DECREF(tmp_class_container$class_creation_1__bases_orig);
tmp_class_container$class_creation_1__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
Py_DECREF(tmp_class_container$class_creation_1__bases);
tmp_class_container$class_creation_1__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
Py_DECREF(tmp_class_container$class_creation_1__metaclass);
tmp_class_container$class_creation_1__metaclass = NULL;
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

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_scenes$mainMenu, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_scenes$mainMenu->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scenes$mainMenu, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_scenes$mainMenu);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("scenes$mainMenu", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "scenes.mainMenu" "-postLoad", false);
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_scenes$mainMenu);
    return module_scenes$mainMenu;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scenes$mainMenu, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("scenes$mainMenu", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
