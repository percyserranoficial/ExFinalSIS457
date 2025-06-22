// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExFinalSIS457/IPowerUpFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIPowerUpFactory() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
EXFINALSIS457_API UClass* Z_Construct_UClass_UIPowerUpFactory();
EXFINALSIS457_API UClass* Z_Construct_UClass_UIPowerUpFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_ExFinalSIS457();
// End Cross Module References

// Begin Interface UIPowerUpFactory
void UIPowerUpFactory::StaticRegisterNativesUIPowerUpFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIPowerUpFactory);
UClass* Z_Construct_UClass_UIPowerUpFactory_NoRegister()
{
	return UIPowerUpFactory::StaticClass();
}
struct Z_Construct_UClass_UIPowerUpFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IPowerUpFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIPowerUpFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIPowerUpFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ExFinalSIS457,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIPowerUpFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIPowerUpFactory_Statics::ClassParams = {
	&UIPowerUpFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIPowerUpFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UIPowerUpFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIPowerUpFactory()
{
	if (!Z_Registration_Info_UClass_UIPowerUpFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIPowerUpFactory.OuterSingleton, Z_Construct_UClass_UIPowerUpFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIPowerUpFactory.OuterSingleton;
}
template<> EXFINALSIS457_API UClass* StaticClass<UIPowerUpFactory>()
{
	return UIPowerUpFactory::StaticClass();
}
UIPowerUpFactory::UIPowerUpFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIPowerUpFactory);
UIPowerUpFactory::~UIPowerUpFactory() {}
// End Interface UIPowerUpFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_IPowerUpFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIPowerUpFactory, UIPowerUpFactory::StaticClass, TEXT("UIPowerUpFactory"), &Z_Registration_Info_UClass_UIPowerUpFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIPowerUpFactory), 2437209472U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_IPowerUpFactory_h_508714426(TEXT("/Script/ExFinalSIS457"),
	Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_IPowerUpFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_IPowerUpFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
