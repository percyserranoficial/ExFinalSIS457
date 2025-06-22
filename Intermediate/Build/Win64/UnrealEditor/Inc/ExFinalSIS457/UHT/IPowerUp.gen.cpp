// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExFinalSIS457/IPowerUp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIPowerUp() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
EXFINALSIS457_API UClass* Z_Construct_UClass_UIPowerUp();
EXFINALSIS457_API UClass* Z_Construct_UClass_UIPowerUp_NoRegister();
UPackage* Z_Construct_UPackage__Script_ExFinalSIS457();
// End Cross Module References

// Begin Interface UIPowerUp
void UIPowerUp::StaticRegisterNativesUIPowerUp()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIPowerUp);
UClass* Z_Construct_UClass_UIPowerUp_NoRegister()
{
	return UIPowerUp::StaticClass();
}
struct Z_Construct_UClass_UIPowerUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IPowerUp.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIPowerUp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIPowerUp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ExFinalSIS457,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIPowerUp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIPowerUp_Statics::ClassParams = {
	&UIPowerUp::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIPowerUp_Statics::Class_MetaDataParams), Z_Construct_UClass_UIPowerUp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIPowerUp()
{
	if (!Z_Registration_Info_UClass_UIPowerUp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIPowerUp.OuterSingleton, Z_Construct_UClass_UIPowerUp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIPowerUp.OuterSingleton;
}
template<> EXFINALSIS457_API UClass* StaticClass<UIPowerUp>()
{
	return UIPowerUp::StaticClass();
}
UIPowerUp::UIPowerUp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIPowerUp);
UIPowerUp::~UIPowerUp() {}
// End Interface UIPowerUp

// Begin Registration
struct Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_IPowerUp_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIPowerUp, UIPowerUp::StaticClass, TEXT("UIPowerUp"), &Z_Registration_Info_UClass_UIPowerUp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIPowerUp), 3528050146U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_IPowerUp_h_2352015738(TEXT("/Script/ExFinalSIS457"),
	Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_IPowerUp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_IPowerUp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
