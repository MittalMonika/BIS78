// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MuonSimEventDictReflexDict

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
#include "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/MuonSpectrometer/MuonSimEvent/MuonSimEvent/MuonSimEventDict.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *CSCSimHit_Dictionary();
   static void CSCSimHit_TClassManip(TClass*);
   static void *new_CSCSimHit(void *p = 0);
   static void *newArray_CSCSimHit(Long_t size, void *p);
   static void delete_CSCSimHit(void *p);
   static void deleteArray_CSCSimHit(void *p);
   static void destruct_CSCSimHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CSCSimHit*)
   {
      ::CSCSimHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::CSCSimHit));
      static ::ROOT::TGenericClassInfo 
         instance("CSCSimHit", "CSCSimHit.h", 18,
                  typeid(::CSCSimHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &CSCSimHit_Dictionary, isa_proxy, 4,
                  sizeof(::CSCSimHit) );
      instance.SetNew(&new_CSCSimHit);
      instance.SetNewArray(&newArray_CSCSimHit);
      instance.SetDelete(&delete_CSCSimHit);
      instance.SetDeleteArray(&deleteArray_CSCSimHit);
      instance.SetDestructor(&destruct_CSCSimHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CSCSimHit*)
   {
      return GenerateInitInstanceLocal((::CSCSimHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::CSCSimHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *CSCSimHit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::CSCSimHit*)0x0)->GetClass();
      CSCSimHit_TClassManip(theClass);
   return theClass;
   }

   static void CSCSimHit_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *AthenaHitsVectorlECSCSimHitgR_Dictionary();
   static void AthenaHitsVectorlECSCSimHitgR_TClassManip(TClass*);
   static void *new_AthenaHitsVectorlECSCSimHitgR(void *p = 0);
   static void *newArray_AthenaHitsVectorlECSCSimHitgR(Long_t size, void *p);
   static void delete_AthenaHitsVectorlECSCSimHitgR(void *p);
   static void deleteArray_AthenaHitsVectorlECSCSimHitgR(void *p);
   static void destruct_AthenaHitsVectorlECSCSimHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AthenaHitsVector<CSCSimHit>*)
   {
      ::AthenaHitsVector<CSCSimHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::AthenaHitsVector<CSCSimHit>));
      static ::ROOT::TGenericClassInfo 
         instance("AthenaHitsVector<CSCSimHit>", "HitManagement/AthenaHitsVector.h", 31,
                  typeid(::AthenaHitsVector<CSCSimHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &AthenaHitsVectorlECSCSimHitgR_Dictionary, isa_proxy, 4,
                  sizeof(::AthenaHitsVector<CSCSimHit>) );
      instance.SetNew(&new_AthenaHitsVectorlECSCSimHitgR);
      instance.SetNewArray(&newArray_AthenaHitsVectorlECSCSimHitgR);
      instance.SetDelete(&delete_AthenaHitsVectorlECSCSimHitgR);
      instance.SetDeleteArray(&deleteArray_AthenaHitsVectorlECSCSimHitgR);
      instance.SetDestructor(&destruct_AthenaHitsVectorlECSCSimHitgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AthenaHitsVector<CSCSimHit>*)
   {
      return GenerateInitInstanceLocal((::AthenaHitsVector<CSCSimHit>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::AthenaHitsVector<CSCSimHit>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *AthenaHitsVectorlECSCSimHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::AthenaHitsVector<CSCSimHit>*)0x0)->GetClass();
      AthenaHitsVectorlECSCSimHitgR_TClassManip(theClass);
   return theClass;
   }

   static void AthenaHitsVectorlECSCSimHitgR_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("id","DC744F9B-078A-4C61-B03F-D035D885B559");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *AthenaHitsVectorlEMDTSimHitgR_Dictionary();
   static void AthenaHitsVectorlEMDTSimHitgR_TClassManip(TClass*);
   static void *new_AthenaHitsVectorlEMDTSimHitgR(void *p = 0);
   static void *newArray_AthenaHitsVectorlEMDTSimHitgR(Long_t size, void *p);
   static void delete_AthenaHitsVectorlEMDTSimHitgR(void *p);
   static void deleteArray_AthenaHitsVectorlEMDTSimHitgR(void *p);
   static void destruct_AthenaHitsVectorlEMDTSimHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AthenaHitsVector<MDTSimHit>*)
   {
      ::AthenaHitsVector<MDTSimHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::AthenaHitsVector<MDTSimHit>));
      static ::ROOT::TGenericClassInfo 
         instance("AthenaHitsVector<MDTSimHit>", "HitManagement/AthenaHitsVector.h", 31,
                  typeid(::AthenaHitsVector<MDTSimHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &AthenaHitsVectorlEMDTSimHitgR_Dictionary, isa_proxy, 4,
                  sizeof(::AthenaHitsVector<MDTSimHit>) );
      instance.SetNew(&new_AthenaHitsVectorlEMDTSimHitgR);
      instance.SetNewArray(&newArray_AthenaHitsVectorlEMDTSimHitgR);
      instance.SetDelete(&delete_AthenaHitsVectorlEMDTSimHitgR);
      instance.SetDeleteArray(&deleteArray_AthenaHitsVectorlEMDTSimHitgR);
      instance.SetDestructor(&destruct_AthenaHitsVectorlEMDTSimHitgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AthenaHitsVector<MDTSimHit>*)
   {
      return GenerateInitInstanceLocal((::AthenaHitsVector<MDTSimHit>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::AthenaHitsVector<MDTSimHit>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *AthenaHitsVectorlEMDTSimHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::AthenaHitsVector<MDTSimHit>*)0x0)->GetClass();
      AthenaHitsVectorlEMDTSimHitgR_TClassManip(theClass);
   return theClass;
   }

   static void AthenaHitsVectorlEMDTSimHitgR_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("id","D76D06CC-C15F-43E6-BBC3-480DE5DA065D");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *AthenaHitsVectorlERPCSimHitgR_Dictionary();
   static void AthenaHitsVectorlERPCSimHitgR_TClassManip(TClass*);
   static void *new_AthenaHitsVectorlERPCSimHitgR(void *p = 0);
   static void *newArray_AthenaHitsVectorlERPCSimHitgR(Long_t size, void *p);
   static void delete_AthenaHitsVectorlERPCSimHitgR(void *p);
   static void deleteArray_AthenaHitsVectorlERPCSimHitgR(void *p);
   static void destruct_AthenaHitsVectorlERPCSimHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AthenaHitsVector<RPCSimHit>*)
   {
      ::AthenaHitsVector<RPCSimHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::AthenaHitsVector<RPCSimHit>));
      static ::ROOT::TGenericClassInfo 
         instance("AthenaHitsVector<RPCSimHit>", "HitManagement/AthenaHitsVector.h", 31,
                  typeid(::AthenaHitsVector<RPCSimHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &AthenaHitsVectorlERPCSimHitgR_Dictionary, isa_proxy, 4,
                  sizeof(::AthenaHitsVector<RPCSimHit>) );
      instance.SetNew(&new_AthenaHitsVectorlERPCSimHitgR);
      instance.SetNewArray(&newArray_AthenaHitsVectorlERPCSimHitgR);
      instance.SetDelete(&delete_AthenaHitsVectorlERPCSimHitgR);
      instance.SetDeleteArray(&deleteArray_AthenaHitsVectorlERPCSimHitgR);
      instance.SetDestructor(&destruct_AthenaHitsVectorlERPCSimHitgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AthenaHitsVector<RPCSimHit>*)
   {
      return GenerateInitInstanceLocal((::AthenaHitsVector<RPCSimHit>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::AthenaHitsVector<RPCSimHit>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *AthenaHitsVectorlERPCSimHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::AthenaHitsVector<RPCSimHit>*)0x0)->GetClass();
      AthenaHitsVectorlERPCSimHitgR_TClassManip(theClass);
   return theClass;
   }

   static void AthenaHitsVectorlERPCSimHitgR_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("id","45EB013E-FC8E-4612-88B7-6E0CAF718F79");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *AthenaHitsVectorlETGCSimHitgR_Dictionary();
   static void AthenaHitsVectorlETGCSimHitgR_TClassManip(TClass*);
   static void *new_AthenaHitsVectorlETGCSimHitgR(void *p = 0);
   static void *newArray_AthenaHitsVectorlETGCSimHitgR(Long_t size, void *p);
   static void delete_AthenaHitsVectorlETGCSimHitgR(void *p);
   static void deleteArray_AthenaHitsVectorlETGCSimHitgR(void *p);
   static void destruct_AthenaHitsVectorlETGCSimHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AthenaHitsVector<TGCSimHit>*)
   {
      ::AthenaHitsVector<TGCSimHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::AthenaHitsVector<TGCSimHit>));
      static ::ROOT::TGenericClassInfo 
         instance("AthenaHitsVector<TGCSimHit>", "HitManagement/AthenaHitsVector.h", 31,
                  typeid(::AthenaHitsVector<TGCSimHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &AthenaHitsVectorlETGCSimHitgR_Dictionary, isa_proxy, 4,
                  sizeof(::AthenaHitsVector<TGCSimHit>) );
      instance.SetNew(&new_AthenaHitsVectorlETGCSimHitgR);
      instance.SetNewArray(&newArray_AthenaHitsVectorlETGCSimHitgR);
      instance.SetDelete(&delete_AthenaHitsVectorlETGCSimHitgR);
      instance.SetDeleteArray(&deleteArray_AthenaHitsVectorlETGCSimHitgR);
      instance.SetDestructor(&destruct_AthenaHitsVectorlETGCSimHitgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AthenaHitsVector<TGCSimHit>*)
   {
      return GenerateInitInstanceLocal((::AthenaHitsVector<TGCSimHit>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::AthenaHitsVector<TGCSimHit>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *AthenaHitsVectorlETGCSimHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::AthenaHitsVector<TGCSimHit>*)0x0)->GetClass();
      AthenaHitsVectorlETGCSimHitgR_TClassManip(theClass);
   return theClass;
   }

   static void AthenaHitsVectorlETGCSimHitgR_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("id","D7C91818-4730-4717-A650-107F52C0221E");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *AthenaHitsVectorlEGenericMuonSimHitgR_Dictionary();
   static void AthenaHitsVectorlEGenericMuonSimHitgR_TClassManip(TClass*);
   static void *new_AthenaHitsVectorlEGenericMuonSimHitgR(void *p = 0);
   static void *newArray_AthenaHitsVectorlEGenericMuonSimHitgR(Long_t size, void *p);
   static void delete_AthenaHitsVectorlEGenericMuonSimHitgR(void *p);
   static void deleteArray_AthenaHitsVectorlEGenericMuonSimHitgR(void *p);
   static void destruct_AthenaHitsVectorlEGenericMuonSimHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AthenaHitsVector<GenericMuonSimHit>*)
   {
      ::AthenaHitsVector<GenericMuonSimHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::AthenaHitsVector<GenericMuonSimHit>));
      static ::ROOT::TGenericClassInfo 
         instance("AthenaHitsVector<GenericMuonSimHit>", "HitManagement/AthenaHitsVector.h", 31,
                  typeid(::AthenaHitsVector<GenericMuonSimHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &AthenaHitsVectorlEGenericMuonSimHitgR_Dictionary, isa_proxy, 4,
                  sizeof(::AthenaHitsVector<GenericMuonSimHit>) );
      instance.SetNew(&new_AthenaHitsVectorlEGenericMuonSimHitgR);
      instance.SetNewArray(&newArray_AthenaHitsVectorlEGenericMuonSimHitgR);
      instance.SetDelete(&delete_AthenaHitsVectorlEGenericMuonSimHitgR);
      instance.SetDeleteArray(&deleteArray_AthenaHitsVectorlEGenericMuonSimHitgR);
      instance.SetDestructor(&destruct_AthenaHitsVectorlEGenericMuonSimHitgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AthenaHitsVector<GenericMuonSimHit>*)
   {
      return GenerateInitInstanceLocal((::AthenaHitsVector<GenericMuonSimHit>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::AthenaHitsVector<GenericMuonSimHit>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *AthenaHitsVectorlEGenericMuonSimHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::AthenaHitsVector<GenericMuonSimHit>*)0x0)->GetClass();
      AthenaHitsVectorlEGenericMuonSimHitgR_TClassManip(theClass);
   return theClass;
   }

   static void AthenaHitsVectorlEGenericMuonSimHitgR_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("id","5745A192-1438-11E1-9AE4-001E4F3DA869");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *AthenaHitsVectorlEsTGCSimHitgR_Dictionary();
   static void AthenaHitsVectorlEsTGCSimHitgR_TClassManip(TClass*);
   static void *new_AthenaHitsVectorlEsTGCSimHitgR(void *p = 0);
   static void *newArray_AthenaHitsVectorlEsTGCSimHitgR(Long_t size, void *p);
   static void delete_AthenaHitsVectorlEsTGCSimHitgR(void *p);
   static void deleteArray_AthenaHitsVectorlEsTGCSimHitgR(void *p);
   static void destruct_AthenaHitsVectorlEsTGCSimHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AthenaHitsVector<sTGCSimHit>*)
   {
      ::AthenaHitsVector<sTGCSimHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::AthenaHitsVector<sTGCSimHit>));
      static ::ROOT::TGenericClassInfo 
         instance("AthenaHitsVector<sTGCSimHit>", "HitManagement/AthenaHitsVector.h", 31,
                  typeid(::AthenaHitsVector<sTGCSimHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &AthenaHitsVectorlEsTGCSimHitgR_Dictionary, isa_proxy, 4,
                  sizeof(::AthenaHitsVector<sTGCSimHit>) );
      instance.SetNew(&new_AthenaHitsVectorlEsTGCSimHitgR);
      instance.SetNewArray(&newArray_AthenaHitsVectorlEsTGCSimHitgR);
      instance.SetDelete(&delete_AthenaHitsVectorlEsTGCSimHitgR);
      instance.SetDeleteArray(&deleteArray_AthenaHitsVectorlEsTGCSimHitgR);
      instance.SetDestructor(&destruct_AthenaHitsVectorlEsTGCSimHitgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AthenaHitsVector<sTGCSimHit>*)
   {
      return GenerateInitInstanceLocal((::AthenaHitsVector<sTGCSimHit>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::AthenaHitsVector<sTGCSimHit>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *AthenaHitsVectorlEsTGCSimHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::AthenaHitsVector<sTGCSimHit>*)0x0)->GetClass();
      AthenaHitsVectorlEsTGCSimHitgR_TClassManip(theClass);
   return theClass;
   }

   static void AthenaHitsVectorlEsTGCSimHitgR_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("id","9ae1805a-6e3c-11e8-9b02-02163e01bddd");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *AtlasHitsVectorlECSCSimHitgR_Dictionary();
   static void AtlasHitsVectorlECSCSimHitgR_TClassManip(TClass*);
   static void *new_AtlasHitsVectorlECSCSimHitgR(void *p = 0);
   static void *newArray_AtlasHitsVectorlECSCSimHitgR(Long_t size, void *p);
   static void delete_AtlasHitsVectorlECSCSimHitgR(void *p);
   static void deleteArray_AtlasHitsVectorlECSCSimHitgR(void *p);
   static void destruct_AtlasHitsVectorlECSCSimHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AtlasHitsVector<CSCSimHit>*)
   {
      ::AtlasHitsVector<CSCSimHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::AtlasHitsVector<CSCSimHit>));
      static ::ROOT::TGenericClassInfo 
         instance("AtlasHitsVector<CSCSimHit>", "HitManagement/AtlasHitsVector.h", 32,
                  typeid(::AtlasHitsVector<CSCSimHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &AtlasHitsVectorlECSCSimHitgR_Dictionary, isa_proxy, 4,
                  sizeof(::AtlasHitsVector<CSCSimHit>) );
      instance.SetNew(&new_AtlasHitsVectorlECSCSimHitgR);
      instance.SetNewArray(&newArray_AtlasHitsVectorlECSCSimHitgR);
      instance.SetDelete(&delete_AtlasHitsVectorlECSCSimHitgR);
      instance.SetDeleteArray(&deleteArray_AtlasHitsVectorlECSCSimHitgR);
      instance.SetDestructor(&destruct_AtlasHitsVectorlECSCSimHitgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AtlasHitsVector<CSCSimHit>*)
   {
      return GenerateInitInstanceLocal((::AtlasHitsVector<CSCSimHit>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::AtlasHitsVector<CSCSimHit>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *AtlasHitsVectorlECSCSimHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::AtlasHitsVector<CSCSimHit>*)0x0)->GetClass();
      AtlasHitsVectorlECSCSimHitgR_TClassManip(theClass);
   return theClass;
   }

   static void AtlasHitsVectorlECSCSimHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *AtlasHitsVectorlEMDTSimHitgR_Dictionary();
   static void AtlasHitsVectorlEMDTSimHitgR_TClassManip(TClass*);
   static void *new_AtlasHitsVectorlEMDTSimHitgR(void *p = 0);
   static void *newArray_AtlasHitsVectorlEMDTSimHitgR(Long_t size, void *p);
   static void delete_AtlasHitsVectorlEMDTSimHitgR(void *p);
   static void deleteArray_AtlasHitsVectorlEMDTSimHitgR(void *p);
   static void destruct_AtlasHitsVectorlEMDTSimHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AtlasHitsVector<MDTSimHit>*)
   {
      ::AtlasHitsVector<MDTSimHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::AtlasHitsVector<MDTSimHit>));
      static ::ROOT::TGenericClassInfo 
         instance("AtlasHitsVector<MDTSimHit>", "HitManagement/AtlasHitsVector.h", 32,
                  typeid(::AtlasHitsVector<MDTSimHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &AtlasHitsVectorlEMDTSimHitgR_Dictionary, isa_proxy, 4,
                  sizeof(::AtlasHitsVector<MDTSimHit>) );
      instance.SetNew(&new_AtlasHitsVectorlEMDTSimHitgR);
      instance.SetNewArray(&newArray_AtlasHitsVectorlEMDTSimHitgR);
      instance.SetDelete(&delete_AtlasHitsVectorlEMDTSimHitgR);
      instance.SetDeleteArray(&deleteArray_AtlasHitsVectorlEMDTSimHitgR);
      instance.SetDestructor(&destruct_AtlasHitsVectorlEMDTSimHitgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AtlasHitsVector<MDTSimHit>*)
   {
      return GenerateInitInstanceLocal((::AtlasHitsVector<MDTSimHit>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::AtlasHitsVector<MDTSimHit>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *AtlasHitsVectorlEMDTSimHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::AtlasHitsVector<MDTSimHit>*)0x0)->GetClass();
      AtlasHitsVectorlEMDTSimHitgR_TClassManip(theClass);
   return theClass;
   }

   static void AtlasHitsVectorlEMDTSimHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *AtlasHitsVectorlERPCSimHitgR_Dictionary();
   static void AtlasHitsVectorlERPCSimHitgR_TClassManip(TClass*);
   static void *new_AtlasHitsVectorlERPCSimHitgR(void *p = 0);
   static void *newArray_AtlasHitsVectorlERPCSimHitgR(Long_t size, void *p);
   static void delete_AtlasHitsVectorlERPCSimHitgR(void *p);
   static void deleteArray_AtlasHitsVectorlERPCSimHitgR(void *p);
   static void destruct_AtlasHitsVectorlERPCSimHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AtlasHitsVector<RPCSimHit>*)
   {
      ::AtlasHitsVector<RPCSimHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::AtlasHitsVector<RPCSimHit>));
      static ::ROOT::TGenericClassInfo 
         instance("AtlasHitsVector<RPCSimHit>", "HitManagement/AtlasHitsVector.h", 32,
                  typeid(::AtlasHitsVector<RPCSimHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &AtlasHitsVectorlERPCSimHitgR_Dictionary, isa_proxy, 4,
                  sizeof(::AtlasHitsVector<RPCSimHit>) );
      instance.SetNew(&new_AtlasHitsVectorlERPCSimHitgR);
      instance.SetNewArray(&newArray_AtlasHitsVectorlERPCSimHitgR);
      instance.SetDelete(&delete_AtlasHitsVectorlERPCSimHitgR);
      instance.SetDeleteArray(&deleteArray_AtlasHitsVectorlERPCSimHitgR);
      instance.SetDestructor(&destruct_AtlasHitsVectorlERPCSimHitgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AtlasHitsVector<RPCSimHit>*)
   {
      return GenerateInitInstanceLocal((::AtlasHitsVector<RPCSimHit>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::AtlasHitsVector<RPCSimHit>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *AtlasHitsVectorlERPCSimHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::AtlasHitsVector<RPCSimHit>*)0x0)->GetClass();
      AtlasHitsVectorlERPCSimHitgR_TClassManip(theClass);
   return theClass;
   }

   static void AtlasHitsVectorlERPCSimHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *AtlasHitsVectorlETGCSimHitgR_Dictionary();
   static void AtlasHitsVectorlETGCSimHitgR_TClassManip(TClass*);
   static void *new_AtlasHitsVectorlETGCSimHitgR(void *p = 0);
   static void *newArray_AtlasHitsVectorlETGCSimHitgR(Long_t size, void *p);
   static void delete_AtlasHitsVectorlETGCSimHitgR(void *p);
   static void deleteArray_AtlasHitsVectorlETGCSimHitgR(void *p);
   static void destruct_AtlasHitsVectorlETGCSimHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AtlasHitsVector<TGCSimHit>*)
   {
      ::AtlasHitsVector<TGCSimHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::AtlasHitsVector<TGCSimHit>));
      static ::ROOT::TGenericClassInfo 
         instance("AtlasHitsVector<TGCSimHit>", "HitManagement/AtlasHitsVector.h", 32,
                  typeid(::AtlasHitsVector<TGCSimHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &AtlasHitsVectorlETGCSimHitgR_Dictionary, isa_proxy, 4,
                  sizeof(::AtlasHitsVector<TGCSimHit>) );
      instance.SetNew(&new_AtlasHitsVectorlETGCSimHitgR);
      instance.SetNewArray(&newArray_AtlasHitsVectorlETGCSimHitgR);
      instance.SetDelete(&delete_AtlasHitsVectorlETGCSimHitgR);
      instance.SetDeleteArray(&deleteArray_AtlasHitsVectorlETGCSimHitgR);
      instance.SetDestructor(&destruct_AtlasHitsVectorlETGCSimHitgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AtlasHitsVector<TGCSimHit>*)
   {
      return GenerateInitInstanceLocal((::AtlasHitsVector<TGCSimHit>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::AtlasHitsVector<TGCSimHit>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *AtlasHitsVectorlETGCSimHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::AtlasHitsVector<TGCSimHit>*)0x0)->GetClass();
      AtlasHitsVectorlETGCSimHitgR_TClassManip(theClass);
   return theClass;
   }

   static void AtlasHitsVectorlETGCSimHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *AtlasHitsVectorlEGenericMuonSimHitgR_Dictionary();
   static void AtlasHitsVectorlEGenericMuonSimHitgR_TClassManip(TClass*);
   static void *new_AtlasHitsVectorlEGenericMuonSimHitgR(void *p = 0);
   static void *newArray_AtlasHitsVectorlEGenericMuonSimHitgR(Long_t size, void *p);
   static void delete_AtlasHitsVectorlEGenericMuonSimHitgR(void *p);
   static void deleteArray_AtlasHitsVectorlEGenericMuonSimHitgR(void *p);
   static void destruct_AtlasHitsVectorlEGenericMuonSimHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AtlasHitsVector<GenericMuonSimHit>*)
   {
      ::AtlasHitsVector<GenericMuonSimHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::AtlasHitsVector<GenericMuonSimHit>));
      static ::ROOT::TGenericClassInfo 
         instance("AtlasHitsVector<GenericMuonSimHit>", "HitManagement/AtlasHitsVector.h", 32,
                  typeid(::AtlasHitsVector<GenericMuonSimHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &AtlasHitsVectorlEGenericMuonSimHitgR_Dictionary, isa_proxy, 4,
                  sizeof(::AtlasHitsVector<GenericMuonSimHit>) );
      instance.SetNew(&new_AtlasHitsVectorlEGenericMuonSimHitgR);
      instance.SetNewArray(&newArray_AtlasHitsVectorlEGenericMuonSimHitgR);
      instance.SetDelete(&delete_AtlasHitsVectorlEGenericMuonSimHitgR);
      instance.SetDeleteArray(&deleteArray_AtlasHitsVectorlEGenericMuonSimHitgR);
      instance.SetDestructor(&destruct_AtlasHitsVectorlEGenericMuonSimHitgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AtlasHitsVector<GenericMuonSimHit>*)
   {
      return GenerateInitInstanceLocal((::AtlasHitsVector<GenericMuonSimHit>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::AtlasHitsVector<GenericMuonSimHit>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *AtlasHitsVectorlEGenericMuonSimHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::AtlasHitsVector<GenericMuonSimHit>*)0x0)->GetClass();
      AtlasHitsVectorlEGenericMuonSimHitgR_TClassManip(theClass);
   return theClass;
   }

   static void AtlasHitsVectorlEGenericMuonSimHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *AtlasHitsVectorlEsTGCSimHitgR_Dictionary();
   static void AtlasHitsVectorlEsTGCSimHitgR_TClassManip(TClass*);
   static void *new_AtlasHitsVectorlEsTGCSimHitgR(void *p = 0);
   static void *newArray_AtlasHitsVectorlEsTGCSimHitgR(Long_t size, void *p);
   static void delete_AtlasHitsVectorlEsTGCSimHitgR(void *p);
   static void deleteArray_AtlasHitsVectorlEsTGCSimHitgR(void *p);
   static void destruct_AtlasHitsVectorlEsTGCSimHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AtlasHitsVector<sTGCSimHit>*)
   {
      ::AtlasHitsVector<sTGCSimHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::AtlasHitsVector<sTGCSimHit>));
      static ::ROOT::TGenericClassInfo 
         instance("AtlasHitsVector<sTGCSimHit>", "HitManagement/AtlasHitsVector.h", 32,
                  typeid(::AtlasHitsVector<sTGCSimHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &AtlasHitsVectorlEsTGCSimHitgR_Dictionary, isa_proxy, 4,
                  sizeof(::AtlasHitsVector<sTGCSimHit>) );
      instance.SetNew(&new_AtlasHitsVectorlEsTGCSimHitgR);
      instance.SetNewArray(&newArray_AtlasHitsVectorlEsTGCSimHitgR);
      instance.SetDelete(&delete_AtlasHitsVectorlEsTGCSimHitgR);
      instance.SetDeleteArray(&deleteArray_AtlasHitsVectorlEsTGCSimHitgR);
      instance.SetDestructor(&destruct_AtlasHitsVectorlEsTGCSimHitgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AtlasHitsVector<sTGCSimHit>*)
   {
      return GenerateInitInstanceLocal((::AtlasHitsVector<sTGCSimHit>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::AtlasHitsVector<sTGCSimHit>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *AtlasHitsVectorlEsTGCSimHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::AtlasHitsVector<sTGCSimHit>*)0x0)->GetClass();
      AtlasHitsVectorlEsTGCSimHitgR_TClassManip(theClass);
   return theClass;
   }

   static void AtlasHitsVectorlEsTGCSimHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MDTSimHit_Dictionary();
   static void MDTSimHit_TClassManip(TClass*);
   static void *new_MDTSimHit(void *p = 0);
   static void *newArray_MDTSimHit(Long_t size, void *p);
   static void delete_MDTSimHit(void *p);
   static void deleteArray_MDTSimHit(void *p);
   static void destruct_MDTSimHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MDTSimHit*)
   {
      ::MDTSimHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MDTSimHit));
      static ::ROOT::TGenericClassInfo 
         instance("MDTSimHit", "MDTSimHit.h", 21,
                  typeid(::MDTSimHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MDTSimHit_Dictionary, isa_proxy, 4,
                  sizeof(::MDTSimHit) );
      instance.SetNew(&new_MDTSimHit);
      instance.SetNewArray(&newArray_MDTSimHit);
      instance.SetDelete(&delete_MDTSimHit);
      instance.SetDeleteArray(&deleteArray_MDTSimHit);
      instance.SetDestructor(&destruct_MDTSimHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MDTSimHit*)
   {
      return GenerateInitInstanceLocal((::MDTSimHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::MDTSimHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MDTSimHit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::MDTSimHit*)0x0)->GetClass();
      MDTSimHit_TClassManip(theClass);
   return theClass;
   }

   static void MDTSimHit_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RPCSimHit_Dictionary();
   static void RPCSimHit_TClassManip(TClass*);
   static void *new_RPCSimHit(void *p = 0);
   static void *newArray_RPCSimHit(Long_t size, void *p);
   static void delete_RPCSimHit(void *p);
   static void deleteArray_RPCSimHit(void *p);
   static void destruct_RPCSimHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RPCSimHit*)
   {
      ::RPCSimHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RPCSimHit));
      static ::ROOT::TGenericClassInfo 
         instance("RPCSimHit", "RPCSimHit.h", 19,
                  typeid(::RPCSimHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RPCSimHit_Dictionary, isa_proxy, 4,
                  sizeof(::RPCSimHit) );
      instance.SetNew(&new_RPCSimHit);
      instance.SetNewArray(&newArray_RPCSimHit);
      instance.SetDelete(&delete_RPCSimHit);
      instance.SetDeleteArray(&deleteArray_RPCSimHit);
      instance.SetDestructor(&destruct_RPCSimHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RPCSimHit*)
   {
      return GenerateInitInstanceLocal((::RPCSimHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::RPCSimHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RPCSimHit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RPCSimHit*)0x0)->GetClass();
      RPCSimHit_TClassManip(theClass);
   return theClass;
   }

   static void RPCSimHit_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TGCSimHit_Dictionary();
   static void TGCSimHit_TClassManip(TClass*);
   static void *new_TGCSimHit(void *p = 0);
   static void *newArray_TGCSimHit(Long_t size, void *p);
   static void delete_TGCSimHit(void *p);
   static void deleteArray_TGCSimHit(void *p);
   static void destruct_TGCSimHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGCSimHit*)
   {
      ::TGCSimHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TGCSimHit));
      static ::ROOT::TGenericClassInfo 
         instance("TGCSimHit", "TGCSimHit.h", 19,
                  typeid(::TGCSimHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TGCSimHit_Dictionary, isa_proxy, 4,
                  sizeof(::TGCSimHit) );
      instance.SetNew(&new_TGCSimHit);
      instance.SetNewArray(&newArray_TGCSimHit);
      instance.SetDelete(&delete_TGCSimHit);
      instance.SetDeleteArray(&deleteArray_TGCSimHit);
      instance.SetDestructor(&destruct_TGCSimHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGCSimHit*)
   {
      return GenerateInitInstanceLocal((::TGCSimHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TGCSimHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TGCSimHit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TGCSimHit*)0x0)->GetClass();
      TGCSimHit_TClassManip(theClass);
   return theClass;
   }

   static void TGCSimHit_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *GenericMuonSimHit_Dictionary();
   static void GenericMuonSimHit_TClassManip(TClass*);
   static void *new_GenericMuonSimHit(void *p = 0);
   static void *newArray_GenericMuonSimHit(Long_t size, void *p);
   static void delete_GenericMuonSimHit(void *p);
   static void deleteArray_GenericMuonSimHit(void *p);
   static void destruct_GenericMuonSimHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GenericMuonSimHit*)
   {
      ::GenericMuonSimHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::GenericMuonSimHit));
      static ::ROOT::TGenericClassInfo 
         instance("GenericMuonSimHit", "GenericMuonSimHit.h", 15,
                  typeid(::GenericMuonSimHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &GenericMuonSimHit_Dictionary, isa_proxy, 4,
                  sizeof(::GenericMuonSimHit) );
      instance.SetNew(&new_GenericMuonSimHit);
      instance.SetNewArray(&newArray_GenericMuonSimHit);
      instance.SetDelete(&delete_GenericMuonSimHit);
      instance.SetDeleteArray(&deleteArray_GenericMuonSimHit);
      instance.SetDestructor(&destruct_GenericMuonSimHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GenericMuonSimHit*)
   {
      return GenerateInitInstanceLocal((::GenericMuonSimHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::GenericMuonSimHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *GenericMuonSimHit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::GenericMuonSimHit*)0x0)->GetClass();
      GenericMuonSimHit_TClassManip(theClass);
   return theClass;
   }

   static void GenericMuonSimHit_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *sTGCSimHit_Dictionary();
   static void sTGCSimHit_TClassManip(TClass*);
   static void *new_sTGCSimHit(void *p = 0);
   static void *newArray_sTGCSimHit(Long_t size, void *p);
   static void delete_sTGCSimHit(void *p);
   static void deleteArray_sTGCSimHit(void *p);
   static void destruct_sTGCSimHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::sTGCSimHit*)
   {
      ::sTGCSimHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::sTGCSimHit));
      static ::ROOT::TGenericClassInfo 
         instance("sTGCSimHit", "sTGCSimHit.h", 15,
                  typeid(::sTGCSimHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &sTGCSimHit_Dictionary, isa_proxy, 4,
                  sizeof(::sTGCSimHit) );
      instance.SetNew(&new_sTGCSimHit);
      instance.SetNewArray(&newArray_sTGCSimHit);
      instance.SetDelete(&delete_sTGCSimHit);
      instance.SetDeleteArray(&deleteArray_sTGCSimHit);
      instance.SetDestructor(&destruct_sTGCSimHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::sTGCSimHit*)
   {
      return GenerateInitInstanceLocal((::sTGCSimHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::sTGCSimHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *sTGCSimHit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::sTGCSimHit*)0x0)->GetClass();
      sTGCSimHit_TClassManip(theClass);
   return theClass;
   }

   static void sTGCSimHit_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_CSCSimHit(void *p) {
      return  p ? new(p) ::CSCSimHit : new ::CSCSimHit;
   }
   static void *newArray_CSCSimHit(Long_t nElements, void *p) {
      return p ? new(p) ::CSCSimHit[nElements] : new ::CSCSimHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_CSCSimHit(void *p) {
      delete ((::CSCSimHit*)p);
   }
   static void deleteArray_CSCSimHit(void *p) {
      delete [] ((::CSCSimHit*)p);
   }
   static void destruct_CSCSimHit(void *p) {
      typedef ::CSCSimHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CSCSimHit

namespace ROOT {
   // Wrappers around operator new
   static void *new_AthenaHitsVectorlECSCSimHitgR(void *p) {
      return  p ? new(p) ::AthenaHitsVector<CSCSimHit> : new ::AthenaHitsVector<CSCSimHit>;
   }
   static void *newArray_AthenaHitsVectorlECSCSimHitgR(Long_t nElements, void *p) {
      return p ? new(p) ::AthenaHitsVector<CSCSimHit>[nElements] : new ::AthenaHitsVector<CSCSimHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_AthenaHitsVectorlECSCSimHitgR(void *p) {
      delete ((::AthenaHitsVector<CSCSimHit>*)p);
   }
   static void deleteArray_AthenaHitsVectorlECSCSimHitgR(void *p) {
      delete [] ((::AthenaHitsVector<CSCSimHit>*)p);
   }
   static void destruct_AthenaHitsVectorlECSCSimHitgR(void *p) {
      typedef ::AthenaHitsVector<CSCSimHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AthenaHitsVector<CSCSimHit>

namespace ROOT {
   // Wrappers around operator new
   static void *new_AthenaHitsVectorlEMDTSimHitgR(void *p) {
      return  p ? new(p) ::AthenaHitsVector<MDTSimHit> : new ::AthenaHitsVector<MDTSimHit>;
   }
   static void *newArray_AthenaHitsVectorlEMDTSimHitgR(Long_t nElements, void *p) {
      return p ? new(p) ::AthenaHitsVector<MDTSimHit>[nElements] : new ::AthenaHitsVector<MDTSimHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_AthenaHitsVectorlEMDTSimHitgR(void *p) {
      delete ((::AthenaHitsVector<MDTSimHit>*)p);
   }
   static void deleteArray_AthenaHitsVectorlEMDTSimHitgR(void *p) {
      delete [] ((::AthenaHitsVector<MDTSimHit>*)p);
   }
   static void destruct_AthenaHitsVectorlEMDTSimHitgR(void *p) {
      typedef ::AthenaHitsVector<MDTSimHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AthenaHitsVector<MDTSimHit>

namespace ROOT {
   // Wrappers around operator new
   static void *new_AthenaHitsVectorlERPCSimHitgR(void *p) {
      return  p ? new(p) ::AthenaHitsVector<RPCSimHit> : new ::AthenaHitsVector<RPCSimHit>;
   }
   static void *newArray_AthenaHitsVectorlERPCSimHitgR(Long_t nElements, void *p) {
      return p ? new(p) ::AthenaHitsVector<RPCSimHit>[nElements] : new ::AthenaHitsVector<RPCSimHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_AthenaHitsVectorlERPCSimHitgR(void *p) {
      delete ((::AthenaHitsVector<RPCSimHit>*)p);
   }
   static void deleteArray_AthenaHitsVectorlERPCSimHitgR(void *p) {
      delete [] ((::AthenaHitsVector<RPCSimHit>*)p);
   }
   static void destruct_AthenaHitsVectorlERPCSimHitgR(void *p) {
      typedef ::AthenaHitsVector<RPCSimHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AthenaHitsVector<RPCSimHit>

namespace ROOT {
   // Wrappers around operator new
   static void *new_AthenaHitsVectorlETGCSimHitgR(void *p) {
      return  p ? new(p) ::AthenaHitsVector<TGCSimHit> : new ::AthenaHitsVector<TGCSimHit>;
   }
   static void *newArray_AthenaHitsVectorlETGCSimHitgR(Long_t nElements, void *p) {
      return p ? new(p) ::AthenaHitsVector<TGCSimHit>[nElements] : new ::AthenaHitsVector<TGCSimHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_AthenaHitsVectorlETGCSimHitgR(void *p) {
      delete ((::AthenaHitsVector<TGCSimHit>*)p);
   }
   static void deleteArray_AthenaHitsVectorlETGCSimHitgR(void *p) {
      delete [] ((::AthenaHitsVector<TGCSimHit>*)p);
   }
   static void destruct_AthenaHitsVectorlETGCSimHitgR(void *p) {
      typedef ::AthenaHitsVector<TGCSimHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AthenaHitsVector<TGCSimHit>

namespace ROOT {
   // Wrappers around operator new
   static void *new_AthenaHitsVectorlEGenericMuonSimHitgR(void *p) {
      return  p ? new(p) ::AthenaHitsVector<GenericMuonSimHit> : new ::AthenaHitsVector<GenericMuonSimHit>;
   }
   static void *newArray_AthenaHitsVectorlEGenericMuonSimHitgR(Long_t nElements, void *p) {
      return p ? new(p) ::AthenaHitsVector<GenericMuonSimHit>[nElements] : new ::AthenaHitsVector<GenericMuonSimHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_AthenaHitsVectorlEGenericMuonSimHitgR(void *p) {
      delete ((::AthenaHitsVector<GenericMuonSimHit>*)p);
   }
   static void deleteArray_AthenaHitsVectorlEGenericMuonSimHitgR(void *p) {
      delete [] ((::AthenaHitsVector<GenericMuonSimHit>*)p);
   }
   static void destruct_AthenaHitsVectorlEGenericMuonSimHitgR(void *p) {
      typedef ::AthenaHitsVector<GenericMuonSimHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AthenaHitsVector<GenericMuonSimHit>

namespace ROOT {
   // Wrappers around operator new
   static void *new_AthenaHitsVectorlEsTGCSimHitgR(void *p) {
      return  p ? new(p) ::AthenaHitsVector<sTGCSimHit> : new ::AthenaHitsVector<sTGCSimHit>;
   }
   static void *newArray_AthenaHitsVectorlEsTGCSimHitgR(Long_t nElements, void *p) {
      return p ? new(p) ::AthenaHitsVector<sTGCSimHit>[nElements] : new ::AthenaHitsVector<sTGCSimHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_AthenaHitsVectorlEsTGCSimHitgR(void *p) {
      delete ((::AthenaHitsVector<sTGCSimHit>*)p);
   }
   static void deleteArray_AthenaHitsVectorlEsTGCSimHitgR(void *p) {
      delete [] ((::AthenaHitsVector<sTGCSimHit>*)p);
   }
   static void destruct_AthenaHitsVectorlEsTGCSimHitgR(void *p) {
      typedef ::AthenaHitsVector<sTGCSimHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AthenaHitsVector<sTGCSimHit>

namespace ROOT {
   // Wrappers around operator new
   static void *new_AtlasHitsVectorlECSCSimHitgR(void *p) {
      return  p ? new(p) ::AtlasHitsVector<CSCSimHit> : new ::AtlasHitsVector<CSCSimHit>;
   }
   static void *newArray_AtlasHitsVectorlECSCSimHitgR(Long_t nElements, void *p) {
      return p ? new(p) ::AtlasHitsVector<CSCSimHit>[nElements] : new ::AtlasHitsVector<CSCSimHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_AtlasHitsVectorlECSCSimHitgR(void *p) {
      delete ((::AtlasHitsVector<CSCSimHit>*)p);
   }
   static void deleteArray_AtlasHitsVectorlECSCSimHitgR(void *p) {
      delete [] ((::AtlasHitsVector<CSCSimHit>*)p);
   }
   static void destruct_AtlasHitsVectorlECSCSimHitgR(void *p) {
      typedef ::AtlasHitsVector<CSCSimHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AtlasHitsVector<CSCSimHit>

namespace ROOT {
   // Wrappers around operator new
   static void *new_AtlasHitsVectorlEMDTSimHitgR(void *p) {
      return  p ? new(p) ::AtlasHitsVector<MDTSimHit> : new ::AtlasHitsVector<MDTSimHit>;
   }
   static void *newArray_AtlasHitsVectorlEMDTSimHitgR(Long_t nElements, void *p) {
      return p ? new(p) ::AtlasHitsVector<MDTSimHit>[nElements] : new ::AtlasHitsVector<MDTSimHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_AtlasHitsVectorlEMDTSimHitgR(void *p) {
      delete ((::AtlasHitsVector<MDTSimHit>*)p);
   }
   static void deleteArray_AtlasHitsVectorlEMDTSimHitgR(void *p) {
      delete [] ((::AtlasHitsVector<MDTSimHit>*)p);
   }
   static void destruct_AtlasHitsVectorlEMDTSimHitgR(void *p) {
      typedef ::AtlasHitsVector<MDTSimHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AtlasHitsVector<MDTSimHit>

namespace ROOT {
   // Wrappers around operator new
   static void *new_AtlasHitsVectorlERPCSimHitgR(void *p) {
      return  p ? new(p) ::AtlasHitsVector<RPCSimHit> : new ::AtlasHitsVector<RPCSimHit>;
   }
   static void *newArray_AtlasHitsVectorlERPCSimHitgR(Long_t nElements, void *p) {
      return p ? new(p) ::AtlasHitsVector<RPCSimHit>[nElements] : new ::AtlasHitsVector<RPCSimHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_AtlasHitsVectorlERPCSimHitgR(void *p) {
      delete ((::AtlasHitsVector<RPCSimHit>*)p);
   }
   static void deleteArray_AtlasHitsVectorlERPCSimHitgR(void *p) {
      delete [] ((::AtlasHitsVector<RPCSimHit>*)p);
   }
   static void destruct_AtlasHitsVectorlERPCSimHitgR(void *p) {
      typedef ::AtlasHitsVector<RPCSimHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AtlasHitsVector<RPCSimHit>

namespace ROOT {
   // Wrappers around operator new
   static void *new_AtlasHitsVectorlETGCSimHitgR(void *p) {
      return  p ? new(p) ::AtlasHitsVector<TGCSimHit> : new ::AtlasHitsVector<TGCSimHit>;
   }
   static void *newArray_AtlasHitsVectorlETGCSimHitgR(Long_t nElements, void *p) {
      return p ? new(p) ::AtlasHitsVector<TGCSimHit>[nElements] : new ::AtlasHitsVector<TGCSimHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_AtlasHitsVectorlETGCSimHitgR(void *p) {
      delete ((::AtlasHitsVector<TGCSimHit>*)p);
   }
   static void deleteArray_AtlasHitsVectorlETGCSimHitgR(void *p) {
      delete [] ((::AtlasHitsVector<TGCSimHit>*)p);
   }
   static void destruct_AtlasHitsVectorlETGCSimHitgR(void *p) {
      typedef ::AtlasHitsVector<TGCSimHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AtlasHitsVector<TGCSimHit>

namespace ROOT {
   // Wrappers around operator new
   static void *new_AtlasHitsVectorlEGenericMuonSimHitgR(void *p) {
      return  p ? new(p) ::AtlasHitsVector<GenericMuonSimHit> : new ::AtlasHitsVector<GenericMuonSimHit>;
   }
   static void *newArray_AtlasHitsVectorlEGenericMuonSimHitgR(Long_t nElements, void *p) {
      return p ? new(p) ::AtlasHitsVector<GenericMuonSimHit>[nElements] : new ::AtlasHitsVector<GenericMuonSimHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_AtlasHitsVectorlEGenericMuonSimHitgR(void *p) {
      delete ((::AtlasHitsVector<GenericMuonSimHit>*)p);
   }
   static void deleteArray_AtlasHitsVectorlEGenericMuonSimHitgR(void *p) {
      delete [] ((::AtlasHitsVector<GenericMuonSimHit>*)p);
   }
   static void destruct_AtlasHitsVectorlEGenericMuonSimHitgR(void *p) {
      typedef ::AtlasHitsVector<GenericMuonSimHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AtlasHitsVector<GenericMuonSimHit>

namespace ROOT {
   // Wrappers around operator new
   static void *new_AtlasHitsVectorlEsTGCSimHitgR(void *p) {
      return  p ? new(p) ::AtlasHitsVector<sTGCSimHit> : new ::AtlasHitsVector<sTGCSimHit>;
   }
   static void *newArray_AtlasHitsVectorlEsTGCSimHitgR(Long_t nElements, void *p) {
      return p ? new(p) ::AtlasHitsVector<sTGCSimHit>[nElements] : new ::AtlasHitsVector<sTGCSimHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_AtlasHitsVectorlEsTGCSimHitgR(void *p) {
      delete ((::AtlasHitsVector<sTGCSimHit>*)p);
   }
   static void deleteArray_AtlasHitsVectorlEsTGCSimHitgR(void *p) {
      delete [] ((::AtlasHitsVector<sTGCSimHit>*)p);
   }
   static void destruct_AtlasHitsVectorlEsTGCSimHitgR(void *p) {
      typedef ::AtlasHitsVector<sTGCSimHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AtlasHitsVector<sTGCSimHit>

namespace ROOT {
   // Wrappers around operator new
   static void *new_MDTSimHit(void *p) {
      return  p ? new(p) ::MDTSimHit : new ::MDTSimHit;
   }
   static void *newArray_MDTSimHit(Long_t nElements, void *p) {
      return p ? new(p) ::MDTSimHit[nElements] : new ::MDTSimHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_MDTSimHit(void *p) {
      delete ((::MDTSimHit*)p);
   }
   static void deleteArray_MDTSimHit(void *p) {
      delete [] ((::MDTSimHit*)p);
   }
   static void destruct_MDTSimHit(void *p) {
      typedef ::MDTSimHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MDTSimHit

namespace ROOT {
   // Wrappers around operator new
   static void *new_RPCSimHit(void *p) {
      return  p ? new(p) ::RPCSimHit : new ::RPCSimHit;
   }
   static void *newArray_RPCSimHit(Long_t nElements, void *p) {
      return p ? new(p) ::RPCSimHit[nElements] : new ::RPCSimHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_RPCSimHit(void *p) {
      delete ((::RPCSimHit*)p);
   }
   static void deleteArray_RPCSimHit(void *p) {
      delete [] ((::RPCSimHit*)p);
   }
   static void destruct_RPCSimHit(void *p) {
      typedef ::RPCSimHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RPCSimHit

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGCSimHit(void *p) {
      return  p ? new(p) ::TGCSimHit : new ::TGCSimHit;
   }
   static void *newArray_TGCSimHit(Long_t nElements, void *p) {
      return p ? new(p) ::TGCSimHit[nElements] : new ::TGCSimHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGCSimHit(void *p) {
      delete ((::TGCSimHit*)p);
   }
   static void deleteArray_TGCSimHit(void *p) {
      delete [] ((::TGCSimHit*)p);
   }
   static void destruct_TGCSimHit(void *p) {
      typedef ::TGCSimHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGCSimHit

namespace ROOT {
   // Wrappers around operator new
   static void *new_GenericMuonSimHit(void *p) {
      return  p ? new(p) ::GenericMuonSimHit : new ::GenericMuonSimHit;
   }
   static void *newArray_GenericMuonSimHit(Long_t nElements, void *p) {
      return p ? new(p) ::GenericMuonSimHit[nElements] : new ::GenericMuonSimHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_GenericMuonSimHit(void *p) {
      delete ((::GenericMuonSimHit*)p);
   }
   static void deleteArray_GenericMuonSimHit(void *p) {
      delete [] ((::GenericMuonSimHit*)p);
   }
   static void destruct_GenericMuonSimHit(void *p) {
      typedef ::GenericMuonSimHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GenericMuonSimHit

namespace ROOT {
   // Wrappers around operator new
   static void *new_sTGCSimHit(void *p) {
      return  p ? new(p) ::sTGCSimHit : new ::sTGCSimHit;
   }
   static void *newArray_sTGCSimHit(Long_t nElements, void *p) {
      return p ? new(p) ::sTGCSimHit[nElements] : new ::sTGCSimHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_sTGCSimHit(void *p) {
      delete ((::sTGCSimHit*)p);
   }
   static void deleteArray_sTGCSimHit(void *p) {
      delete [] ((::sTGCSimHit*)p);
   }
   static void destruct_sTGCSimHit(void *p) {
      typedef ::sTGCSimHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::sTGCSimHit

namespace ROOT {
   static TClass *vectorlEsTGCSimHitgR_Dictionary();
   static void vectorlEsTGCSimHitgR_TClassManip(TClass*);
   static void *new_vectorlEsTGCSimHitgR(void *p = 0);
   static void *newArray_vectorlEsTGCSimHitgR(Long_t size, void *p);
   static void delete_vectorlEsTGCSimHitgR(void *p);
   static void deleteArray_vectorlEsTGCSimHitgR(void *p);
   static void destruct_vectorlEsTGCSimHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<sTGCSimHit>*)
   {
      vector<sTGCSimHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<sTGCSimHit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<sTGCSimHit>", -2, "vector", 214,
                  typeid(vector<sTGCSimHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEsTGCSimHitgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<sTGCSimHit>) );
      instance.SetNew(&new_vectorlEsTGCSimHitgR);
      instance.SetNewArray(&newArray_vectorlEsTGCSimHitgR);
      instance.SetDelete(&delete_vectorlEsTGCSimHitgR);
      instance.SetDeleteArray(&deleteArray_vectorlEsTGCSimHitgR);
      instance.SetDestructor(&destruct_vectorlEsTGCSimHitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<sTGCSimHit> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<sTGCSimHit>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEsTGCSimHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<sTGCSimHit>*)0x0)->GetClass();
      vectorlEsTGCSimHitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEsTGCSimHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEsTGCSimHitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<sTGCSimHit> : new vector<sTGCSimHit>;
   }
   static void *newArray_vectorlEsTGCSimHitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<sTGCSimHit>[nElements] : new vector<sTGCSimHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEsTGCSimHitgR(void *p) {
      delete ((vector<sTGCSimHit>*)p);
   }
   static void deleteArray_vectorlEsTGCSimHitgR(void *p) {
      delete [] ((vector<sTGCSimHit>*)p);
   }
   static void destruct_vectorlEsTGCSimHitgR(void *p) {
      typedef vector<sTGCSimHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<sTGCSimHit>

namespace ROOT {
   static TClass *vectorlEsTGCSimHitmUgR_Dictionary();
   static void vectorlEsTGCSimHitmUgR_TClassManip(TClass*);
   static void *new_vectorlEsTGCSimHitmUgR(void *p = 0);
   static void *newArray_vectorlEsTGCSimHitmUgR(Long_t size, void *p);
   static void delete_vectorlEsTGCSimHitmUgR(void *p);
   static void deleteArray_vectorlEsTGCSimHitmUgR(void *p);
   static void destruct_vectorlEsTGCSimHitmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<sTGCSimHit*>*)
   {
      vector<sTGCSimHit*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<sTGCSimHit*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<sTGCSimHit*>", -2, "vector", 214,
                  typeid(vector<sTGCSimHit*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEsTGCSimHitmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<sTGCSimHit*>) );
      instance.SetNew(&new_vectorlEsTGCSimHitmUgR);
      instance.SetNewArray(&newArray_vectorlEsTGCSimHitmUgR);
      instance.SetDelete(&delete_vectorlEsTGCSimHitmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEsTGCSimHitmUgR);
      instance.SetDestructor(&destruct_vectorlEsTGCSimHitmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<sTGCSimHit*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<sTGCSimHit*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEsTGCSimHitmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<sTGCSimHit*>*)0x0)->GetClass();
      vectorlEsTGCSimHitmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEsTGCSimHitmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEsTGCSimHitmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<sTGCSimHit*> : new vector<sTGCSimHit*>;
   }
   static void *newArray_vectorlEsTGCSimHitmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<sTGCSimHit*>[nElements] : new vector<sTGCSimHit*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEsTGCSimHitmUgR(void *p) {
      delete ((vector<sTGCSimHit*>*)p);
   }
   static void deleteArray_vectorlEsTGCSimHitmUgR(void *p) {
      delete [] ((vector<sTGCSimHit*>*)p);
   }
   static void destruct_vectorlEsTGCSimHitmUgR(void *p) {
      typedef vector<sTGCSimHit*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<sTGCSimHit*>

namespace ROOT {
   static TClass *vectorlETGCSimHitgR_Dictionary();
   static void vectorlETGCSimHitgR_TClassManip(TClass*);
   static void *new_vectorlETGCSimHitgR(void *p = 0);
   static void *newArray_vectorlETGCSimHitgR(Long_t size, void *p);
   static void delete_vectorlETGCSimHitgR(void *p);
   static void deleteArray_vectorlETGCSimHitgR(void *p);
   static void destruct_vectorlETGCSimHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TGCSimHit>*)
   {
      vector<TGCSimHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TGCSimHit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TGCSimHit>", -2, "vector", 214,
                  typeid(vector<TGCSimHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETGCSimHitgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<TGCSimHit>) );
      instance.SetNew(&new_vectorlETGCSimHitgR);
      instance.SetNewArray(&newArray_vectorlETGCSimHitgR);
      instance.SetDelete(&delete_vectorlETGCSimHitgR);
      instance.SetDeleteArray(&deleteArray_vectorlETGCSimHitgR);
      instance.SetDestructor(&destruct_vectorlETGCSimHitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TGCSimHit> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<TGCSimHit>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETGCSimHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TGCSimHit>*)0x0)->GetClass();
      vectorlETGCSimHitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETGCSimHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETGCSimHitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TGCSimHit> : new vector<TGCSimHit>;
   }
   static void *newArray_vectorlETGCSimHitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TGCSimHit>[nElements] : new vector<TGCSimHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETGCSimHitgR(void *p) {
      delete ((vector<TGCSimHit>*)p);
   }
   static void deleteArray_vectorlETGCSimHitgR(void *p) {
      delete [] ((vector<TGCSimHit>*)p);
   }
   static void destruct_vectorlETGCSimHitgR(void *p) {
      typedef vector<TGCSimHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TGCSimHit>

namespace ROOT {
   static TClass *vectorlETGCSimHitmUgR_Dictionary();
   static void vectorlETGCSimHitmUgR_TClassManip(TClass*);
   static void *new_vectorlETGCSimHitmUgR(void *p = 0);
   static void *newArray_vectorlETGCSimHitmUgR(Long_t size, void *p);
   static void delete_vectorlETGCSimHitmUgR(void *p);
   static void deleteArray_vectorlETGCSimHitmUgR(void *p);
   static void destruct_vectorlETGCSimHitmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TGCSimHit*>*)
   {
      vector<TGCSimHit*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TGCSimHit*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TGCSimHit*>", -2, "vector", 214,
                  typeid(vector<TGCSimHit*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETGCSimHitmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<TGCSimHit*>) );
      instance.SetNew(&new_vectorlETGCSimHitmUgR);
      instance.SetNewArray(&newArray_vectorlETGCSimHitmUgR);
      instance.SetDelete(&delete_vectorlETGCSimHitmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETGCSimHitmUgR);
      instance.SetDestructor(&destruct_vectorlETGCSimHitmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TGCSimHit*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<TGCSimHit*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETGCSimHitmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TGCSimHit*>*)0x0)->GetClass();
      vectorlETGCSimHitmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETGCSimHitmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETGCSimHitmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TGCSimHit*> : new vector<TGCSimHit*>;
   }
   static void *newArray_vectorlETGCSimHitmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TGCSimHit*>[nElements] : new vector<TGCSimHit*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETGCSimHitmUgR(void *p) {
      delete ((vector<TGCSimHit*>*)p);
   }
   static void deleteArray_vectorlETGCSimHitmUgR(void *p) {
      delete [] ((vector<TGCSimHit*>*)p);
   }
   static void destruct_vectorlETGCSimHitmUgR(void *p) {
      typedef vector<TGCSimHit*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TGCSimHit*>

namespace ROOT {
   static TClass *vectorlERPCSimHitgR_Dictionary();
   static void vectorlERPCSimHitgR_TClassManip(TClass*);
   static void *new_vectorlERPCSimHitgR(void *p = 0);
   static void *newArray_vectorlERPCSimHitgR(Long_t size, void *p);
   static void delete_vectorlERPCSimHitgR(void *p);
   static void deleteArray_vectorlERPCSimHitgR(void *p);
   static void destruct_vectorlERPCSimHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RPCSimHit>*)
   {
      vector<RPCSimHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RPCSimHit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RPCSimHit>", -2, "vector", 214,
                  typeid(vector<RPCSimHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERPCSimHitgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<RPCSimHit>) );
      instance.SetNew(&new_vectorlERPCSimHitgR);
      instance.SetNewArray(&newArray_vectorlERPCSimHitgR);
      instance.SetDelete(&delete_vectorlERPCSimHitgR);
      instance.SetDeleteArray(&deleteArray_vectorlERPCSimHitgR);
      instance.SetDestructor(&destruct_vectorlERPCSimHitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RPCSimHit> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<RPCSimHit>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERPCSimHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<RPCSimHit>*)0x0)->GetClass();
      vectorlERPCSimHitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERPCSimHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERPCSimHitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RPCSimHit> : new vector<RPCSimHit>;
   }
   static void *newArray_vectorlERPCSimHitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RPCSimHit>[nElements] : new vector<RPCSimHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERPCSimHitgR(void *p) {
      delete ((vector<RPCSimHit>*)p);
   }
   static void deleteArray_vectorlERPCSimHitgR(void *p) {
      delete [] ((vector<RPCSimHit>*)p);
   }
   static void destruct_vectorlERPCSimHitgR(void *p) {
      typedef vector<RPCSimHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<RPCSimHit>

namespace ROOT {
   static TClass *vectorlERPCSimHitmUgR_Dictionary();
   static void vectorlERPCSimHitmUgR_TClassManip(TClass*);
   static void *new_vectorlERPCSimHitmUgR(void *p = 0);
   static void *newArray_vectorlERPCSimHitmUgR(Long_t size, void *p);
   static void delete_vectorlERPCSimHitmUgR(void *p);
   static void deleteArray_vectorlERPCSimHitmUgR(void *p);
   static void destruct_vectorlERPCSimHitmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RPCSimHit*>*)
   {
      vector<RPCSimHit*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RPCSimHit*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RPCSimHit*>", -2, "vector", 214,
                  typeid(vector<RPCSimHit*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERPCSimHitmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<RPCSimHit*>) );
      instance.SetNew(&new_vectorlERPCSimHitmUgR);
      instance.SetNewArray(&newArray_vectorlERPCSimHitmUgR);
      instance.SetDelete(&delete_vectorlERPCSimHitmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlERPCSimHitmUgR);
      instance.SetDestructor(&destruct_vectorlERPCSimHitmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RPCSimHit*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<RPCSimHit*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERPCSimHitmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<RPCSimHit*>*)0x0)->GetClass();
      vectorlERPCSimHitmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERPCSimHitmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERPCSimHitmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RPCSimHit*> : new vector<RPCSimHit*>;
   }
   static void *newArray_vectorlERPCSimHitmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RPCSimHit*>[nElements] : new vector<RPCSimHit*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERPCSimHitmUgR(void *p) {
      delete ((vector<RPCSimHit*>*)p);
   }
   static void deleteArray_vectorlERPCSimHitmUgR(void *p) {
      delete [] ((vector<RPCSimHit*>*)p);
   }
   static void destruct_vectorlERPCSimHitmUgR(void *p) {
      typedef vector<RPCSimHit*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<RPCSimHit*>

namespace ROOT {
   static TClass *vectorlEMDTSimHitgR_Dictionary();
   static void vectorlEMDTSimHitgR_TClassManip(TClass*);
   static void *new_vectorlEMDTSimHitgR(void *p = 0);
   static void *newArray_vectorlEMDTSimHitgR(Long_t size, void *p);
   static void delete_vectorlEMDTSimHitgR(void *p);
   static void deleteArray_vectorlEMDTSimHitgR(void *p);
   static void destruct_vectorlEMDTSimHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<MDTSimHit>*)
   {
      vector<MDTSimHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<MDTSimHit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<MDTSimHit>", -2, "vector", 214,
                  typeid(vector<MDTSimHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEMDTSimHitgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<MDTSimHit>) );
      instance.SetNew(&new_vectorlEMDTSimHitgR);
      instance.SetNewArray(&newArray_vectorlEMDTSimHitgR);
      instance.SetDelete(&delete_vectorlEMDTSimHitgR);
      instance.SetDeleteArray(&deleteArray_vectorlEMDTSimHitgR);
      instance.SetDestructor(&destruct_vectorlEMDTSimHitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<MDTSimHit> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<MDTSimHit>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEMDTSimHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<MDTSimHit>*)0x0)->GetClass();
      vectorlEMDTSimHitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEMDTSimHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEMDTSimHitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MDTSimHit> : new vector<MDTSimHit>;
   }
   static void *newArray_vectorlEMDTSimHitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MDTSimHit>[nElements] : new vector<MDTSimHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEMDTSimHitgR(void *p) {
      delete ((vector<MDTSimHit>*)p);
   }
   static void deleteArray_vectorlEMDTSimHitgR(void *p) {
      delete [] ((vector<MDTSimHit>*)p);
   }
   static void destruct_vectorlEMDTSimHitgR(void *p) {
      typedef vector<MDTSimHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<MDTSimHit>

namespace ROOT {
   static TClass *vectorlEMDTSimHitmUgR_Dictionary();
   static void vectorlEMDTSimHitmUgR_TClassManip(TClass*);
   static void *new_vectorlEMDTSimHitmUgR(void *p = 0);
   static void *newArray_vectorlEMDTSimHitmUgR(Long_t size, void *p);
   static void delete_vectorlEMDTSimHitmUgR(void *p);
   static void deleteArray_vectorlEMDTSimHitmUgR(void *p);
   static void destruct_vectorlEMDTSimHitmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<MDTSimHit*>*)
   {
      vector<MDTSimHit*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<MDTSimHit*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<MDTSimHit*>", -2, "vector", 214,
                  typeid(vector<MDTSimHit*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEMDTSimHitmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<MDTSimHit*>) );
      instance.SetNew(&new_vectorlEMDTSimHitmUgR);
      instance.SetNewArray(&newArray_vectorlEMDTSimHitmUgR);
      instance.SetDelete(&delete_vectorlEMDTSimHitmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEMDTSimHitmUgR);
      instance.SetDestructor(&destruct_vectorlEMDTSimHitmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<MDTSimHit*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<MDTSimHit*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEMDTSimHitmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<MDTSimHit*>*)0x0)->GetClass();
      vectorlEMDTSimHitmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEMDTSimHitmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEMDTSimHitmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MDTSimHit*> : new vector<MDTSimHit*>;
   }
   static void *newArray_vectorlEMDTSimHitmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MDTSimHit*>[nElements] : new vector<MDTSimHit*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEMDTSimHitmUgR(void *p) {
      delete ((vector<MDTSimHit*>*)p);
   }
   static void deleteArray_vectorlEMDTSimHitmUgR(void *p) {
      delete [] ((vector<MDTSimHit*>*)p);
   }
   static void destruct_vectorlEMDTSimHitmUgR(void *p) {
      typedef vector<MDTSimHit*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<MDTSimHit*>

namespace ROOT {
   static TClass *vectorlEGenericMuonSimHitgR_Dictionary();
   static void vectorlEGenericMuonSimHitgR_TClassManip(TClass*);
   static void *new_vectorlEGenericMuonSimHitgR(void *p = 0);
   static void *newArray_vectorlEGenericMuonSimHitgR(Long_t size, void *p);
   static void delete_vectorlEGenericMuonSimHitgR(void *p);
   static void deleteArray_vectorlEGenericMuonSimHitgR(void *p);
   static void destruct_vectorlEGenericMuonSimHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<GenericMuonSimHit>*)
   {
      vector<GenericMuonSimHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<GenericMuonSimHit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<GenericMuonSimHit>", -2, "vector", 214,
                  typeid(vector<GenericMuonSimHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEGenericMuonSimHitgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<GenericMuonSimHit>) );
      instance.SetNew(&new_vectorlEGenericMuonSimHitgR);
      instance.SetNewArray(&newArray_vectorlEGenericMuonSimHitgR);
      instance.SetDelete(&delete_vectorlEGenericMuonSimHitgR);
      instance.SetDeleteArray(&deleteArray_vectorlEGenericMuonSimHitgR);
      instance.SetDestructor(&destruct_vectorlEGenericMuonSimHitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<GenericMuonSimHit> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<GenericMuonSimHit>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEGenericMuonSimHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<GenericMuonSimHit>*)0x0)->GetClass();
      vectorlEGenericMuonSimHitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEGenericMuonSimHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEGenericMuonSimHitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<GenericMuonSimHit> : new vector<GenericMuonSimHit>;
   }
   static void *newArray_vectorlEGenericMuonSimHitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<GenericMuonSimHit>[nElements] : new vector<GenericMuonSimHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEGenericMuonSimHitgR(void *p) {
      delete ((vector<GenericMuonSimHit>*)p);
   }
   static void deleteArray_vectorlEGenericMuonSimHitgR(void *p) {
      delete [] ((vector<GenericMuonSimHit>*)p);
   }
   static void destruct_vectorlEGenericMuonSimHitgR(void *p) {
      typedef vector<GenericMuonSimHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<GenericMuonSimHit>

namespace ROOT {
   static TClass *vectorlEGenericMuonSimHitmUgR_Dictionary();
   static void vectorlEGenericMuonSimHitmUgR_TClassManip(TClass*);
   static void *new_vectorlEGenericMuonSimHitmUgR(void *p = 0);
   static void *newArray_vectorlEGenericMuonSimHitmUgR(Long_t size, void *p);
   static void delete_vectorlEGenericMuonSimHitmUgR(void *p);
   static void deleteArray_vectorlEGenericMuonSimHitmUgR(void *p);
   static void destruct_vectorlEGenericMuonSimHitmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<GenericMuonSimHit*>*)
   {
      vector<GenericMuonSimHit*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<GenericMuonSimHit*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<GenericMuonSimHit*>", -2, "vector", 214,
                  typeid(vector<GenericMuonSimHit*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEGenericMuonSimHitmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<GenericMuonSimHit*>) );
      instance.SetNew(&new_vectorlEGenericMuonSimHitmUgR);
      instance.SetNewArray(&newArray_vectorlEGenericMuonSimHitmUgR);
      instance.SetDelete(&delete_vectorlEGenericMuonSimHitmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEGenericMuonSimHitmUgR);
      instance.SetDestructor(&destruct_vectorlEGenericMuonSimHitmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<GenericMuonSimHit*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<GenericMuonSimHit*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEGenericMuonSimHitmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<GenericMuonSimHit*>*)0x0)->GetClass();
      vectorlEGenericMuonSimHitmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEGenericMuonSimHitmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEGenericMuonSimHitmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<GenericMuonSimHit*> : new vector<GenericMuonSimHit*>;
   }
   static void *newArray_vectorlEGenericMuonSimHitmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<GenericMuonSimHit*>[nElements] : new vector<GenericMuonSimHit*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEGenericMuonSimHitmUgR(void *p) {
      delete ((vector<GenericMuonSimHit*>*)p);
   }
   static void deleteArray_vectorlEGenericMuonSimHitmUgR(void *p) {
      delete [] ((vector<GenericMuonSimHit*>*)p);
   }
   static void destruct_vectorlEGenericMuonSimHitmUgR(void *p) {
      typedef vector<GenericMuonSimHit*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<GenericMuonSimHit*>

namespace ROOT {
   static TClass *vectorlECSCSimHitgR_Dictionary();
   static void vectorlECSCSimHitgR_TClassManip(TClass*);
   static void *new_vectorlECSCSimHitgR(void *p = 0);
   static void *newArray_vectorlECSCSimHitgR(Long_t size, void *p);
   static void delete_vectorlECSCSimHitgR(void *p);
   static void deleteArray_vectorlECSCSimHitgR(void *p);
   static void destruct_vectorlECSCSimHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<CSCSimHit>*)
   {
      vector<CSCSimHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<CSCSimHit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<CSCSimHit>", -2, "vector", 214,
                  typeid(vector<CSCSimHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlECSCSimHitgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<CSCSimHit>) );
      instance.SetNew(&new_vectorlECSCSimHitgR);
      instance.SetNewArray(&newArray_vectorlECSCSimHitgR);
      instance.SetDelete(&delete_vectorlECSCSimHitgR);
      instance.SetDeleteArray(&deleteArray_vectorlECSCSimHitgR);
      instance.SetDestructor(&destruct_vectorlECSCSimHitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<CSCSimHit> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<CSCSimHit>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlECSCSimHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<CSCSimHit>*)0x0)->GetClass();
      vectorlECSCSimHitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlECSCSimHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlECSCSimHitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CSCSimHit> : new vector<CSCSimHit>;
   }
   static void *newArray_vectorlECSCSimHitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CSCSimHit>[nElements] : new vector<CSCSimHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlECSCSimHitgR(void *p) {
      delete ((vector<CSCSimHit>*)p);
   }
   static void deleteArray_vectorlECSCSimHitgR(void *p) {
      delete [] ((vector<CSCSimHit>*)p);
   }
   static void destruct_vectorlECSCSimHitgR(void *p) {
      typedef vector<CSCSimHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<CSCSimHit>

namespace ROOT {
   static TClass *vectorlECSCSimHitmUgR_Dictionary();
   static void vectorlECSCSimHitmUgR_TClassManip(TClass*);
   static void *new_vectorlECSCSimHitmUgR(void *p = 0);
   static void *newArray_vectorlECSCSimHitmUgR(Long_t size, void *p);
   static void delete_vectorlECSCSimHitmUgR(void *p);
   static void deleteArray_vectorlECSCSimHitmUgR(void *p);
   static void destruct_vectorlECSCSimHitmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<CSCSimHit*>*)
   {
      vector<CSCSimHit*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<CSCSimHit*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<CSCSimHit*>", -2, "vector", 214,
                  typeid(vector<CSCSimHit*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlECSCSimHitmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<CSCSimHit*>) );
      instance.SetNew(&new_vectorlECSCSimHitmUgR);
      instance.SetNewArray(&newArray_vectorlECSCSimHitmUgR);
      instance.SetDelete(&delete_vectorlECSCSimHitmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlECSCSimHitmUgR);
      instance.SetDestructor(&destruct_vectorlECSCSimHitmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<CSCSimHit*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<CSCSimHit*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlECSCSimHitmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<CSCSimHit*>*)0x0)->GetClass();
      vectorlECSCSimHitmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlECSCSimHitmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlECSCSimHitmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CSCSimHit*> : new vector<CSCSimHit*>;
   }
   static void *newArray_vectorlECSCSimHitmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CSCSimHit*>[nElements] : new vector<CSCSimHit*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlECSCSimHitmUgR(void *p) {
      delete ((vector<CSCSimHit*>*)p);
   }
   static void deleteArray_vectorlECSCSimHitmUgR(void *p) {
      delete [] ((vector<CSCSimHit*>*)p);
   }
   static void destruct_vectorlECSCSimHitmUgR(void *p) {
      typedef vector<CSCSimHit*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<CSCSimHit*>

namespace {
  void TriggerDictionaryInitialization_libMuonSimEventDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/afs/cern.ch/work/m/mmittal/private/BIS_monika/build/MuonSpectrometer/MuonSimEvent/CMakeFiles/makeMuonSimEventDictReflexDict.gXTAT4/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libMuonSimEventDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$MuonSimEvent/CSCSimHit.h")))  __attribute__((annotate("$clingAutoload$MuonSimEvent/CSCSimHitCollection.h")))  CSCSimHit;
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
class __attribute__((annotate("$clingAutoload$MuonSimEvent/MDTSimHit.h")))  __attribute__((annotate("$clingAutoload$MuonSimEvent/MDTSimHitCollection.h")))  MDTSimHit;
class __attribute__((annotate("$clingAutoload$MuonSimEvent/RPCSimHit.h")))  __attribute__((annotate("$clingAutoload$MuonSimEvent/RPCSimHitCollection.h")))  RPCSimHit;
class __attribute__((annotate("$clingAutoload$MuonSimEvent/TGCSimHit.h")))  __attribute__((annotate("$clingAutoload$MuonSimEvent/TGCSimHitCollection.h")))  TGCSimHit;
class __attribute__((annotate("$clingAutoload$MuonSimEvent/GenericMuonSimHit.h")))  __attribute__((annotate("$clingAutoload$MuonSimEvent/GenericMuonSimHitCollection.h")))  GenericMuonSimHit;
class __attribute__((annotate("$clingAutoload$MuonSimEvent/sTGCSimHit.h")))  __attribute__((annotate("$clingAutoload$MuonSimEvent/sTGCSimHitCollection.h")))  sTGCSimHit;
template <typename T> class __attribute__((annotate("$clingAutoload$HitManagement/AthenaHitsVector.h")))  __attribute__((annotate("$clingAutoload$MuonSimEvent/CSCSimHitCollection.h")))  AthenaHitsVector;

template <typename T> class __attribute__((annotate("$clingAutoload$HitManagement/AtlasHitsVector.h")))  __attribute__((annotate("$clingAutoload$MuonSimEvent/CSCSimHitCollection.h")))  AtlasHitsVector;

)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libMuonSimEventDict dictionary payload"

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
  #define PACKAGE_VERSION "MuonSimEvent-00-00-00"
#endif
#ifndef PACKAGE_VERSION_UQ
  #define PACKAGE_VERSION_UQ MuonSimEvent-00-00-00
#endif
#ifndef EIGEN_DONT_VECTORIZE
  #define EIGEN_DONT_VECTORIZE 1
#endif
#ifndef CLHEP_MAX_MIN_DEFINED
  #define CLHEP_MAX_MIN_DEFINED 1
#endif
#ifndef CLHEP_ABS_DEFINED
  #define CLHEP_ABS_DEFINED 1
#endif
#ifndef CLHEP_SQR_DEFINED
  #define CLHEP_SQR_DEFINED 1
#endif
#ifndef CLHEP_MAX_MIN_DEFINED
  #define CLHEP_MAX_MIN_DEFINED 1
#endif
#ifndef CLHEP_ABS_DEFINED
  #define CLHEP_ABS_DEFINED 1
#endif
#ifndef CLHEP_SQR_DEFINED
  #define CLHEP_SQR_DEFINED 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
/*
  Copyright (C) 2002-2018 CERN for the benefit of the ATLAS collaboration
*/

#ifndef MUONSIMEVENT_MUONSIMEVENTDICT_H
#define MUONSIMEVENT_MUONSIMEVENTDICT_H

#include "MuonSimEvent/CSCSimHitCollection.h"
#include "MuonSimEvent/MDTSimHitCollection.h"
#include "MuonSimEvent/RPCSimHitCollection.h"
#include "MuonSimEvent/TGCSimHitCollection.h"
#include "MuonSimEvent/GenericMuonSimHitCollection.h"
#include "MuonSimEvent/sTGCSimHitCollection.h"

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"AthenaHitsVector<CSCSimHit>", payloadCode, "@",
"AthenaHitsVector<GenericMuonSimHit>", payloadCode, "@",
"AthenaHitsVector<MDTSimHit>", payloadCode, "@",
"AthenaHitsVector<RPCSimHit>", payloadCode, "@",
"AthenaHitsVector<TGCSimHit>", payloadCode, "@",
"AthenaHitsVector<sTGCSimHit>", payloadCode, "@",
"AtlasHitsVector<CSCSimHit>", payloadCode, "@",
"AtlasHitsVector<GenericMuonSimHit>", payloadCode, "@",
"AtlasHitsVector<MDTSimHit>", payloadCode, "@",
"AtlasHitsVector<RPCSimHit>", payloadCode, "@",
"AtlasHitsVector<TGCSimHit>", payloadCode, "@",
"AtlasHitsVector<sTGCSimHit>", payloadCode, "@",
"CSCSimHit", payloadCode, "@",
"GenericMuonSimHit", payloadCode, "@",
"MDTSimHit", payloadCode, "@",
"RPCSimHit", payloadCode, "@",
"TGCSimHit", payloadCode, "@",
"sTGCSimHit", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libMuonSimEventDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libMuonSimEventDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libMuonSimEventDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libMuonSimEventDict() {
  TriggerDictionaryInitialization_libMuonSimEventDict_Impl();
}
