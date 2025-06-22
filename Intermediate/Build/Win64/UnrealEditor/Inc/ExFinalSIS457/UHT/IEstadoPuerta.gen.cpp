// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExFinalSIS457/IEstadoPuerta.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIEstadoPuerta() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
EXFINALSIS457_API UClass* Z_Construct_UClass_UIEstadoPuerta();
EXFINALSIS457_API UClass* Z_Construct_UClass_UIEstadoPuerta_NoRegister();
UPackage* Z_Construct_UPackage__Script_ExFinalSIS457();
// End Cross Module References

// Begin Interface UIEstadoPuerta
void UIEstadoPuerta::StaticRegisterNativesUIEstadoPuerta()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIEstadoPuerta);
UClass* Z_Construct_UClass_UIEstadoPuerta_NoRegister()
{
	return UIEstadoPuerta::StaticClass();
}
struct Z_Construct_UClass_UIEstadoPuerta_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IEstadoPuerta.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIEstadoPuerta>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIEstadoPuerta_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ExFinalSIS457,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIEstadoPuerta_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIEstadoPuerta_Statics::ClassParams = {
	&UIEstadoPuerta::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIEstadoPuerta_Statics::Class_MetaDataParams), Z_Construct_UClass_UIEstadoPuerta_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIEstadoPuerta()
{
	if (!Z_Registration_Info_UClass_UIEstadoPuerta.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIEstadoPuerta.OuterSingleton, Z_Construct_UClass_UIEstadoPuerta_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIEstadoPuerta.OuterSingleton;
}
template<> EXFINALSIS457_API UClass* StaticClass<UIEstadoPuerta>()
{
	return UIEstadoPuerta::StaticClass();
}
UIEstadoPuerta::UIEstadoPuerta(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIEstadoPuerta);
UIEstadoPuerta::~UIEstadoPuerta() {}
// End Interface UIEstadoPuerta

// Begin Registration
struct Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_IEstadoPuerta_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIEstadoPuerta, UIEstadoPuerta::StaticClass, TEXT("UIEstadoPuerta"), &Z_Registration_Info_UClass_UIEstadoPuerta, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIEstadoPuerta), 3659835430U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_IEstadoPuerta_h_466901647(TEXT("/Script/ExFinalSIS457"),
	Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_IEstadoPuerta_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_IEstadoPuerta_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
