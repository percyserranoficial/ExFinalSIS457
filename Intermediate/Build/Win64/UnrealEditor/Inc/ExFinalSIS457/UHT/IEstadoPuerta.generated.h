// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IEstadoPuerta.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EXFINALSIS457_IEstadoPuerta_generated_h
#error "IEstadoPuerta.generated.h already included, missing '#pragma once' in IEstadoPuerta.h"
#endif
#define EXFINALSIS457_IEstadoPuerta_generated_h

#define FID_ExFinalSIS457_Source_ExFinalSIS457_IEstadoPuerta_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EXFINALSIS457_API UIEstadoPuerta(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIEstadoPuerta(UIEstadoPuerta&&); \
	UIEstadoPuerta(const UIEstadoPuerta&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EXFINALSIS457_API, UIEstadoPuerta); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIEstadoPuerta); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIEstadoPuerta) \
	EXFINALSIS457_API virtual ~UIEstadoPuerta();


#define FID_ExFinalSIS457_Source_ExFinalSIS457_IEstadoPuerta_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIEstadoPuerta(); \
	friend struct Z_Construct_UClass_UIEstadoPuerta_Statics; \
public: \
	DECLARE_CLASS(UIEstadoPuerta, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ExFinalSIS457"), EXFINALSIS457_API) \
	DECLARE_SERIALIZER(UIEstadoPuerta)


#define FID_ExFinalSIS457_Source_ExFinalSIS457_IEstadoPuerta_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ExFinalSIS457_Source_ExFinalSIS457_IEstadoPuerta_h_13_GENERATED_UINTERFACE_BODY() \
	FID_ExFinalSIS457_Source_ExFinalSIS457_IEstadoPuerta_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ExFinalSIS457_Source_ExFinalSIS457_IEstadoPuerta_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIEstadoPuerta() {} \
public: \
	typedef UIEstadoPuerta UClassType; \
	typedef IIEstadoPuerta ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ExFinalSIS457_Source_ExFinalSIS457_IEstadoPuerta_h_10_PROLOG
#define FID_ExFinalSIS457_Source_ExFinalSIS457_IEstadoPuerta_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ExFinalSIS457_Source_ExFinalSIS457_IEstadoPuerta_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXFINALSIS457_API UClass* StaticClass<class UIEstadoPuerta>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ExFinalSIS457_Source_ExFinalSIS457_IEstadoPuerta_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
