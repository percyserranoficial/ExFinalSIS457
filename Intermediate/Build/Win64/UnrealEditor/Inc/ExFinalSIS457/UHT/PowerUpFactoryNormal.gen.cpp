// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExFinalSIS457/PowerUpFactoryNormal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerUpFactoryNormal() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
EXFINALSIS457_API UClass* Z_Construct_UClass_APowerUpFactoryNormal();
EXFINALSIS457_API UClass* Z_Construct_UClass_APowerUpFactoryNormal_NoRegister();
EXFINALSIS457_API UClass* Z_Construct_UClass_UIPowerUpFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_ExFinalSIS457();
// End Cross Module References

// Begin Class APowerUpFactoryNormal
void APowerUpFactoryNormal::StaticRegisterNativesAPowerUpFactoryNormal()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APowerUpFactoryNormal);
UClass* Z_Construct_UClass_APowerUpFactoryNormal_NoRegister()
{
	return APowerUpFactoryNormal::StaticClass();
}
struct Z_Construct_UClass_APowerUpFactoryNormal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PowerUpFactoryNormal.h" },
		{ "ModuleRelativePath", "PowerUpFactoryNormal.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APowerUpFactoryNormal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APowerUpFactoryNormal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ExFinalSIS457,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APowerUpFactoryNormal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APowerUpFactoryNormal_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIPowerUpFactory_NoRegister, (int32)VTABLE_OFFSET(APowerUpFactoryNormal, IIPowerUpFactory), false },  // 2437209472
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_APowerUpFactoryNormal_Statics::ClassParams = {
	&APowerUpFactoryNormal::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APowerUpFactoryNormal_Statics::Class_MetaDataParams), Z_Construct_UClass_APowerUpFactoryNormal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APowerUpFactoryNormal()
{
	if (!Z_Registration_Info_UClass_APowerUpFactoryNormal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APowerUpFactoryNormal.OuterSingleton, Z_Construct_UClass_APowerUpFactoryNormal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APowerUpFactoryNormal.OuterSingleton;
}
template<> EXFINALSIS457_API UClass* StaticClass<APowerUpFactoryNormal>()
{
	return APowerUpFactoryNormal::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APowerUpFactoryNormal);
APowerUpFactoryNormal::~APowerUpFactoryNormal() {}
// End Class APowerUpFactoryNormal

// Begin Registration
struct Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_PowerUpFactoryNormal_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APowerUpFactoryNormal, APowerUpFactoryNormal::StaticClass, TEXT("APowerUpFactoryNormal"), &Z_Registration_Info_UClass_APowerUpFactoryNormal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APowerUpFactoryNormal), 1358647238U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_PowerUpFactoryNormal_h_2176712368(TEXT("/Script/ExFinalSIS457"),
	Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_PowerUpFactoryNormal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_PowerUpFactoryNormal_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
