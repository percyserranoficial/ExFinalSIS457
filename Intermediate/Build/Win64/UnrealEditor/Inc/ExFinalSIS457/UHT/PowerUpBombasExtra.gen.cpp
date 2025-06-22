// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExFinalSIS457/PowerUpBombasExtra.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerUpBombasExtra() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
EXFINALSIS457_API UClass* Z_Construct_UClass_APowerUpBombasExtra();
EXFINALSIS457_API UClass* Z_Construct_UClass_APowerUpBombasExtra_NoRegister();
EXFINALSIS457_API UClass* Z_Construct_UClass_UIPowerUp_NoRegister();
UPackage* Z_Construct_UPackage__Script_ExFinalSIS457();
// End Cross Module References

// Begin Class APowerUpBombasExtra
void APowerUpBombasExtra::StaticRegisterNativesAPowerUpBombasExtra()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APowerUpBombasExtra);
UClass* Z_Construct_UClass_APowerUpBombasExtra_NoRegister()
{
	return APowerUpBombasExtra::StaticClass();
}
struct Z_Construct_UClass_APowerUpBombasExtra_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PowerUpBombasExtra.h" },
		{ "ModuleRelativePath", "PowerUpBombasExtra.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APowerUpBombasExtra>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APowerUpBombasExtra_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ExFinalSIS457,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APowerUpBombasExtra_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APowerUpBombasExtra_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIPowerUp_NoRegister, (int32)VTABLE_OFFSET(APowerUpBombasExtra, IIPowerUp), false },  // 3528050146
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_APowerUpBombasExtra_Statics::ClassParams = {
	&APowerUpBombasExtra::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APowerUpBombasExtra_Statics::Class_MetaDataParams), Z_Construct_UClass_APowerUpBombasExtra_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APowerUpBombasExtra()
{
	if (!Z_Registration_Info_UClass_APowerUpBombasExtra.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APowerUpBombasExtra.OuterSingleton, Z_Construct_UClass_APowerUpBombasExtra_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APowerUpBombasExtra.OuterSingleton;
}
template<> EXFINALSIS457_API UClass* StaticClass<APowerUpBombasExtra>()
{
	return APowerUpBombasExtra::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APowerUpBombasExtra);
APowerUpBombasExtra::~APowerUpBombasExtra() {}
// End Class APowerUpBombasExtra

// Begin Registration
struct Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_PowerUpBombasExtra_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APowerUpBombasExtra, APowerUpBombasExtra::StaticClass, TEXT("APowerUpBombasExtra"), &Z_Registration_Info_UClass_APowerUpBombasExtra, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APowerUpBombasExtra), 3735790675U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_PowerUpBombasExtra_h_3263700270(TEXT("/Script/ExFinalSIS457"),
	Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_PowerUpBombasExtra_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_PowerUpBombasExtra_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
