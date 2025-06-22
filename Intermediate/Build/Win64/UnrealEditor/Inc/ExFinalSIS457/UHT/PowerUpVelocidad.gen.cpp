// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExFinalSIS457/PowerUpVelocidad.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerUpVelocidad() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
EXFINALSIS457_API UClass* Z_Construct_UClass_APowerUpVelocidad();
EXFINALSIS457_API UClass* Z_Construct_UClass_APowerUpVelocidad_NoRegister();
EXFINALSIS457_API UClass* Z_Construct_UClass_UIPowerUp_NoRegister();
UPackage* Z_Construct_UPackage__Script_ExFinalSIS457();
// End Cross Module References

// Begin Class APowerUpVelocidad
void APowerUpVelocidad::StaticRegisterNativesAPowerUpVelocidad()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APowerUpVelocidad);
UClass* Z_Construct_UClass_APowerUpVelocidad_NoRegister()
{
	return APowerUpVelocidad::StaticClass();
}
struct Z_Construct_UClass_APowerUpVelocidad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PowerUpVelocidad.h" },
		{ "ModuleRelativePath", "PowerUpVelocidad.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APowerUpVelocidad>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APowerUpVelocidad_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ExFinalSIS457,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APowerUpVelocidad_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APowerUpVelocidad_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIPowerUp_NoRegister, (int32)VTABLE_OFFSET(APowerUpVelocidad, IIPowerUp), false },  // 3528050146
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_APowerUpVelocidad_Statics::ClassParams = {
	&APowerUpVelocidad::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APowerUpVelocidad_Statics::Class_MetaDataParams), Z_Construct_UClass_APowerUpVelocidad_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APowerUpVelocidad()
{
	if (!Z_Registration_Info_UClass_APowerUpVelocidad.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APowerUpVelocidad.OuterSingleton, Z_Construct_UClass_APowerUpVelocidad_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APowerUpVelocidad.OuterSingleton;
}
template<> EXFINALSIS457_API UClass* StaticClass<APowerUpVelocidad>()
{
	return APowerUpVelocidad::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APowerUpVelocidad);
APowerUpVelocidad::~APowerUpVelocidad() {}
// End Class APowerUpVelocidad

// Begin Registration
struct Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_PowerUpVelocidad_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APowerUpVelocidad, APowerUpVelocidad::StaticClass, TEXT("APowerUpVelocidad"), &Z_Registration_Info_UClass_APowerUpVelocidad, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APowerUpVelocidad), 1189519338U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_PowerUpVelocidad_h_2561399980(TEXT("/Script/ExFinalSIS457"),
	Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_PowerUpVelocidad_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_PowerUpVelocidad_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
