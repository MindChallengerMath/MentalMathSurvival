/* Generated code for Python module 'PySide6$$45$postLoad'
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



/* The "module_PySide6$$45$postLoad" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PySide6$$45$postLoad;
PyDictObject *moduledict_PySide6$$45$postLoad;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject * const_codeobj_d72f3a048279ddc559644fd2dc4b10f6;
PyObject * const_str_plain_im_func;
PyObject * const_str_plain__protected;
PyObject * const_str_plain_append;
PyObject * const_str_plain_startswith;
PyObject * const_tuple_str_plain__pyside6_workaround__tuple;
PyObject * const_str_plain__pyside6_workaround_;
PyObject * const_str_plain_im_self;
PyObject * const_str_plain_protected_name;
PyObject * const_codeobj_d1a1a634230a9e8c8de71d737b0cd53b;
PyObject * const_str_plain_orig_disconnect;
PyObject * const_str_plain_protect;
PyObject * const_codeobj_a3d4fd2bb0e9c8a5c7bad73e9362c673;
PyObject * const_str_plain_QtCore;
PyObject * const_str_plain_Qt;
PyObject * const_str_plain_ConnectionType;
PyObject * const_str_plain_AutoConnection;
PyObject * const_str_plain_orig_connect;
PyObject * const_codeobj_12dcdad567f9d6e655f66edc67f0204e;
PyObject * const_str_plain_orig_singleShot;
PyObject * const_codeobj_e5333ce3b8e312001f5562a14e496fd7;
PyObject * const_str_plain_orig_QApplication;
PyObject * const_str_plain_argv;
PyObject * const_str_plain_HICON;
PyObject * const_str_plain_windll;
PyObject * const_str_plain_shell32;
PyObject * const_str_plain_ExtractIconExW;
PyObject * const_str_plain_restype;
PyObject * const_str_plain_LPCWSTR;
PyObject * const_str_plain_c_int;
PyObject * const_str_plain_POINTER;
PyObject * const_str_plain_c_uint;
PyObject * const_str_plain_argtypes;
PyObject * const_str_plain_main_filename;
PyObject * const_str_plain_byref;
PyObject * const_str_plain_small_icon;
PyObject * const_str_plain_large_icon;
PyObject * const_str_plain_icons;
PyObject * const_str_plain_value;
PyObject * const_str_plain_QIcon;
PyObject * const_str_plain_icon;
PyObject * const_str_plain_addPixmap;
PyObject * const_str_plain_QPixmap;
PyObject * const_str_plain_fromImage;
PyObject * const_str_plain_QImage;
PyObject * const_str_plain_fromHICON;
PyObject * const_str_plain_setWindowIcon;
PyObject * const_codeobj_5581316b6c39ddb538a466a124c91a7f;
PyObject * const_str_plain_origin;
PyObject * const_str_plain_has_location;
PyObject * const_tuple_none_tuple;
PyObject * const_str_plain_patched_disconnect;
PyObject * const_str_plain_patched_connect;
PyObject * const_str_plain_PySide6;
PyObject * const_tuple_str_plain_QtCore_tuple;
PyObject * const_str_plain_SignalInstance;
PyObject * const_str_plain_disconnect;
PyObject * const_str_plain_connect;
PyObject * const_str_plain_patched_singleShot;
PyObject * const_str_plain_QTimer;
PyObject * const_str_plain_singleShot;
PyObject * const_str_plain_sys;
PyObject * const_str_digest_4d6103d00e7b576e129039abc8d8159f;
PyObject * const_str_plain_QtWidgets;
PyObject * const_str_plain_QApplication;
PyObject * const_str_digest_b417b19b6d22cc0660e178a7a9a9fa05;
PyObject * const_tuple_str_plain_QIcon_str_plain_QPixmap_str_plain_QImage_tuple;
PyObject * const_str_plain___prepare__;
PyObject * const_str_plain_OurQApplication;
PyObject * const_str_plain___getitem__;
PyObject * const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject * const_str_angle_metaclass;
PyObject * const_str_digest_c52686dc8deb9d4323cbf07501c79951;
PyObject * const_int_pos_53;
PyObject * const_str_plain___firstlineno__;
PyObject * const_codeobj_dcdbb8b05afd1b9c196fb1b1971e0e3b;
PyObject * const_str_digest_9fbc4f7c83cd719982a60b84d45278a2;
PyObject * const_str_plain___static_attributes__;
PyObject * const_str_plain___orig_bases__;
PyObject * const_str_digest_6b55095de1b862577c6cb03967b1db72;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[80];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

NUITKA_DECLARE_CONSTANT_BLOB(
    module$PySide6$$45$postLoad_bin,
    module$PySide6$$45$postLoad_bin,
    const
);

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
#if 0
        LOAD_DIRECT_CONSTANTS_BLOB(tstate, (PyObject **)&mod_consts, module$PySide6$$45$postLoad_bin);
#else
        loadConstantsBlob(tstate, &mod_consts, UN_TRANSLATE("PySide6-postLoad"));
#endif
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_d72f3a048279ddc559644fd2dc4b10f6", mod_consts.const_codeobj_d72f3a048279ddc559644fd2dc4b10f6);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_codeobj_d72f3a048279ddc559644fd2dc4b10f6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_im_func", mod_consts.const_str_plain_im_func);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_im_func);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__protected", mod_consts.const_str_plain__protected);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__protected);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_append", mod_consts.const_str_plain_append);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_startswith", mod_consts.const_str_plain_startswith);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__pyside6_workaround__tuple", mod_consts.const_tuple_str_plain__pyside6_workaround__tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__pyside6_workaround__tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__pyside6_workaround_", mod_consts.const_str_plain__pyside6_workaround_);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__pyside6_workaround_);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_im_self", mod_consts.const_str_plain_im_self);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_im_self);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_protected_name", mod_consts.const_str_plain_protected_name);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_protected_name);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_d1a1a634230a9e8c8de71d737b0cd53b", mod_consts.const_codeobj_d1a1a634230a9e8c8de71d737b0cd53b);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_codeobj_d1a1a634230a9e8c8de71d737b0cd53b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_orig_disconnect", mod_consts.const_str_plain_orig_disconnect);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_orig_disconnect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_protect", mod_consts.const_str_plain_protect);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_protect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_a3d4fd2bb0e9c8a5c7bad73e9362c673", mod_consts.const_codeobj_a3d4fd2bb0e9c8a5c7bad73e9362c673);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_codeobj_a3d4fd2bb0e9c8a5c7bad73e9362c673);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QtCore", mod_consts.const_str_plain_QtCore);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_QtCore);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Qt", mod_consts.const_str_plain_Qt);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_Qt);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ConnectionType", mod_consts.const_str_plain_ConnectionType);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionType);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AutoConnection", mod_consts.const_str_plain_AutoConnection);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_AutoConnection);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_orig_connect", mod_consts.const_str_plain_orig_connect);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_orig_connect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_12dcdad567f9d6e655f66edc67f0204e", mod_consts.const_codeobj_12dcdad567f9d6e655f66edc67f0204e);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_codeobj_12dcdad567f9d6e655f66edc67f0204e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_orig_singleShot", mod_consts.const_str_plain_orig_singleShot);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_orig_singleShot);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_e5333ce3b8e312001f5562a14e496fd7", mod_consts.const_codeobj_e5333ce3b8e312001f5562a14e496fd7);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_codeobj_e5333ce3b8e312001f5562a14e496fd7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_orig_QApplication", mod_consts.const_str_plain_orig_QApplication);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_orig_QApplication);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_argv", mod_consts.const_str_plain_argv);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_argv);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HICON", mod_consts.const_str_plain_HICON);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_HICON);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_windll", mod_consts.const_str_plain_windll);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_windll);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_shell32", mod_consts.const_str_plain_shell32);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_shell32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExtractIconExW", mod_consts.const_str_plain_ExtractIconExW);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExtractIconExW);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_restype", mod_consts.const_str_plain_restype);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_restype);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LPCWSTR", mod_consts.const_str_plain_LPCWSTR);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_LPCWSTR);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_c_int", mod_consts.const_str_plain_c_int);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_int);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_POINTER", mod_consts.const_str_plain_POINTER);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_POINTER);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_c_uint", mod_consts.const_str_plain_c_uint);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_uint);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_argtypes", mod_consts.const_str_plain_argtypes);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_argtypes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_main_filename", mod_consts.const_str_plain_main_filename);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_main_filename);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_byref", mod_consts.const_str_plain_byref);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_byref);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_small_icon", mod_consts.const_str_plain_small_icon);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_small_icon);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_large_icon", mod_consts.const_str_plain_large_icon);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_large_icon);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_icons", mod_consts.const_str_plain_icons);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_icons);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_value", mod_consts.const_str_plain_value);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QIcon", mod_consts.const_str_plain_QIcon);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_QIcon);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_icon", mod_consts.const_str_plain_icon);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_icon);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_addPixmap", mod_consts.const_str_plain_addPixmap);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_addPixmap);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QPixmap", mod_consts.const_str_plain_QPixmap);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_QPixmap);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fromImage", mod_consts.const_str_plain_fromImage);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_fromImage);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QImage", mod_consts.const_str_plain_QImage);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_QImage);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fromHICON", mod_consts.const_str_plain_fromHICON);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_fromHICON);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setWindowIcon", mod_consts.const_str_plain_setWindowIcon);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_setWindowIcon);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_5581316b6c39ddb538a466a124c91a7f", mod_consts.const_codeobj_5581316b6c39ddb538a466a124c91a7f);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_codeobj_5581316b6c39ddb538a466a124c91a7f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_patched_disconnect", mod_consts.const_str_plain_patched_disconnect);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_patched_disconnect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_patched_connect", mod_consts.const_str_plain_patched_connect);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_patched_connect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PySide6", mod_consts.const_str_plain_PySide6);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_PySide6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_QtCore_tuple", mod_consts.const_tuple_str_plain_QtCore_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_QtCore_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SignalInstance", mod_consts.const_str_plain_SignalInstance);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_SignalInstance);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_disconnect", mod_consts.const_str_plain_disconnect);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_disconnect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connect", mod_consts.const_str_plain_connect);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_connect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_patched_singleShot", mod_consts.const_str_plain_patched_singleShot);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_patched_singleShot);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QTimer", mod_consts.const_str_plain_QTimer);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_QTimer);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_singleShot", mod_consts.const_str_plain_singleShot);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_singleShot);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sys", mod_consts.const_str_plain_sys);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4d6103d00e7b576e129039abc8d8159f", mod_consts.const_str_digest_4d6103d00e7b576e129039abc8d8159f);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_4d6103d00e7b576e129039abc8d8159f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QtWidgets", mod_consts.const_str_plain_QtWidgets);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_QtWidgets);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QApplication", mod_consts.const_str_plain_QApplication);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_QApplication);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b417b19b6d22cc0660e178a7a9a9fa05", mod_consts.const_str_digest_b417b19b6d22cc0660e178a7a9a9fa05);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_b417b19b6d22cc0660e178a7a9a9fa05);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_QIcon_str_plain_QPixmap_str_plain_QImage_tuple", mod_consts.const_tuple_str_plain_QIcon_str_plain_QPixmap_str_plain_QImage_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_QIcon_str_plain_QPixmap_str_plain_QImage_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OurQApplication", mod_consts.const_str_plain_OurQApplication);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_OurQApplication);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c52686dc8deb9d4323cbf07501c79951", mod_consts.const_str_digest_c52686dc8deb9d4323cbf07501c79951);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_c52686dc8deb9d4323cbf07501c79951);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_53", mod_consts.const_int_pos_53);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_int_pos_53);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_dcdbb8b05afd1b9c196fb1b1971e0e3b", mod_consts.const_codeobj_dcdbb8b05afd1b9c196fb1b1971e0e3b);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_codeobj_dcdbb8b05afd1b9c196fb1b1971e0e3b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9fbc4f7c83cd719982a60b84d45278a2", mod_consts.const_str_digest_9fbc4f7c83cd719982a60b84d45278a2);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_9fbc4f7c83cd719982a60b84d45278a2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6b55095de1b862577c6cb03967b1db72", mod_consts.const_str_digest_6b55095de1b862577c6cb03967b1db72);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_6b55095de1b862577c6cb03967b1db72);
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
void checkModuleConstants_PySide6$$45$postLoad(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_d72f3a048279ddc559644fd2dc4b10f6", mod_consts.const_codeobj_d72f3a048279ddc559644fd2dc4b10f6);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_codeobj_d72f3a048279ddc559644fd2dc4b10f6) && "mod_consts.const_codeobj_d72f3a048279ddc559644fd2dc4b10f6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_im_func", mod_consts.const_str_plain_im_func);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_im_func) && "mod_consts.const_str_plain_im_func");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__protected", mod_consts.const_str_plain__protected);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__protected) && "mod_consts.const_str_plain__protected");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_append", mod_consts.const_str_plain_append);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_append) && "mod_consts.const_str_plain_append");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_startswith", mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith) && "mod_consts.const_str_plain_startswith");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__pyside6_workaround__tuple", mod_consts.const_tuple_str_plain__pyside6_workaround__tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__pyside6_workaround__tuple) && "mod_consts.const_tuple_str_plain__pyside6_workaround__tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__pyside6_workaround_", mod_consts.const_str_plain__pyside6_workaround_);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__pyside6_workaround_) && "mod_consts.const_str_plain__pyside6_workaround_");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_im_self", mod_consts.const_str_plain_im_self);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_im_self) && "mod_consts.const_str_plain_im_self");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_protected_name", mod_consts.const_str_plain_protected_name);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_protected_name) && "mod_consts.const_str_plain_protected_name");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_d1a1a634230a9e8c8de71d737b0cd53b", mod_consts.const_codeobj_d1a1a634230a9e8c8de71d737b0cd53b);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_codeobj_d1a1a634230a9e8c8de71d737b0cd53b) && "mod_consts.const_codeobj_d1a1a634230a9e8c8de71d737b0cd53b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_orig_disconnect", mod_consts.const_str_plain_orig_disconnect);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_orig_disconnect) && "mod_consts.const_str_plain_orig_disconnect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_protect", mod_consts.const_str_plain_protect);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_protect) && "mod_consts.const_str_plain_protect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_a3d4fd2bb0e9c8a5c7bad73e9362c673", mod_consts.const_codeobj_a3d4fd2bb0e9c8a5c7bad73e9362c673);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_codeobj_a3d4fd2bb0e9c8a5c7bad73e9362c673) && "mod_consts.const_codeobj_a3d4fd2bb0e9c8a5c7bad73e9362c673");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QtCore", mod_consts.const_str_plain_QtCore);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_QtCore) && "mod_consts.const_str_plain_QtCore");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Qt", mod_consts.const_str_plain_Qt);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_Qt) && "mod_consts.const_str_plain_Qt");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ConnectionType", mod_consts.const_str_plain_ConnectionType);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionType) && "mod_consts.const_str_plain_ConnectionType");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AutoConnection", mod_consts.const_str_plain_AutoConnection);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_AutoConnection) && "mod_consts.const_str_plain_AutoConnection");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_orig_connect", mod_consts.const_str_plain_orig_connect);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_orig_connect) && "mod_consts.const_str_plain_orig_connect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_12dcdad567f9d6e655f66edc67f0204e", mod_consts.const_codeobj_12dcdad567f9d6e655f66edc67f0204e);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_codeobj_12dcdad567f9d6e655f66edc67f0204e) && "mod_consts.const_codeobj_12dcdad567f9d6e655f66edc67f0204e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_orig_singleShot", mod_consts.const_str_plain_orig_singleShot);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_orig_singleShot) && "mod_consts.const_str_plain_orig_singleShot");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_e5333ce3b8e312001f5562a14e496fd7", mod_consts.const_codeobj_e5333ce3b8e312001f5562a14e496fd7);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_codeobj_e5333ce3b8e312001f5562a14e496fd7) && "mod_consts.const_codeobj_e5333ce3b8e312001f5562a14e496fd7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_orig_QApplication", mod_consts.const_str_plain_orig_QApplication);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_orig_QApplication) && "mod_consts.const_str_plain_orig_QApplication");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_argv", mod_consts.const_str_plain_argv);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_argv) && "mod_consts.const_str_plain_argv");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HICON", mod_consts.const_str_plain_HICON);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_HICON) && "mod_consts.const_str_plain_HICON");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_windll", mod_consts.const_str_plain_windll);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_windll) && "mod_consts.const_str_plain_windll");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_shell32", mod_consts.const_str_plain_shell32);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_shell32) && "mod_consts.const_str_plain_shell32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExtractIconExW", mod_consts.const_str_plain_ExtractIconExW);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExtractIconExW) && "mod_consts.const_str_plain_ExtractIconExW");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_restype", mod_consts.const_str_plain_restype);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_restype) && "mod_consts.const_str_plain_restype");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LPCWSTR", mod_consts.const_str_plain_LPCWSTR);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_LPCWSTR) && "mod_consts.const_str_plain_LPCWSTR");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_c_int", mod_consts.const_str_plain_c_int);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_int) && "mod_consts.const_str_plain_c_int");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_POINTER", mod_consts.const_str_plain_POINTER);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_POINTER) && "mod_consts.const_str_plain_POINTER");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_c_uint", mod_consts.const_str_plain_c_uint);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_uint) && "mod_consts.const_str_plain_c_uint");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_argtypes", mod_consts.const_str_plain_argtypes);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_argtypes) && "mod_consts.const_str_plain_argtypes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_main_filename", mod_consts.const_str_plain_main_filename);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_main_filename) && "mod_consts.const_str_plain_main_filename");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_byref", mod_consts.const_str_plain_byref);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_byref) && "mod_consts.const_str_plain_byref");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_small_icon", mod_consts.const_str_plain_small_icon);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_small_icon) && "mod_consts.const_str_plain_small_icon");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_large_icon", mod_consts.const_str_plain_large_icon);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_large_icon) && "mod_consts.const_str_plain_large_icon");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_icons", mod_consts.const_str_plain_icons);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_icons) && "mod_consts.const_str_plain_icons");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_value", mod_consts.const_str_plain_value);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_value) && "mod_consts.const_str_plain_value");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QIcon", mod_consts.const_str_plain_QIcon);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_QIcon) && "mod_consts.const_str_plain_QIcon");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_icon", mod_consts.const_str_plain_icon);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_icon) && "mod_consts.const_str_plain_icon");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_addPixmap", mod_consts.const_str_plain_addPixmap);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_addPixmap) && "mod_consts.const_str_plain_addPixmap");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QPixmap", mod_consts.const_str_plain_QPixmap);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_QPixmap) && "mod_consts.const_str_plain_QPixmap");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fromImage", mod_consts.const_str_plain_fromImage);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_fromImage) && "mod_consts.const_str_plain_fromImage");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QImage", mod_consts.const_str_plain_QImage);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_QImage) && "mod_consts.const_str_plain_QImage");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fromHICON", mod_consts.const_str_plain_fromHICON);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_fromHICON) && "mod_consts.const_str_plain_fromHICON");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setWindowIcon", mod_consts.const_str_plain_setWindowIcon);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_setWindowIcon) && "mod_consts.const_str_plain_setWindowIcon");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_5581316b6c39ddb538a466a124c91a7f", mod_consts.const_codeobj_5581316b6c39ddb538a466a124c91a7f);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_codeobj_5581316b6c39ddb538a466a124c91a7f) && "mod_consts.const_codeobj_5581316b6c39ddb538a466a124c91a7f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple) && "mod_consts.const_tuple_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_patched_disconnect", mod_consts.const_str_plain_patched_disconnect);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_patched_disconnect) && "mod_consts.const_str_plain_patched_disconnect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_patched_connect", mod_consts.const_str_plain_patched_connect);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_patched_connect) && "mod_consts.const_str_plain_patched_connect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PySide6", mod_consts.const_str_plain_PySide6);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_PySide6) && "mod_consts.const_str_plain_PySide6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_QtCore_tuple", mod_consts.const_tuple_str_plain_QtCore_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_QtCore_tuple) && "mod_consts.const_tuple_str_plain_QtCore_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SignalInstance", mod_consts.const_str_plain_SignalInstance);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_SignalInstance) && "mod_consts.const_str_plain_SignalInstance");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_disconnect", mod_consts.const_str_plain_disconnect);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_disconnect) && "mod_consts.const_str_plain_disconnect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connect", mod_consts.const_str_plain_connect);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_connect) && "mod_consts.const_str_plain_connect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_patched_singleShot", mod_consts.const_str_plain_patched_singleShot);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_patched_singleShot) && "mod_consts.const_str_plain_patched_singleShot");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QTimer", mod_consts.const_str_plain_QTimer);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_QTimer) && "mod_consts.const_str_plain_QTimer");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_singleShot", mod_consts.const_str_plain_singleShot);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_singleShot) && "mod_consts.const_str_plain_singleShot");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sys", mod_consts.const_str_plain_sys);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys) && "mod_consts.const_str_plain_sys");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4d6103d00e7b576e129039abc8d8159f", mod_consts.const_str_digest_4d6103d00e7b576e129039abc8d8159f);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_4d6103d00e7b576e129039abc8d8159f) && "mod_consts.const_str_digest_4d6103d00e7b576e129039abc8d8159f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QtWidgets", mod_consts.const_str_plain_QtWidgets);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_QtWidgets) && "mod_consts.const_str_plain_QtWidgets");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QApplication", mod_consts.const_str_plain_QApplication);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_QApplication) && "mod_consts.const_str_plain_QApplication");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b417b19b6d22cc0660e178a7a9a9fa05", mod_consts.const_str_digest_b417b19b6d22cc0660e178a7a9a9fa05);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_b417b19b6d22cc0660e178a7a9a9fa05) && "mod_consts.const_str_digest_b417b19b6d22cc0660e178a7a9a9fa05");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_QIcon_str_plain_QPixmap_str_plain_QImage_tuple", mod_consts.const_tuple_str_plain_QIcon_str_plain_QPixmap_str_plain_QImage_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_QIcon_str_plain_QPixmap_str_plain_QImage_tuple) && "mod_consts.const_tuple_str_plain_QIcon_str_plain_QPixmap_str_plain_QImage_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OurQApplication", mod_consts.const_str_plain_OurQApplication);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_OurQApplication) && "mod_consts.const_str_plain_OurQApplication");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c52686dc8deb9d4323cbf07501c79951", mod_consts.const_str_digest_c52686dc8deb9d4323cbf07501c79951);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_c52686dc8deb9d4323cbf07501c79951) && "mod_consts.const_str_digest_c52686dc8deb9d4323cbf07501c79951");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_53", mod_consts.const_int_pos_53);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_int_pos_53) && "mod_consts.const_int_pos_53");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_codeobj_dcdbb8b05afd1b9c196fb1b1971e0e3b", mod_consts.const_codeobj_dcdbb8b05afd1b9c196fb1b1971e0e3b);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_codeobj_dcdbb8b05afd1b9c196fb1b1971e0e3b) && "mod_consts.const_codeobj_dcdbb8b05afd1b9c196fb1b1971e0e3b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9fbc4f7c83cd719982a60b84d45278a2", mod_consts.const_str_digest_9fbc4f7c83cd719982a60b84d45278a2);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_9fbc4f7c83cd719982a60b84d45278a2) && "mod_consts.const_str_digest_9fbc4f7c83cd719982a60b84d45278a2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__) && "mod_consts.const_str_plain___orig_bases__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6b55095de1b862577c6cb03967b1db72", mod_consts.const_str_digest_6b55095de1b862577c6cb03967b1db72);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_6b55095de1b862577c6cb03967b1db72) && "mod_consts.const_str_digest_6b55095de1b862577c6cb03967b1db72");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 16
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
static PyObject *module_var_accessor_PySide6$$45$postLoad$OurQApplication(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PySide6$$45$postLoad->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PySide6$$45$postLoad->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_OurQApplication);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PySide6$$45$postLoad->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OurQApplication);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OurQApplication, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OurQApplication);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OurQApplication, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_OurQApplication);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_OurQApplication);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OurQApplication);
    }

    return result;
}

static PyObject *module_var_accessor_PySide6$$45$postLoad$PySide6(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PySide6$$45$postLoad->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PySide6$$45$postLoad->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_PySide6);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PySide6$$45$postLoad->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PySide6);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PySide6, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PySide6);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PySide6, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_PySide6);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_PySide6);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PySide6);
    }

    return result;
}

static PyObject *module_var_accessor_PySide6$$45$postLoad$QIcon(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PySide6$$45$postLoad->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PySide6$$45$postLoad->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_QIcon);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PySide6$$45$postLoad->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_QIcon);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_QIcon);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_QIcon);
    }

    return result;
}

static PyObject *module_var_accessor_PySide6$$45$postLoad$QImage(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PySide6$$45$postLoad->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PySide6$$45$postLoad->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_QImage);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PySide6$$45$postLoad->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_QImage);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_QImage, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_QImage);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_QImage, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_QImage);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_QImage);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_QImage);
    }

    return result;
}

static PyObject *module_var_accessor_PySide6$$45$postLoad$QPixmap(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PySide6$$45$postLoad->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PySide6$$45$postLoad->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_QPixmap);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PySide6$$45$postLoad->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_QPixmap);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_QPixmap, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_QPixmap);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_QPixmap, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_QPixmap);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_QPixmap);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_QPixmap);
    }

    return result;
}

static PyObject *module_var_accessor_PySide6$$45$postLoad$QtCore(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PySide6$$45$postLoad->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PySide6$$45$postLoad->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_QtCore);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PySide6$$45$postLoad->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_QtCore);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_QtCore, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_QtCore);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_QtCore, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_QtCore);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_QtCore);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_QtCore);
    }

    return result;
}

static PyObject *module_var_accessor_PySide6$$45$postLoad$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PySide6$$45$postLoad->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PySide6$$45$postLoad->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PySide6$$45$postLoad->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_PySide6$$45$postLoad$_protected(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PySide6$$45$postLoad->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PySide6$$45$postLoad->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain__protected);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PySide6$$45$postLoad->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__protected);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__protected, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__protected);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__protected, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain__protected);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain__protected);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__protected);
    }

    return result;
}

static PyObject *module_var_accessor_PySide6$$45$postLoad$orig_QApplication(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PySide6$$45$postLoad->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PySide6$$45$postLoad->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_orig_QApplication);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PySide6$$45$postLoad->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_orig_QApplication);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_orig_QApplication, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_orig_QApplication);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_orig_QApplication, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_orig_QApplication);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_orig_QApplication);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_orig_QApplication);
    }

    return result;
}

static PyObject *module_var_accessor_PySide6$$45$postLoad$orig_connect(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PySide6$$45$postLoad->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PySide6$$45$postLoad->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_orig_connect);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PySide6$$45$postLoad->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_orig_connect);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_orig_connect, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_orig_connect);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_orig_connect, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_orig_connect);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_orig_connect);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_orig_connect);
    }

    return result;
}

static PyObject *module_var_accessor_PySide6$$45$postLoad$orig_disconnect(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PySide6$$45$postLoad->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PySide6$$45$postLoad->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_orig_disconnect);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PySide6$$45$postLoad->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_orig_disconnect);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_orig_disconnect, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_orig_disconnect);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_orig_disconnect, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_orig_disconnect);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_orig_disconnect);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_orig_disconnect);
    }

    return result;
}

static PyObject *module_var_accessor_PySide6$$45$postLoad$orig_singleShot(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PySide6$$45$postLoad->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PySide6$$45$postLoad->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_orig_singleShot);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PySide6$$45$postLoad->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_orig_singleShot);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_orig_singleShot, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_orig_singleShot);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_orig_singleShot, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_orig_singleShot);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_orig_singleShot);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_orig_singleShot);
    }

    return result;
}

static PyObject *module_var_accessor_PySide6$$45$postLoad$patched_connect(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PySide6$$45$postLoad->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PySide6$$45$postLoad->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_patched_connect);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PySide6$$45$postLoad->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_patched_connect);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_patched_connect, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_patched_connect);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_patched_connect, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_patched_connect);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_patched_connect);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_patched_connect);
    }

    return result;
}

static PyObject *module_var_accessor_PySide6$$45$postLoad$patched_disconnect(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PySide6$$45$postLoad->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PySide6$$45$postLoad->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_patched_disconnect);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PySide6$$45$postLoad->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_patched_disconnect);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_patched_disconnect, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_patched_disconnect);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_patched_disconnect, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_patched_disconnect);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_patched_disconnect);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_patched_disconnect);
    }

    return result;
}

static PyObject *module_var_accessor_PySide6$$45$postLoad$patched_singleShot(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PySide6$$45$postLoad->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PySide6$$45$postLoad->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_patched_singleShot);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PySide6$$45$postLoad->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_patched_singleShot);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_patched_singleShot, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_patched_singleShot);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_patched_singleShot, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_patched_singleShot);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_patched_singleShot);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_patched_singleShot);
    }

    return result;
}

static PyObject *module_var_accessor_PySide6$$45$postLoad$protect(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PySide6$$45$postLoad->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PySide6$$45$postLoad->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_protect);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PySide6$$45$postLoad->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_protect);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_protect, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_protect);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_protect, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_protect);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_protect);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_protect);
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


static PyObject *MAKE_FUNCTION_PySide6$$45$postLoad$$$function__1_protect(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_PySide6$$45$postLoad$$$function__2_patched_disconnect(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_PySide6$$45$postLoad$$$function__3_patched_connect(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_PySide6$$45$postLoad$$$function__4_patched_singleShot(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_PySide6$$45$postLoad$$$function__5___init__(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_PySide6$$45$postLoad$$$function__1_protect(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_func = python_pars[0];
PyObject *var_protected_name = NULL;
struct Nuitka_FrameObject *frame_frame_PySide6$$45$postLoad$$$function__1_protect;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_PySide6$$45$postLoad$$$function__1_protect = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PySide6$$45$postLoad$$$function__1_protect)) {
    Py_XDECREF(cache_frame_frame_PySide6$$45$postLoad$$$function__1_protect);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PySide6$$45$postLoad$$$function__1_protect == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PySide6$$45$postLoad$$$function__1_protect = MAKE_FUNCTION_FRAME(tstate, USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_d72f3a048279ddc559644fd2dc4b10f6, module_filename_obj), module_PySide6$$45$postLoad, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PySide6$$45$postLoad$$$function__1_protect->m_type_description == NULL);
frame_frame_PySide6$$45$postLoad$$$function__1_protect = cache_frame_frame_PySide6$$45$postLoad$$$function__1_protect;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PySide6$$45$postLoad$$$function__1_protect);
assert(Py_REFCNT(frame_frame_PySide6$$45$postLoad$$$function__1_protect) == 2);

// Framed code:
{
bool tmp_condition_result_1;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_func);
tmp_expression_value_1 = par_func;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, const_str_plain___compiled__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res != 0) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_func);
tmp_expression_value_2 = par_func;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain_im_func);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res != 0) ? true : false;
tmp_condition_result_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_1 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_3 = module_var_accessor_PySide6$$45$postLoad$_protected(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__protected);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 5;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_append);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_func);
tmp_args_element_value_1 = par_func;
frame_frame_PySide6$$45$postLoad$$$function__1_protect->m_frame.f_lineno = 5;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_func);
tmp_expression_value_5 = par_func;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_im_func);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_protected_name;
    var_protected_name = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_protected_name);
tmp_expression_value_6 = var_protected_name;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_startswith);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PySide6$$45$postLoad$$$function__1_protect->m_frame.f_lineno = 9;
tmp_operand_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain__pyside6_workaround__tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
tmp_add_expr_left_1 = mod_consts.const_str_plain__pyside6_workaround_;
CHECK_OBJECT(par_func);
tmp_expression_value_8 = par_func;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_im_func);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_name_value_1 = const_str_plain___qualname__;
CHECK_OBJECT(var_protected_name);
tmp_default_value_1 = var_protected_name;
tmp_add_expr_right_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_7, tmp_name_value_1, tmp_default_value_1);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_protected_name;
    assert(old != NULL);
    var_protected_name = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_protected_name);
tmp_ass_attr_value_1 = var_protected_name;
CHECK_OBJECT(par_func);
tmp_expression_value_9 = par_func;
tmp_ass_attr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_im_func);
if (tmp_ass_attr_target_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, const_str_plain___name__, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_target_1);
Py_DECREF(tmp_ass_attr_target_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
branch_no_2:;
// Tried code:
{
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_name_value_2;
PyObject *tmp_value_value_1;
PyObject *tmp_expression_value_13;
PyObject *tmp_capi_result_1;
CHECK_OBJECT(par_func);
tmp_expression_value_12 = par_func;
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_im_self);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_expression_value_10 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_11);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_1 = "oo";
    goto try_except_handler_2;
}
if (var_protected_name == NULL) {
Py_DECREF(tmp_expression_value_10);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_protected_name);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 18;
type_description_1 = "oo";
    goto try_except_handler_2;
}

tmp_name_value_2 = var_protected_name;
CHECK_OBJECT(par_func);
tmp_expression_value_13 = par_func;
tmp_value_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_im_func);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_10);

exception_lineno = 18;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_capi_result_1 = BUILTIN_SETATTR(tmp_expression_value_10, tmp_name_value_2, tmp_value_value_1);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_1 = "oo";
    goto try_except_handler_2;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PySide6$$45$postLoad$$$function__1_protect, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PySide6$$45$postLoad$$$function__1_protect, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 17;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PySide6$$45$postLoad$$$function__1_protect->m_frame)) {
        frame_frame_PySide6$$45$postLoad$$$function__1_protect->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_3;
branch_no_3:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PySide6$$45$postLoad$$$function__1_protect, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PySide6$$45$postLoad$$$function__1_protect->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PySide6$$45$postLoad$$$function__1_protect, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PySide6$$45$postLoad$$$function__1_protect,
    type_description_1,
    par_func,
    var_protected_name
);


// Release cached frame if used for exception.
if (frame_frame_PySide6$$45$postLoad$$$function__1_protect == cache_frame_frame_PySide6$$45$postLoad$$$function__1_protect) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PySide6$$45$postLoad$$$function__1_protect);
    cache_frame_frame_PySide6$$45$postLoad$$$function__1_protect = NULL;
}

assertFrameObject(frame_frame_PySide6$$45$postLoad$$$function__1_protect);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_func);
tmp_return_value = par_func;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_protected_name);
var_protected_name = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_protected_name);
var_protected_name = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_func);
Py_DECREF(par_func);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_func);
Py_DECREF(par_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PySide6$$45$postLoad$$$function__2_patched_disconnect(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_slot = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PySide6$$45$postLoad$$$function__2_patched_disconnect;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PySide6$$45$postLoad$$$function__2_patched_disconnect = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PySide6$$45$postLoad$$$function__2_patched_disconnect)) {
    Py_XDECREF(cache_frame_frame_PySide6$$45$postLoad$$$function__2_patched_disconnect);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PySide6$$45$postLoad$$$function__2_patched_disconnect == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PySide6$$45$postLoad$$$function__2_patched_disconnect = MAKE_FUNCTION_FRAME(tstate, USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_d1a1a634230a9e8c8de71d737b0cd53b, module_filename_obj), module_PySide6$$45$postLoad, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PySide6$$45$postLoad$$$function__2_patched_disconnect->m_type_description == NULL);
frame_frame_PySide6$$45$postLoad$$$function__2_patched_disconnect = cache_frame_frame_PySide6$$45$postLoad$$$function__2_patched_disconnect;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PySide6$$45$postLoad$$$function__2_patched_disconnect);
assert(Py_REFCNT(frame_frame_PySide6$$45$postLoad$$$function__2_patched_disconnect) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_PySide6$$45$postLoad$orig_disconnect(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_orig_disconnect);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 25;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
tmp_called_value_2 = module_var_accessor_PySide6$$45$postLoad$protect(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_protect);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 25;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_slot);
tmp_args_element_value_3 = par_slot;
frame_frame_PySide6$$45$postLoad$$$function__2_patched_disconnect->m_frame.f_lineno = 25;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PySide6$$45$postLoad$$$function__2_patched_disconnect->m_frame.f_lineno = 25;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PySide6$$45$postLoad$$$function__2_patched_disconnect, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PySide6$$45$postLoad$$$function__2_patched_disconnect->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PySide6$$45$postLoad$$$function__2_patched_disconnect, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PySide6$$45$postLoad$$$function__2_patched_disconnect,
    type_description_1,
    par_self,
    par_slot
);


// Release cached frame if used for exception.
if (frame_frame_PySide6$$45$postLoad$$$function__2_patched_disconnect == cache_frame_frame_PySide6$$45$postLoad$$$function__2_patched_disconnect) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PySide6$$45$postLoad$$$function__2_patched_disconnect);
    cache_frame_frame_PySide6$$45$postLoad$$$function__2_patched_disconnect = NULL;
}

assertFrameObject(frame_frame_PySide6$$45$postLoad$$$function__2_patched_disconnect);

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
CHECK_OBJECT(par_slot);
Py_DECREF(par_slot);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_slot);
Py_DECREF(par_slot);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PySide6$$45$postLoad$$$function__3_patched_connect(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_slot = python_pars[1];
PyObject *par_type = python_pars[2];
struct Nuitka_FrameObject *frame_frame_PySide6$$45$postLoad$$$function__3_patched_connect;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PySide6$$45$postLoad$$$function__3_patched_connect = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PySide6$$45$postLoad$$$function__3_patched_connect)) {
    Py_XDECREF(cache_frame_frame_PySide6$$45$postLoad$$$function__3_patched_connect);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PySide6$$45$postLoad$$$function__3_patched_connect == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PySide6$$45$postLoad$$$function__3_patched_connect = MAKE_FUNCTION_FRAME(tstate, USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_a3d4fd2bb0e9c8a5c7bad73e9362c673, module_filename_obj), module_PySide6$$45$postLoad, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PySide6$$45$postLoad$$$function__3_patched_connect->m_type_description == NULL);
frame_frame_PySide6$$45$postLoad$$$function__3_patched_connect = cache_frame_frame_PySide6$$45$postLoad$$$function__3_patched_connect;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PySide6$$45$postLoad$$$function__3_patched_connect);
assert(Py_REFCNT(frame_frame_PySide6$$45$postLoad$$$function__3_patched_connect) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_type);
tmp_or_left_value_1 = par_type;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_expression_value_3 = module_var_accessor_PySide6$$45$postLoad$QtCore(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_QtCore);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_Qt);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ConnectionType);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_AutoConnection);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_assign_source_1 = tmp_or_left_value_1;
or_end_1:;
{
    PyObject *old = par_type;
    assert(old != NULL);
    par_type = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_1 = module_var_accessor_PySide6$$45$postLoad$orig_connect(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_orig_connect);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 30;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
tmp_called_value_2 = module_var_accessor_PySide6$$45$postLoad$protect(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_protect);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 30;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_slot);
tmp_args_element_value_3 = par_slot;
frame_frame_PySide6$$45$postLoad$$$function__3_patched_connect->m_frame.f_lineno = 30;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_type);
tmp_args_element_value_4 = par_type;
frame_frame_PySide6$$45$postLoad$$$function__3_patched_connect->m_frame.f_lineno = 30;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PySide6$$45$postLoad$$$function__3_patched_connect, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PySide6$$45$postLoad$$$function__3_patched_connect->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PySide6$$45$postLoad$$$function__3_patched_connect, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PySide6$$45$postLoad$$$function__3_patched_connect,
    type_description_1,
    par_self,
    par_slot,
    par_type
);


// Release cached frame if used for exception.
if (frame_frame_PySide6$$45$postLoad$$$function__3_patched_connect == cache_frame_frame_PySide6$$45$postLoad$$$function__3_patched_connect) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PySide6$$45$postLoad$$$function__3_patched_connect);
    cache_frame_frame_PySide6$$45$postLoad$$$function__3_patched_connect = NULL;
}

assertFrameObject(frame_frame_PySide6$$45$postLoad$$$function__3_patched_connect);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_type);
CHECK_OBJECT(par_type);
Py_DECREF(par_type);
par_type = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_type);
par_type = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_slot);
Py_DECREF(par_slot);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_slot);
Py_DECREF(par_slot);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PySide6$$45$postLoad$$$function__4_patched_singleShot(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *par_kwargs = python_pars[2];
struct Nuitka_FrameObject *frame_frame_PySide6$$45$postLoad$$$function__4_patched_singleShot;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PySide6$$45$postLoad$$$function__4_patched_singleShot = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PySide6$$45$postLoad$$$function__4_patched_singleShot)) {
    Py_XDECREF(cache_frame_frame_PySide6$$45$postLoad$$$function__4_patched_singleShot);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PySide6$$45$postLoad$$$function__4_patched_singleShot == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PySide6$$45$postLoad$$$function__4_patched_singleShot = MAKE_FUNCTION_FRAME(tstate, USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_12dcdad567f9d6e655f66edc67f0204e, module_filename_obj), module_PySide6$$45$postLoad, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PySide6$$45$postLoad$$$function__4_patched_singleShot->m_type_description == NULL);
frame_frame_PySide6$$45$postLoad$$$function__4_patched_singleShot = cache_frame_frame_PySide6$$45$postLoad$$$function__4_patched_singleShot;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PySide6$$45$postLoad$$$function__4_patched_singleShot);
assert(Py_REFCNT(frame_frame_PySide6$$45$postLoad$$$function__4_patched_singleShot) == 2);

// Framed code:
{
bool tmp_condition_result_1;
CHECK_OBJECT(par_args);
tmp_condition_result_1 = CHECK_IF_TRUE(par_args) == 1;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_list_arg_1;
CHECK_OBJECT(par_args);
tmp_list_arg_1 = par_args;
tmp_assign_source_1 = MAKE_LIST(tstate, tmp_list_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_args;
    assert(old != NULL);
    par_args = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
int tmp_ass_subscript_res_1;
tmp_called_value_1 = module_var_accessor_PySide6$$45$postLoad$protect(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_protect);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_args);
tmp_expression_value_1 = par_args;
tmp_subscript_value_1 = const_int_neg_1;
tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, -1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_PySide6$$45$postLoad$$$function__4_patched_singleShot->m_frame.f_lineno = 41;
tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_args);
tmp_ass_subscribed_1 = par_args;
tmp_ass_subscript_1 = const_int_neg_1;
tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, -1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_ass_subscript_res_1 == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_direct_call_arg4_1;
tmp_direct_call_arg1_1 = module_var_accessor_PySide6$$45$postLoad$orig_singleShot(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_orig_singleShot);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_tuple_element_1 = par_self;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
if (par_args == NULL) {
Py_DECREF(tmp_direct_call_arg2_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_args);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 43;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg3_1 = par_args;
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg4_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg3_1);
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PySide6$$45$postLoad$$$function__4_patched_singleShot, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PySide6$$45$postLoad$$$function__4_patched_singleShot->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PySide6$$45$postLoad$$$function__4_patched_singleShot, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PySide6$$45$postLoad$$$function__4_patched_singleShot,
    type_description_1,
    par_self,
    par_args,
    par_kwargs
);


// Release cached frame if used for exception.
if (frame_frame_PySide6$$45$postLoad$$$function__4_patched_singleShot == cache_frame_frame_PySide6$$45$postLoad$$$function__4_patched_singleShot) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PySide6$$45$postLoad$$$function__4_patched_singleShot);
    cache_frame_frame_PySide6$$45$postLoad$$$function__4_patched_singleShot = NULL;
}

assertFrameObject(frame_frame_PySide6$$45$postLoad$$$function__4_patched_singleShot);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_args);
par_args = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_args);
par_args = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PySide6$$45$postLoad$$$function__5___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *par_kwargs = python_pars[2];
PyObject *var_main_filename = NULL;
PyObject *var_ctypes = NULL;
PyObject *var_icon_count = NULL;
PyObject *var_small_icon = NULL;
PyObject *var_large_icon = NULL;
PyObject *var_icons = NULL;
PyObject *var_icon_index = NULL;
PyObject *var_res = NULL;
PyObject *var_icon = NULL;
PyObject *var_icon_handle = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_PySide6$$45$postLoad$$$function__5___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_PySide6$$45$postLoad$$$function__5___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PySide6$$45$postLoad$$$function__5___init__)) {
    Py_XDECREF(cache_frame_frame_PySide6$$45$postLoad$$$function__5___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PySide6$$45$postLoad$$$function__5___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PySide6$$45$postLoad$$$function__5___init__ = MAKE_FUNCTION_FRAME(tstate, USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_e5333ce3b8e312001f5562a14e496fd7, module_filename_obj), module_PySide6$$45$postLoad, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PySide6$$45$postLoad$$$function__5___init__->m_type_description == NULL);
frame_frame_PySide6$$45$postLoad$$$function__5___init__ = cache_frame_frame_PySide6$$45$postLoad$$$function__5___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PySide6$$45$postLoad$$$function__5___init__);
assert(Py_REFCNT(frame_frame_PySide6$$45$postLoad$$$function__5___init__) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_direct_call_arg4_1;
PyObject *tmp_call_result_1;
tmp_expression_value_1 = module_var_accessor_PySide6$$45$postLoad$orig_QApplication(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_orig_QApplication);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_tuple_element_1 = par_self;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_args);
tmp_direct_call_arg3_1 = par_args;
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg4_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg3_1);
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_call_result_1 = impl___main__$$$helper_function_complex_call_helper_pos_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
tmp_expression_value_3 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_3 == NULL));
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_argv);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_main_filename;
    var_main_filename = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_assign_source_2 == NULL));
{
    PyObject *old = var_ctypes;
    var_ctypes = tmp_assign_source_2;
    Py_INCREF(var_ctypes);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_ass_attr_target_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
tmp_expression_value_4 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_4 == NULL));
tmp_ass_attr_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_HICON);
if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_7 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_7 == NULL));
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_windll);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_attr_value_1);

exception_lineno = 59;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_shell32);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_attr_value_1);

exception_lineno = 59;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_attr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_ExtractIconExW);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_ass_attr_target_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_attr_value_1);

exception_lineno = 59;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_restype, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_target_1);
Py_DECREF(tmp_ass_attr_target_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_ass_attr_target_2;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
tmp_expression_value_8 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_8 == NULL));
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_LPCWSTR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_attr_value_2 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_expression_value_9;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyTuple_SET_ITEM(tmp_ass_attr_value_2, 0, tmp_tuple_element_2);
tmp_expression_value_9 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_9 == NULL));
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_c_int);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_2, 1, tmp_tuple_element_2);
tmp_expression_value_10 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_10 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_POINTER);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_expression_value_11 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_11 == NULL));
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_HICON);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 60;
type_description_1 = "ooooooooooooo";
    goto tuple_build_exception_1;
}
frame_frame_PySide6$$45$postLoad$$$function__5___init__->m_frame.f_lineno = 60;
tmp_tuple_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_2, 2, tmp_tuple_element_2);
tmp_expression_value_12 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_12 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_POINTER);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_expression_value_13 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_13 == NULL));
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_HICON);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 60;
type_description_1 = "ooooooooooooo";
    goto tuple_build_exception_1;
}
frame_frame_PySide6$$45$postLoad$$$function__5___init__->m_frame.f_lineno = 60;
tmp_tuple_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_2, 3, tmp_tuple_element_2);
tmp_expression_value_14 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_14 == NULL));
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_c_uint);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_2, 4, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_ass_attr_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_expression_value_17 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_17 == NULL));
tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_windll);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_attr_value_2);

exception_lineno = 60;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_shell32);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_attr_value_2);

exception_lineno = 60;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_attr_target_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_ExtractIconExW);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_ass_attr_target_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_attr_value_2);

exception_lineno = 60;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_argtypes, tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_value_2);
Py_DECREF(tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_target_2);
Py_DECREF(tmp_ass_attr_target_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_expression_value_19 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_19 == NULL));
tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_windll);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_shell32);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_main_filename);
tmp_args_element_value_3 = var_main_filename;
tmp_args_element_value_4 = const_int_neg_1;
tmp_args_element_value_5 = Py_None;
tmp_args_element_value_6 = Py_None;
tmp_args_element_value_7 = const_int_0;
frame_frame_PySide6$$45$postLoad$$$function__5___init__->m_frame.f_lineno = 61;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_3 = CALL_METHOD_WITH_ARGS5(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_ExtractIconExW,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_icon_count;
    var_icon_count = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_icon_count);
tmp_cmp_expr_left_1 = var_icon_count;
tmp_cmp_expr_right_1 = const_int_0;
tmp_operand_value_1 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
frame_frame_PySide6$$45$postLoad$$$function__5___init__->m_frame.f_lineno = 63;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 63;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_called_instance_2 == NULL));
frame_frame_PySide6$$45$postLoad$$$function__5___init__->m_frame.f_lineno = 65;
tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_HICON);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_small_icon;
    var_small_icon = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_3;
tmp_called_instance_3 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_called_instance_3 == NULL));
frame_frame_PySide6$$45$postLoad$$$function__5___init__->m_frame.f_lineno = 66;
tmp_assign_source_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_HICON);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_large_icon;
    var_large_icon = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_icons;
    var_icons = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
CHECK_OBJECT(var_icon_count);
tmp_xrange_low_1 = var_icon_count;
tmp_iter_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_8 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_8 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
exception_lineno = 69;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_9 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_icon_index;
    var_icon_index = tmp_assign_source_9;
    Py_INCREF(var_icon_index);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_20;
PyObject *tmp_expression_value_21;
PyObject *tmp_expression_value_22;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_23;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_24;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
tmp_expression_value_22 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_22 == NULL));
tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_windll);
if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_shell32);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_expression_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_ExtractIconExW);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
if (var_main_filename == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_main_filename);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 70;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_8 = var_main_filename;
CHECK_OBJECT(var_icon_index);
tmp_args_element_value_9 = var_icon_index;
tmp_expression_value_23 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_23 == NULL));
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_byref);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 70;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
if (var_small_icon == NULL) {
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_small_icon);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 70;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_11 = var_small_icon;
frame_frame_PySide6$$45$postLoad$$$function__5___init__->m_frame.f_lineno = 70;
tmp_args_element_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 70;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_24 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_24 == NULL));
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_byref);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_args_element_value_10);

exception_lineno = 70;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
if (var_large_icon == NULL) {
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_args_element_value_10);
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_large_icon);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 70;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_13 = var_large_icon;
frame_frame_PySide6$$45$postLoad$$$function__5___init__->m_frame.f_lineno = 70;
tmp_args_element_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_args_element_value_10);

exception_lineno = 70;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_14 = const_int_pos_1;
frame_frame_PySide6$$45$postLoad$$$function__5___init__->m_frame.f_lineno = 70;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_12, tmp_args_element_value_14};
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_res;
    var_res = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_expression_value_25;
if (var_icons == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_icons);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 72;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_icons;
if (var_small_icon == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_small_icon);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 72;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_25 = var_small_icon;
tmp_item_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_value);
if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_26;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_15;
PyObject *tmp_expression_value_27;
if (var_icons == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_icons);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 73;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_26 = var_icons;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_append);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
if (var_large_icon == NULL) {
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_large_icon);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 73;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_27 = var_large_icon;
tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_value);
if (tmp_args_element_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 73;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_PySide6$$45$postLoad$$$function__5___init__->m_frame.f_lineno = 73;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_15);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_7;
tmp_called_value_7 = module_var_accessor_PySide6$$45$postLoad$QIcon(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_QIcon);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PySide6$$45$postLoad$$$function__5___init__->m_frame.f_lineno = 75;
tmp_assign_source_11 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_icon;
    var_icon = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_2;
if (var_icons == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_icons);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 76;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_2 = var_icons;
tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_13 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_13 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
exception_lineno = 76;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_14 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_icon_handle;
    var_icon_handle = tmp_assign_source_14;
    Py_INCREF(var_icon_handle);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_28;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_16;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_29;
PyObject *tmp_args_element_value_17;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_18;
if (var_icon == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_icon);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 77;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}

tmp_expression_value_28 = var_icon;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_addPixmap);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
tmp_expression_value_29 = module_var_accessor_PySide6$$45$postLoad$QPixmap(tstate);
if (unlikely(tmp_expression_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_QPixmap);
}

if (tmp_expression_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);

exception_lineno = 77;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_fromImage);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 77;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
tmp_called_instance_4 = module_var_accessor_PySide6$$45$postLoad$QImage(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_QImage);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_called_value_9);

exception_lineno = 77;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_icon_handle);
tmp_args_element_value_18 = var_icon_handle;
frame_frame_PySide6$$45$postLoad$$$function__5___init__->m_frame.f_lineno = 77;
tmp_args_element_value_17 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_fromHICON, tmp_args_element_value_18);
if (tmp_args_element_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_called_value_9);

exception_lineno = 77;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
frame_frame_PySide6$$45$postLoad$$$function__5___init__->m_frame.f_lineno = 77;
tmp_args_element_value_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_17);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_args_element_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 77;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
frame_frame_PySide6$$45$postLoad$$$function__5___init__->m_frame.f_lineno = 77;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_16);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
goto loop_start_2;
loop_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
{
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_30;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_19;
CHECK_OBJECT(par_self);
tmp_expression_value_30 = par_self;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_setWindowIcon);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_icon == NULL) {
Py_DECREF(tmp_called_value_10);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_icon);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 79;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_19 = var_icon;
frame_frame_PySide6$$45$postLoad$$$function__5___init__->m_frame.f_lineno = 79;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_19);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PySide6$$45$postLoad$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PySide6$$45$postLoad$$$function__5___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PySide6$$45$postLoad$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PySide6$$45$postLoad$$$function__5___init__,
    type_description_1,
    par_self,
    par_args,
    par_kwargs,
    var_main_filename,
    var_ctypes,
    var_icon_count,
    var_small_icon,
    var_large_icon,
    var_icons,
    var_icon_index,
    var_res,
    var_icon,
    var_icon_handle
);


// Release cached frame if used for exception.
if (frame_frame_PySide6$$45$postLoad$$$function__5___init__ == cache_frame_frame_PySide6$$45$postLoad$$$function__5___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PySide6$$45$postLoad$$$function__5___init__);
    cache_frame_frame_PySide6$$45$postLoad$$$function__5___init__ = NULL;
}

assertFrameObject(frame_frame_PySide6$$45$postLoad$$$function__5___init__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_main_filename);
var_main_filename = NULL;
CHECK_OBJECT(var_ctypes);
CHECK_OBJECT(var_ctypes);
Py_DECREF(var_ctypes);
var_ctypes = NULL;
CHECK_OBJECT(var_icon_count);
CHECK_OBJECT(var_icon_count);
Py_DECREF(var_icon_count);
var_icon_count = NULL;
Py_XDECREF(var_small_icon);
var_small_icon = NULL;
Py_XDECREF(var_large_icon);
var_large_icon = NULL;
Py_XDECREF(var_icons);
var_icons = NULL;
Py_XDECREF(var_icon_index);
var_icon_index = NULL;
Py_XDECREF(var_res);
var_res = NULL;
Py_XDECREF(var_icon);
var_icon = NULL;
Py_XDECREF(var_icon_handle);
var_icon_handle = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_main_filename);
var_main_filename = NULL;
Py_XDECREF(var_ctypes);
var_ctypes = NULL;
Py_XDECREF(var_icon_count);
var_icon_count = NULL;
Py_XDECREF(var_small_icon);
var_small_icon = NULL;
Py_XDECREF(var_large_icon);
var_large_icon = NULL;
Py_XDECREF(var_icons);
var_icons = NULL;
Py_XDECREF(var_icon_index);
var_icon_index = NULL;
Py_XDECREF(var_res);
var_res = NULL;
Py_XDECREF(var_icon);
var_icon = NULL;
Py_XDECREF(var_icon_handle);
var_icon_handle = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_PySide6$$45$postLoad$$$function__1_protect(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PySide6$$45$postLoad$$$function__1_protect,
        mod_consts.const_str_plain_protect,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_d72f3a048279ddc559644fd2dc4b10f6, module_filename_obj),
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PySide6$$45$postLoad,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PySide6$$45$postLoad$$$function__2_patched_disconnect(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PySide6$$45$postLoad$$$function__2_patched_disconnect,
        mod_consts.const_str_plain_patched_disconnect,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_d1a1a634230a9e8c8de71d737b0cd53b, module_filename_obj),
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PySide6$$45$postLoad,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PySide6$$45$postLoad$$$function__3_patched_connect(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PySide6$$45$postLoad$$$function__3_patched_connect,
        mod_consts.const_str_plain_patched_connect,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_a3d4fd2bb0e9c8a5c7bad73e9362c673, module_filename_obj),
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PySide6$$45$postLoad,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PySide6$$45$postLoad$$$function__4_patched_singleShot(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PySide6$$45$postLoad$$$function__4_patched_singleShot,
        mod_consts.const_str_plain_patched_singleShot,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_12dcdad567f9d6e655f66edc67f0204e, module_filename_obj),
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PySide6$$45$postLoad,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PySide6$$45$postLoad$$$function__5___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PySide6$$45$postLoad$$$function__5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9fbc4f7c83cd719982a60b84d45278a2,
#endif
        USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_e5333ce3b8e312001f5562a14e496fd7, module_filename_obj),
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PySide6$$45$postLoad,
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

static function_impl_code const function_table_PySide6$$45$postLoad[] = {
impl_PySide6$$45$postLoad$$$function__1_protect,
impl_PySide6$$45$postLoad$$$function__2_patched_disconnect,
impl_PySide6$$45$postLoad$$$function__3_patched_connect,
impl_PySide6$$45$postLoad$$$function__4_patched_singleShot,
impl_PySide6$$45$postLoad$$$function__5___init__,
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

    return Nuitka_Function_GetFunctionState(function, function_table_PySide6$$45$postLoad);
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
        module_PySide6$$45$postLoad,
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
        function_table_PySide6$$45$postLoad,
        sizeof(function_table_PySide6$$45$postLoad) / sizeof(function_impl_code)
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
static char const *module_full_name = "PySide6-postLoad";
#endif

// Internal entry point for module code.
PyObject *module_code_PySide6$$45$postLoad(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("PySide6$$45$postLoad");

    // Store the module for future use.
    module_PySide6$$45$postLoad = module;

    moduledict_PySide6$$45$postLoad = MODULE_DICT(module_PySide6$$45$postLoad);

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
        PRINT_STRING("PySide6$$45$postLoad: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("PySide6$$45$postLoad: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("PySide6$$45$postLoad: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "PySide6-postLoad" "-preLoad", false);
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initPySide6$$45$postLoad\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_PySide6$$45$postLoad,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_PySide6$$45$postLoad,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        UPDATE_STRING_DICT0(
            moduledict_PySide6$$45$postLoad,
            (Nuitka_StringObject *)const_str_plain___package__,
            GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)const_str_plain___name__)
        );
#else
        {
            PyObject *parent_name = makeParentModuleName(
                GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)const_str_plain___name__)
            );

            if (parent_name != NULL) {
                UPDATE_STRING_DICT1(
                    moduledict_PySide6$$45$postLoad,
                    (Nuitka_StringObject *)const_str_plain___package__,
                    parent_name
                );
            }
        }
#endif
    }

    CHECK_OBJECT(module_PySide6$$45$postLoad);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0 && !0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules, and main modules running as a package (-m flag),
    // get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_PySide6$$45$postLoad);
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

        UPDATE_STRING_DICT1(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_PySide6$$45$postLoad;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_PySide6$$45$postLoad$$$class__1_OurQApplication_53 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_PySide6$$45$postLoad$$$class__1_OurQApplication_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module init code if any
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_6b55095de1b862577c6cb03967b1db72);;

    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_PySide6$$45$postLoad = MAKE_MODULE_FRAME(USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_5581316b6c39ddb538a466a124c91a7f, module_filename_obj), module_PySide6$$45$postLoad);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PySide6$$45$postLoad);
assert(Py_REFCNT(frame_frame_PySide6$$45$postLoad) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_PySide6$$45$postLoad$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_PySide6$$45$postLoad$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_LIST_EMPTY(tstate, 0);
UPDATE_STRING_DICT1(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain__protected, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;

tmp_assign_source_6 = MAKE_FUNCTION_PySide6$$45$postLoad$$$function__1_protect(tstate);

UPDATE_STRING_DICT1(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_protect, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_7 = MAKE_FUNCTION_PySide6$$45$postLoad$$$function__2_patched_disconnect(tstate, tmp_defaults_1);

UPDATE_STRING_DICT1(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_patched_disconnect, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_defaults_2;
tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_2);

tmp_assign_source_8 = MAKE_FUNCTION_PySide6$$45$postLoad$$$function__3_patched_connect(tstate, tmp_defaults_2);

UPDATE_STRING_DICT1(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_patched_connect, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_PySide6;
tmp_globals_arg_value_1 = (PyObject *)moduledict_PySide6$$45$postLoad;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_QtCore_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_PySide6$$45$postLoad->m_frame.f_lineno = 32;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_PySide6$$45$postLoad,
        mod_consts.const_str_plain_QtCore,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_QtCore);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_QtCore, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = module_var_accessor_PySide6$$45$postLoad$QtCore(tstate);
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_SignalInstance);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_disconnect);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_orig_disconnect, tmp_assign_source_10);
}
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
PyObject *tmp_expression_value_3;
tmp_ass_attr_value_3 = module_var_accessor_PySide6$$45$postLoad$patched_disconnect(tstate);
if (unlikely(tmp_ass_attr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_patched_disconnect);
}

if (tmp_ass_attr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 34;

    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_PySide6$$45$postLoad$QtCore(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_QtCore);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 34;

    goto frame_exception_exit_1;
}
tmp_ass_attr_target_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_SignalInstance);
if (tmp_ass_attr_target_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain_disconnect, tmp_ass_attr_value_3);
CHECK_OBJECT(tmp_ass_attr_target_3);
Py_DECREF(tmp_ass_attr_target_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
tmp_expression_value_5 = module_var_accessor_PySide6$$45$postLoad$QtCore(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_QtCore);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;

    goto frame_exception_exit_1;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_SignalInstance);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_connect);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_orig_connect, tmp_assign_source_11);
}
{
PyObject *tmp_ass_attr_value_4;
PyObject *tmp_ass_attr_target_4;
PyObject *tmp_expression_value_6;
tmp_ass_attr_value_4 = module_var_accessor_PySide6$$45$postLoad$patched_connect(tstate);
if (unlikely(tmp_ass_attr_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_patched_connect);
}

if (tmp_ass_attr_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto frame_exception_exit_1;
}
tmp_expression_value_6 = module_var_accessor_PySide6$$45$postLoad$QtCore(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_QtCore);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto frame_exception_exit_1;
}
tmp_ass_attr_target_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_SignalInstance);
if (tmp_ass_attr_target_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_4, mod_consts.const_str_plain_connect, tmp_ass_attr_value_4);
CHECK_OBJECT(tmp_ass_attr_target_4);
Py_DECREF(tmp_ass_attr_target_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_12;

tmp_assign_source_12 = MAKE_FUNCTION_PySide6$$45$postLoad$$$function__4_patched_singleShot(tstate);

UPDATE_STRING_DICT1(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_patched_singleShot, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
tmp_expression_value_8 = module_var_accessor_PySide6$$45$postLoad$QtCore(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_QtCore);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;

    goto frame_exception_exit_1;
}
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_QTimer);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
tmp_assign_source_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_singleShot);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_orig_singleShot, tmp_assign_source_13);
}
{
PyObject *tmp_ass_attr_value_5;
PyObject *tmp_ass_attr_target_5;
PyObject *tmp_expression_value_9;
tmp_ass_attr_value_5 = module_var_accessor_PySide6$$45$postLoad$patched_singleShot(tstate);
if (unlikely(tmp_ass_attr_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_patched_singleShot);
}

if (tmp_ass_attr_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;

    goto frame_exception_exit_1;
}
tmp_expression_value_9 = module_var_accessor_PySide6$$45$postLoad$QtCore(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_QtCore);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;

    goto frame_exception_exit_1;
}
tmp_ass_attr_target_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_QTimer);
if (tmp_ass_attr_target_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_5, mod_consts.const_str_plain_singleShot, tmp_ass_attr_value_5);
CHECK_OBJECT(tmp_ass_attr_target_5);
Py_DECREF(tmp_ass_attr_target_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_14 == NULL));
UPDATE_STRING_DICT0(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_4d6103d00e7b576e129039abc8d8159f;
tmp_globals_arg_value_2 = (PyObject *)moduledict_PySide6$$45$postLoad;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_PySide6$$45$postLoad->m_frame.f_lineno = 48;
tmp_assign_source_15 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_PySide6, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
tmp_expression_value_11 = module_var_accessor_PySide6$$45$postLoad$PySide6(tstate);
assert(!(tmp_expression_value_11 == NULL));
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_QtWidgets);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto frame_exception_exit_1;
}
tmp_assign_source_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_QApplication);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_orig_QApplication, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_b417b19b6d22cc0660e178a7a9a9fa05;
tmp_globals_arg_value_3 = (PyObject *)moduledict_PySide6$$45$postLoad;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_QIcon_str_plain_QPixmap_str_plain_QImage_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_PySide6$$45$postLoad->m_frame.f_lineno = 51;
tmp_assign_source_17 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_17;
}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_PySide6$$45$postLoad,
        mod_consts.const_str_plain_QIcon,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_QIcon);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_QIcon, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_PySide6$$45$postLoad,
        mod_consts.const_str_plain_QPixmap,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_QPixmap);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_QPixmap, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_PySide6$$45$postLoad,
        mod_consts.const_str_plain_QImage,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_QImage);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_QImage, tmp_assign_source_20);
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
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_PySide6$$45$postLoad$orig_QApplication(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_orig_QApplication);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;

    goto try_except_handler_2;
}
tmp_assign_source_21 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_21, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_22 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

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
tmp_expression_value_12 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_24 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_24;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_13 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_13, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

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
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_14 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_2;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_OurQApplication;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_PySide6$$45$postLoad->m_frame.f_lineno = 53;
tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_25;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_15 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_15, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

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
PyObject *tmp_expression_value_16;
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_16 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_16, tmp_name_value_4, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_2;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_17;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_17 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_17 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

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


exception_lineno = 53;

    goto try_except_handler_2;
}
frame_frame_PySide6$$45$postLoad->m_frame.f_lineno = 53;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 53;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_26;
}
branch_end_1:;
{
PyObject *tmp_assign_source_27;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_PySide6$$45$postLoad$$$class__1_OurQApplication_53 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_c52686dc8deb9d4323cbf07501c79951;
tmp_res = PyObject_SetItem(locals_PySide6$$45$postLoad$$$class__1_OurQApplication_53, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_OurQApplication;
tmp_res = PyObject_SetItem(locals_PySide6$$45$postLoad$$$class__1_OurQApplication_53, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_53;
tmp_res = PyObject_SetItem(locals_PySide6$$45$postLoad$$$class__1_OurQApplication_53, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_4;
}
frame_frame_PySide6$$45$postLoad$$$class__1_OurQApplication_2 = MAKE_CLASS_FRAME(tstate, USE_CODE_OBJECT(tstate, mod_consts.const_codeobj_dcdbb8b05afd1b9c196fb1b1971e0e3b, module_filename_obj), module_PySide6$$45$postLoad, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_PySide6$$45$postLoad$$$class__1_OurQApplication_2, locals_PySide6$$45$postLoad$$$class__1_OurQApplication_53);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PySide6$$45$postLoad$$$class__1_OurQApplication_2);
assert(Py_REFCNT(frame_frame_PySide6$$45$postLoad$$$class__1_OurQApplication_2) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_PySide6$$45$postLoad$$$function__5___init__(tstate);

tmp_res = PyObject_SetItem(locals_PySide6$$45$postLoad$$$class__1_OurQApplication_53, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_2 = "o";
    goto frame_exception_exit_2;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PySide6$$45$postLoad$$$class__1_OurQApplication_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PySide6$$45$postLoad$$$class__1_OurQApplication_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PySide6$$45$postLoad$$$class__1_OurQApplication_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PySide6$$45$postLoad$$$class__1_OurQApplication_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PySide6$$45$postLoad$$$class__1_OurQApplication_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_PySide6$$45$postLoad$$$class__1_OurQApplication_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PySide6$$45$postLoad$$$class__1_OurQApplication_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_PySide6$$45$postLoad$$$class__1_OurQApplication_53, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

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


exception_lineno = 53;

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
tmp_res = PyObject_SetItem(locals_PySide6$$45$postLoad$$$class__1_OurQApplication_53, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_28;
PyObject *tmp_metaclass_value_2;
PyObject *tmp_name_value_5;
PyObject *tmp_bases_value_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_metaclass_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_5 = mod_consts.const_str_plain_OurQApplication;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_1__bases;
tmp_dict_arg_value_1 = locals_PySide6$$45$postLoad$$$class__1_OurQApplication_53;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_5, tmp_bases_value_2, tmp_dict_arg_value_1);
tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_metaclass_value_2, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_4;
}
{
    PyObject *old = outline_0_var___class__;
    outline_0_var___class__ = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_27 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_27);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_PySide6$$45$postLoad$$$class__1_OurQApplication_53);
locals_PySide6$$45$postLoad$$$class__1_OurQApplication_53 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_PySide6$$45$postLoad$$$class__1_OurQApplication_53);
locals_PySide6$$45$postLoad$$$class__1_OurQApplication_53 = NULL;
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
UPDATE_STRING_DICT1(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_OurQApplication, tmp_assign_source_27);
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
{
PyObject *tmp_ass_attr_value_6;
PyObject *tmp_expression_value_18;
PyObject *tmp_ass_attr_target_6;
tmp_expression_value_18 = module_var_accessor_PySide6$$45$postLoad$orig_QApplication(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_orig_QApplication);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;

    goto frame_exception_exit_1;
}
tmp_ass_attr_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain___module__);
if (tmp_ass_attr_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto frame_exception_exit_1;
}
tmp_ass_attr_target_6 = module_var_accessor_PySide6$$45$postLoad$OurQApplication(tstate);
if (unlikely(tmp_ass_attr_target_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OurQApplication);
}

if (tmp_ass_attr_target_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ass_attr_value_6);

exception_lineno = 81;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_6, const_str_plain___module__, tmp_ass_attr_value_6);
CHECK_OBJECT(tmp_ass_attr_value_6);
Py_DECREF(tmp_ass_attr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_7;
PyObject *tmp_expression_value_19;
PyObject *tmp_ass_attr_target_7;
tmp_expression_value_19 = module_var_accessor_PySide6$$45$postLoad$orig_QApplication(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_orig_QApplication);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;

    goto frame_exception_exit_1;
}
tmp_ass_attr_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, const_str_plain___name__);
if (tmp_ass_attr_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto frame_exception_exit_1;
}
tmp_ass_attr_target_7 = module_var_accessor_PySide6$$45$postLoad$OurQApplication(tstate);
if (unlikely(tmp_ass_attr_target_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OurQApplication);
}

if (tmp_ass_attr_target_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ass_attr_value_7);

exception_lineno = 82;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_7, const_str_plain___name__, tmp_ass_attr_value_7);
CHECK_OBJECT(tmp_ass_attr_value_7);
Py_DECREF(tmp_ass_attr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_8;
PyObject *tmp_expression_value_20;
PyObject *tmp_ass_attr_target_8;
tmp_expression_value_20 = module_var_accessor_PySide6$$45$postLoad$orig_QApplication(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_orig_QApplication);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 84;

    goto frame_exception_exit_1;
}
tmp_ass_attr_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, const_str_plain___qualname__);
if (tmp_ass_attr_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto frame_exception_exit_1;
}
tmp_ass_attr_target_8 = module_var_accessor_PySide6$$45$postLoad$OurQApplication(tstate);
if (unlikely(tmp_ass_attr_target_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OurQApplication);
}

if (tmp_ass_attr_target_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ass_attr_value_8);

exception_lineno = 84;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_8, const_str_plain___qualname__, tmp_ass_attr_value_8);
CHECK_OBJECT(tmp_ass_attr_value_8);
Py_DECREF(tmp_ass_attr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_9;
PyObject *tmp_expression_value_21;
PyObject *tmp_ass_attr_target_9;
tmp_expression_value_21 = module_var_accessor_PySide6$$45$postLoad$orig_QApplication(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_orig_QApplication);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;

    goto frame_exception_exit_1;
}
tmp_ass_attr_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, const_str_plain___doc__);
if (tmp_ass_attr_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto frame_exception_exit_1;
}
tmp_ass_attr_target_9 = module_var_accessor_PySide6$$45$postLoad$OurQApplication(tstate);
if (unlikely(tmp_ass_attr_target_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OurQApplication);
}

if (tmp_ass_attr_target_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ass_attr_value_9);

exception_lineno = 85;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_9, const_str_plain___doc__, tmp_ass_attr_value_9);
CHECK_OBJECT(tmp_ass_attr_value_9);
Py_DECREF(tmp_ass_attr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_10;
PyObject *tmp_ass_attr_target_10;
PyObject *tmp_expression_value_22;
tmp_ass_attr_value_10 = module_var_accessor_PySide6$$45$postLoad$OurQApplication(tstate);
if (unlikely(tmp_ass_attr_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OurQApplication);
}

if (tmp_ass_attr_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;

    goto frame_exception_exit_1;
}
tmp_expression_value_22 = module_var_accessor_PySide6$$45$postLoad$PySide6(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PySide6);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;

    goto frame_exception_exit_1;
}
tmp_ass_attr_target_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_QtWidgets);
if (tmp_ass_attr_target_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_10, mod_consts.const_str_plain_QApplication, tmp_ass_attr_value_10);
CHECK_OBJECT(tmp_ass_attr_target_10);
Py_DECREF(tmp_ass_attr_target_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto frame_exception_exit_1;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PySide6$$45$postLoad, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PySide6$$45$postLoad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PySide6$$45$postLoad, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_PySide6$$45$postLoad);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("PySide6$$45$postLoad", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "PySide6-postLoad" "-postLoad", false);
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_PySide6$$45$postLoad);
    return module_PySide6$$45$postLoad;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PySide6$$45$postLoad, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("PySide6$$45$postLoad", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
