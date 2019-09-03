// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MuonIdHelpersDictReflexDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/MuonSpectrometer/MuonIdHelpers/MuonIdHelpers/MuonIdHelpersDict.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *MuonIdHelper_Dictionary();
   static void MuonIdHelper_TClassManip(TClass*);
   static void delete_MuonIdHelper(void *p);
   static void deleteArray_MuonIdHelper(void *p);
   static void destruct_MuonIdHelper(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MuonIdHelper*)
   {
      ::MuonIdHelper *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MuonIdHelper));
      static ::ROOT::TGenericClassInfo 
         instance("MuonIdHelper", "MuonIdHelper.h", 91,
                  typeid(::MuonIdHelper), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MuonIdHelper_Dictionary, isa_proxy, 4,
                  sizeof(::MuonIdHelper) );
      instance.SetDelete(&delete_MuonIdHelper);
      instance.SetDeleteArray(&deleteArray_MuonIdHelper);
      instance.SetDestructor(&destruct_MuonIdHelper);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MuonIdHelper*)
   {
      return GenerateInitInstanceLocal((::MuonIdHelper*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::MuonIdHelper*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MuonIdHelper_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::MuonIdHelper*)0x0)->GetClass();
      MuonIdHelper_TClassManip(theClass);
   return theClass;
   }

   static void MuonIdHelper_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *CscIdHelper_Dictionary();
   static void CscIdHelper_TClassManip(TClass*);
   static void *new_CscIdHelper(void *p = 0);
   static void *newArray_CscIdHelper(Long_t size, void *p);
   static void delete_CscIdHelper(void *p);
   static void deleteArray_CscIdHelper(void *p);
   static void destruct_CscIdHelper(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CscIdHelper*)
   {
      ::CscIdHelper *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::CscIdHelper));
      static ::ROOT::TGenericClassInfo 
         instance("CscIdHelper", "CscIdHelper.h", 58,
                  typeid(::CscIdHelper), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &CscIdHelper_Dictionary, isa_proxy, 4,
                  sizeof(::CscIdHelper) );
      instance.SetNew(&new_CscIdHelper);
      instance.SetNewArray(&newArray_CscIdHelper);
      instance.SetDelete(&delete_CscIdHelper);
      instance.SetDeleteArray(&deleteArray_CscIdHelper);
      instance.SetDestructor(&destruct_CscIdHelper);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CscIdHelper*)
   {
      return GenerateInitInstanceLocal((::CscIdHelper*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::CscIdHelper*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *CscIdHelper_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::CscIdHelper*)0x0)->GetClass();
      CscIdHelper_TClassManip(theClass);
   return theClass;
   }

   static void CscIdHelper_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MdtIdHelper_Dictionary();
   static void MdtIdHelper_TClassManip(TClass*);
   static void *new_MdtIdHelper(void *p = 0);
   static void *newArray_MdtIdHelper(Long_t size, void *p);
   static void delete_MdtIdHelper(void *p);
   static void deleteArray_MdtIdHelper(void *p);
   static void destruct_MdtIdHelper(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MdtIdHelper*)
   {
      ::MdtIdHelper *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MdtIdHelper));
      static ::ROOT::TGenericClassInfo 
         instance("MdtIdHelper", "MdtIdHelper.h", 61,
                  typeid(::MdtIdHelper), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MdtIdHelper_Dictionary, isa_proxy, 4,
                  sizeof(::MdtIdHelper) );
      instance.SetNew(&new_MdtIdHelper);
      instance.SetNewArray(&newArray_MdtIdHelper);
      instance.SetDelete(&delete_MdtIdHelper);
      instance.SetDeleteArray(&deleteArray_MdtIdHelper);
      instance.SetDestructor(&destruct_MdtIdHelper);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MdtIdHelper*)
   {
      return GenerateInitInstanceLocal((::MdtIdHelper*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::MdtIdHelper*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MdtIdHelper_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::MdtIdHelper*)0x0)->GetClass();
      MdtIdHelper_TClassManip(theClass);
   return theClass;
   }

   static void MdtIdHelper_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RpcIdHelper_Dictionary();
   static void RpcIdHelper_TClassManip(TClass*);
   static void *new_RpcIdHelper(void *p = 0);
   static void *newArray_RpcIdHelper(Long_t size, void *p);
   static void delete_RpcIdHelper(void *p);
   static void deleteArray_RpcIdHelper(void *p);
   static void destruct_RpcIdHelper(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RpcIdHelper*)
   {
      ::RpcIdHelper *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RpcIdHelper));
      static ::ROOT::TGenericClassInfo 
         instance("RpcIdHelper", "RpcIdHelper.h", 60,
                  typeid(::RpcIdHelper), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RpcIdHelper_Dictionary, isa_proxy, 4,
                  sizeof(::RpcIdHelper) );
      instance.SetNew(&new_RpcIdHelper);
      instance.SetNewArray(&newArray_RpcIdHelper);
      instance.SetDelete(&delete_RpcIdHelper);
      instance.SetDeleteArray(&deleteArray_RpcIdHelper);
      instance.SetDestructor(&destruct_RpcIdHelper);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RpcIdHelper*)
   {
      return GenerateInitInstanceLocal((::RpcIdHelper*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::RpcIdHelper*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RpcIdHelper_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RpcIdHelper*)0x0)->GetClass();
      RpcIdHelper_TClassManip(theClass);
   return theClass;
   }

   static void RpcIdHelper_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TgcIdHelper_Dictionary();
   static void TgcIdHelper_TClassManip(TClass*);
   static void *new_TgcIdHelper(void *p = 0);
   static void *newArray_TgcIdHelper(Long_t size, void *p);
   static void delete_TgcIdHelper(void *p);
   static void deleteArray_TgcIdHelper(void *p);
   static void destruct_TgcIdHelper(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TgcIdHelper*)
   {
      ::TgcIdHelper *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TgcIdHelper));
      static ::ROOT::TGenericClassInfo 
         instance("TgcIdHelper", "TgcIdHelper.h", 60,
                  typeid(::TgcIdHelper), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TgcIdHelper_Dictionary, isa_proxy, 4,
                  sizeof(::TgcIdHelper) );
      instance.SetNew(&new_TgcIdHelper);
      instance.SetNewArray(&newArray_TgcIdHelper);
      instance.SetDelete(&delete_TgcIdHelper);
      instance.SetDeleteArray(&deleteArray_TgcIdHelper);
      instance.SetDestructor(&destruct_TgcIdHelper);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TgcIdHelper*)
   {
      return GenerateInitInstanceLocal((::TgcIdHelper*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TgcIdHelper*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TgcIdHelper_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TgcIdHelper*)0x0)->GetClass();
      TgcIdHelper_TClassManip(theClass);
   return theClass;
   }

   static void TgcIdHelper_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *sTgcIdHelper_Dictionary();
   static void sTgcIdHelper_TClassManip(TClass*);
   static void *new_sTgcIdHelper(void *p = 0);
   static void *newArray_sTgcIdHelper(Long_t size, void *p);
   static void delete_sTgcIdHelper(void *p);
   static void deleteArray_sTgcIdHelper(void *p);
   static void destruct_sTgcIdHelper(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::sTgcIdHelper*)
   {
      ::sTgcIdHelper *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::sTgcIdHelper));
      static ::ROOT::TGenericClassInfo 
         instance("sTgcIdHelper", "sTgcIdHelper.h", 57,
                  typeid(::sTgcIdHelper), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &sTgcIdHelper_Dictionary, isa_proxy, 4,
                  sizeof(::sTgcIdHelper) );
      instance.SetNew(&new_sTgcIdHelper);
      instance.SetNewArray(&newArray_sTgcIdHelper);
      instance.SetDelete(&delete_sTgcIdHelper);
      instance.SetDeleteArray(&deleteArray_sTgcIdHelper);
      instance.SetDestructor(&destruct_sTgcIdHelper);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::sTgcIdHelper*)
   {
      return GenerateInitInstanceLocal((::sTgcIdHelper*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::sTgcIdHelper*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *sTgcIdHelper_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::sTgcIdHelper*)0x0)->GetClass();
      sTgcIdHelper_TClassManip(theClass);
   return theClass;
   }

   static void sTgcIdHelper_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MmIdHelper_Dictionary();
   static void MmIdHelper_TClassManip(TClass*);
   static void *new_MmIdHelper(void *p = 0);
   static void *newArray_MmIdHelper(Long_t size, void *p);
   static void delete_MmIdHelper(void *p);
   static void deleteArray_MmIdHelper(void *p);
   static void destruct_MmIdHelper(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MmIdHelper*)
   {
      ::MmIdHelper *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MmIdHelper));
      static ::ROOT::TGenericClassInfo 
         instance("MmIdHelper", "MmIdHelper.h", 56,
                  typeid(::MmIdHelper), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MmIdHelper_Dictionary, isa_proxy, 4,
                  sizeof(::MmIdHelper) );
      instance.SetNew(&new_MmIdHelper);
      instance.SetNewArray(&newArray_MmIdHelper);
      instance.SetDelete(&delete_MmIdHelper);
      instance.SetDeleteArray(&deleteArray_MmIdHelper);
      instance.SetDestructor(&destruct_MmIdHelper);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MmIdHelper*)
   {
      return GenerateInitInstanceLocal((::MmIdHelper*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::MmIdHelper*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MmIdHelper_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::MmIdHelper*)0x0)->GetClass();
      MmIdHelper_TClassManip(theClass);
   return theClass;
   }

   static void MmIdHelper_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_MuonIdHelper(void *p) {
      delete ((::MuonIdHelper*)p);
   }
   static void deleteArray_MuonIdHelper(void *p) {
      delete [] ((::MuonIdHelper*)p);
   }
   static void destruct_MuonIdHelper(void *p) {
      typedef ::MuonIdHelper current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MuonIdHelper

namespace ROOT {
   // Wrappers around operator new
   static void *new_CscIdHelper(void *p) {
      return  p ? new(p) ::CscIdHelper : new ::CscIdHelper;
   }
   static void *newArray_CscIdHelper(Long_t nElements, void *p) {
      return p ? new(p) ::CscIdHelper[nElements] : new ::CscIdHelper[nElements];
   }
   // Wrapper around operator delete
   static void delete_CscIdHelper(void *p) {
      delete ((::CscIdHelper*)p);
   }
   static void deleteArray_CscIdHelper(void *p) {
      delete [] ((::CscIdHelper*)p);
   }
   static void destruct_CscIdHelper(void *p) {
      typedef ::CscIdHelper current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CscIdHelper

namespace ROOT {
   // Wrappers around operator new
   static void *new_MdtIdHelper(void *p) {
      return  p ? new(p) ::MdtIdHelper : new ::MdtIdHelper;
   }
   static void *newArray_MdtIdHelper(Long_t nElements, void *p) {
      return p ? new(p) ::MdtIdHelper[nElements] : new ::MdtIdHelper[nElements];
   }
   // Wrapper around operator delete
   static void delete_MdtIdHelper(void *p) {
      delete ((::MdtIdHelper*)p);
   }
   static void deleteArray_MdtIdHelper(void *p) {
      delete [] ((::MdtIdHelper*)p);
   }
   static void destruct_MdtIdHelper(void *p) {
      typedef ::MdtIdHelper current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MdtIdHelper

namespace ROOT {
   // Wrappers around operator new
   static void *new_RpcIdHelper(void *p) {
      return  p ? new(p) ::RpcIdHelper : new ::RpcIdHelper;
   }
   static void *newArray_RpcIdHelper(Long_t nElements, void *p) {
      return p ? new(p) ::RpcIdHelper[nElements] : new ::RpcIdHelper[nElements];
   }
   // Wrapper around operator delete
   static void delete_RpcIdHelper(void *p) {
      delete ((::RpcIdHelper*)p);
   }
   static void deleteArray_RpcIdHelper(void *p) {
      delete [] ((::RpcIdHelper*)p);
   }
   static void destruct_RpcIdHelper(void *p) {
      typedef ::RpcIdHelper current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RpcIdHelper

namespace ROOT {
   // Wrappers around operator new
   static void *new_TgcIdHelper(void *p) {
      return  p ? new(p) ::TgcIdHelper : new ::TgcIdHelper;
   }
   static void *newArray_TgcIdHelper(Long_t nElements, void *p) {
      return p ? new(p) ::TgcIdHelper[nElements] : new ::TgcIdHelper[nElements];
   }
   // Wrapper around operator delete
   static void delete_TgcIdHelper(void *p) {
      delete ((::TgcIdHelper*)p);
   }
   static void deleteArray_TgcIdHelper(void *p) {
      delete [] ((::TgcIdHelper*)p);
   }
   static void destruct_TgcIdHelper(void *p) {
      typedef ::TgcIdHelper current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TgcIdHelper

namespace ROOT {
   // Wrappers around operator new
   static void *new_sTgcIdHelper(void *p) {
      return  p ? new(p) ::sTgcIdHelper : new ::sTgcIdHelper;
   }
   static void *newArray_sTgcIdHelper(Long_t nElements, void *p) {
      return p ? new(p) ::sTgcIdHelper[nElements] : new ::sTgcIdHelper[nElements];
   }
   // Wrapper around operator delete
   static void delete_sTgcIdHelper(void *p) {
      delete ((::sTgcIdHelper*)p);
   }
   static void deleteArray_sTgcIdHelper(void *p) {
      delete [] ((::sTgcIdHelper*)p);
   }
   static void destruct_sTgcIdHelper(void *p) {
      typedef ::sTgcIdHelper current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::sTgcIdHelper

namespace ROOT {
   // Wrappers around operator new
   static void *new_MmIdHelper(void *p) {
      return  p ? new(p) ::MmIdHelper : new ::MmIdHelper;
   }
   static void *newArray_MmIdHelper(Long_t nElements, void *p) {
      return p ? new(p) ::MmIdHelper[nElements] : new ::MmIdHelper[nElements];
   }
   // Wrapper around operator delete
   static void delete_MmIdHelper(void *p) {
      delete ((::MmIdHelper*)p);
   }
   static void deleteArray_MmIdHelper(void *p) {
      delete [] ((::MmIdHelper*)p);
   }
   static void destruct_MmIdHelper(void *p) {
      typedef ::MmIdHelper current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MmIdHelper

namespace {
  void TriggerDictionaryInitialization_libMuonIdHelpersDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/afs/cern.ch/work/m/mmittal/private/BIS_monika/build/MuonSpectrometer/MuonIdHelpers/CMakeFiles/makeMuonIdHelpersDictReflexDict.lyQU3l/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libMuonIdHelpersDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$MuonIdHelpers/MuonIdHelper.h")))  __attribute__((annotate("$clingAutoload$MuonIdHelpers/CscIdHelper.h")))  MuonIdHelper;
class __attribute__((annotate("$clingAutoload$MuonIdHelpers/CscIdHelper.h")))  CscIdHelper;
class __attribute__((annotate("$clingAutoload$MuonIdHelpers/MdtIdHelper.h")))  MdtIdHelper;
class __attribute__((annotate("$clingAutoload$MuonIdHelpers/RpcIdHelper.h")))  RpcIdHelper;
class __attribute__((annotate("$clingAutoload$MuonIdHelpers/TgcIdHelper.h")))  TgcIdHelper;
class __attribute__((annotate("$clingAutoload$MuonIdHelpers/sTgcIdHelper.h")))  sTgcIdHelper;
class __attribute__((annotate("$clingAutoload$MuonIdHelpers/MmIdHelper.h")))  MmIdHelper;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libMuonIdHelpersDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef HAVE_PRETTY_FUNCTION
  #define HAVE_PRETTY_FUNCTION 1
#endif
#ifndef HAVE_64_BITS
  #define HAVE_64_BITS 1
#endif
#ifndef __IDENTIFIER_64BIT__
  #define __IDENTIFIER_64BIT__ 1
#endif
#ifndef ATLAS
  #define ATLAS 1
#endif
#ifndef GAUDI_V20_COMPAT
  #define GAUDI_V20_COMPAT 1
#endif
#ifndef ATLAS_GAUDI_V21
  #define ATLAS_GAUDI_V21 1
#endif
#ifndef HAVE_GAUDI_PLUGINSVC
  #define HAVE_GAUDI_PLUGINSVC 1
#endif
#ifndef PACKAGE_VERSION
  #define PACKAGE_VERSION "MuonIdHelpers-00-00-00"
#endif
#ifndef PACKAGE_VERSION_UQ
  #define PACKAGE_VERSION_UQ MuonIdHelpers-00-00-00
#endif
#ifndef EIGEN_DONT_VECTORIZE
  #define EIGEN_DONT_VECTORIZE 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
/*
  Copyright (C) 2002-2017 CERN for the benefit of the ATLAS collaboration
*/

/**
 * @file MuonIdHelpersDict.h
 *
 * @brief This file includes the class for dictionary definitions
 *
 * @author RD Schaffer <R.D.Schaffer@cern.ch>
 *
 * $Id: MuonIdHelpersDict.h,v 1.8 2009-03-30 11:19:27 tsulaia Exp $
 */
#ifndef MUONIDHELPERS_MUONIDHELPERSDICT_H
#define MUONIDHELPERS_MUONIDHELPERSDICT_H 

#include "MuonIdHelpers/CscIdHelper.h"
#include "MuonIdHelpers/MdtIdHelper.h"
#include "MuonIdHelpers/RpcIdHelper.h"
#include "MuonIdHelpers/TgcIdHelper.h"
/* for nSW */
#include "MuonIdHelpers/sTgcIdHelper.h"
#include "MuonIdHelpers/MmIdHelper.h"

#endif // MUONIDHELPERS_MUONIDHELPERSDICT_H 

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"CscIdHelper", payloadCode, "@",
"MdtIdHelper", payloadCode, "@",
"MmIdHelper", payloadCode, "@",
"MuonIdHelper", payloadCode, "@",
"RpcIdHelper", payloadCode, "@",
"TgcIdHelper", payloadCode, "@",
"sTgcIdHelper", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libMuonIdHelpersDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libMuonIdHelpersDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libMuonIdHelpersDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libMuonIdHelpersDict() {
  TriggerDictionaryInitialization_libMuonIdHelpersDict_Impl();
}
