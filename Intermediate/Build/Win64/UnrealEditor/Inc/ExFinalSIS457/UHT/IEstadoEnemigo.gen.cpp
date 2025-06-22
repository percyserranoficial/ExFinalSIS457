// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExFinalSIS457/IEstadoEnemigo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIEstadoEnemigo() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
EXFINALSIS457_API UClass* Z_Construct_UClass_UIEstadoEnemigo();
EXFINALSIS457_API UClass* Z_Construct_UClass_UIEstadoEnemigo_NoRegister();
UPackage* Z_Construct_UPackage__Script_ExFinalSIS457();
// End Cross Module References

// Begin Interface UIEstadoEnemigo
void UIEstadoEnemigo::StaticRegisterNativesUIEstadoEnemigo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIEstadoEnemigo);
UClass* Z_Construct_UClass_UIEstadoEnemigo_NoRegister()
{
	return UIEstadoEnemigo::StaticClass();
}
struct Z_Construct_UClass_UIEstadoEnemigo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IEstadoEnemigo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIEstadoEnemigo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIEstadoEnemigo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ExFinalSIS457,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIEstadoEnemigo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIEstadoEnemigo_Statics::ClassParams = {
	&UIEstadoEnemigo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIEstadoEnemigo_Statics::Class_MetaDataParams), Z_Construct_UClass_UIEstadoEnemigo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIEstadoEnemigo()
{
	if (!Z_Registration_Info_UClass_UIEstadoEnemigo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIEstadoEnemigo.OuterSingleton, Z_Construct_UClass_UIEstadoEnemigo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIEstadoEnemigo.OuterSingleton;
}
template<> EXFINALSIS457_API UClass* StaticClass<UIEstadoEnemigo>()
{
	return UIEstadoEnemigo::StaticClass();
}
UIEstadoEnemigo::UIEstadoEnemigo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIEstadoEnemigo);
UIEstadoEnemigo::~UIEstadoEnemigo() {}
// End Interface UIEstadoEnemigo

// Begin Registration
struct Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_IEstadoEnemigo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIEstadoEnemigo, UIEstadoEnemigo::StaticClass, TEXT("UIEstadoEnemigo"), &Z_Registration_Info_UClass_UIEstadoEnemigo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIEstadoEnemigo), 748195097U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_IEstadoEnemigo_h_249874933(TEXT("/Script/ExFinalSIS457"),
	Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_IEstadoEnemigo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_IEstadoEnemigo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
