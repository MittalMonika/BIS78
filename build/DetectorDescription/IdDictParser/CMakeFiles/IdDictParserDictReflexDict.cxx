// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME IdDictParserDictReflexDict

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
#include "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/IdDictParser/IdDictParserDict.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *IdDictParser_Dictionary();
   static void IdDictParser_TClassManip(TClass*);
   static void *new_IdDictParser(void *p = 0);
   static void *newArray_IdDictParser(Long_t size, void *p);
   static void delete_IdDictParser(void *p);
   static void deleteArray_IdDictParser(void *p);
   static void destruct_IdDictParser(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::IdDictParser*)
   {
      ::IdDictParser *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::IdDictParser));
      static ::ROOT::TGenericClassInfo 
         instance("IdDictParser", "IdDictParser.h", 11,
                  typeid(::IdDictParser), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &IdDictParser_Dictionary, isa_proxy, 4,
                  sizeof(::IdDictParser) );
      instance.SetNew(&new_IdDictParser);
      instance.SetNewArray(&newArray_IdDictParser);
      instance.SetDelete(&delete_IdDictParser);
      instance.SetDeleteArray(&deleteArray_IdDictParser);
      instance.SetDestructor(&destruct_IdDictParser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::IdDictParser*)
   {
      return GenerateInitInstanceLocal((::IdDictParser*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::IdDictParser*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *IdDictParser_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::IdDictParser*)0x0)->GetClass();
      IdDictParser_TClassManip(theClass);
   return theClass;
   }

   static void IdDictParser_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_IdDictParser(void *p) {
      return  p ? new(p) ::IdDictParser : new ::IdDictParser;
   }
   static void *newArray_IdDictParser(Long_t nElements, void *p) {
      return p ? new(p) ::IdDictParser[nElements] : new ::IdDictParser[nElements];
   }
   // Wrapper around operator delete
   static void delete_IdDictParser(void *p) {
      delete ((::IdDictParser*)p);
   }
   static void deleteArray_IdDictParser(void *p) {
      delete [] ((::IdDictParser*)p);
   }
   static void destruct_IdDictParser(void *p) {
      typedef ::IdDictParser current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::IdDictParser

namespace {
  void TriggerDictionaryInitialization_libIdDictParserDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/afs/cern.ch/work/m/mmittal/private/BIS_monika/build/DetectorDescription/IdDictParser/CMakeFiles/makeIdDictParserDictReflexDict.CqXT6v/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libIdDictParserDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$IdDictParser/IdDictParser.h")))  IdDictParser;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libIdDictParserDict dictionary payload"

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
  #define PACKAGE_VERSION "IdDictParser-00-00-00"
#endif
#ifndef PACKAGE_VERSION_UQ
  #define PACKAGE_VERSION_UQ IdDictParser-00-00-00
#endif
#ifndef EIGEN_DONT_VECTORIZE
  #define EIGEN_DONT_VECTORIZE 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
/*
  Copyright (C) 2002-2017 CERN for the benefit of the ATLAS collaboration
*/

/**
 * @file IdDictParserDict.h
 *
 */
#ifndef IDDICTPARSER_IDDICTPARSERDICT_H
#define IDDICTPARSER_IDDICTPARSERDICT_H 

#include "IdDictParser/IdDictParser.h"

#endif // IDDICTPARSER_IDDICTPARSERDICT_H 

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"IdDictParser", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libIdDictParserDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libIdDictParserDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libIdDictParserDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libIdDictParserDict() {
  TriggerDictionaryInitialization_libIdDictParserDict_Impl();
}
