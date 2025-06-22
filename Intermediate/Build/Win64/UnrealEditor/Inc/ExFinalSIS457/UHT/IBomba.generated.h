// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IBomba.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EXFINALSIS457_IBomba_generated_h
#error "IBomba.generated.h already included, missing '#pragma once' in IBomba.h"
#endif
#define EXFINALSIS457_IBomba_generated_h

#define FID_ExFinalSIS457_Source_ExFinalSIS457_IBomba_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EXFINALSIS457_API UIBomba(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIBomba(UIBomba&&); \
	UIBomba(const UIBomba&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EXFINALSIS457_API, UIBomba); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIBomba); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIBomba) \
	EXFINALSIS457_API virtual ~UIBomba();


#define FID_ExFinalSIS457_Source_ExFinalSIS457_IBomba_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIBomba(); \
	friend struct Z_Construct_UClass_UIBomba_Statics; \
public: \
	DECLARE_CLASS(UIBomba, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ExFinalSIS457"), EXFINALSIS457_API) \
	DECLARE_SERIALIZER(UIBomba)


#define FID_ExFinalSIS457_Source_ExFinalSIS457_IBomba_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ExFinalSIS457_Source_ExFinalSIS457_IBomba_h_13_GENERATED_UINTERFACE_BODY() \
	FID_ExFinalSIS457_Source_ExFinalSIS457_IBomba_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ExFinalSIS457_Source_ExFinalSIS457_IBomba_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIBomba() {} \
public: \
	typedef UIBomba UClassType; \
	typedef IIBomba ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ExFinalSIS457_Source_ExFinalSIS457_IBomba_h_10_PROLOG
#define FID_ExFinalSIS457_Source_ExFinalSIS457_IBomba_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ExFinalSIS457_Source_ExFinalSIS457_IBomba_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXFINALSIS457_API UClass* StaticClass<class UIBomba>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ExFinalSIS457_Source_ExFinalSIS457_IBomba_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
