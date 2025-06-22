// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExFinalSIS457/EstadoPatrullando.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoPatrullando() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
EXFINALSIS457_API UClass* Z_Construct_UClass_AEstadoPatrullando();
EXFINALSIS457_API UClass* Z_Construct_UClass_AEstadoPatrullando_NoRegister();
EXFINALSIS457_API UClass* Z_Construct_UClass_UIEstadoEnemigo_NoRegister();
UPackage* Z_Construct_UPackage__Script_ExFinalSIS457();
// End Cross Module References

// Begin Class AEstadoPatrullando
void AEstadoPatrullando::StaticRegisterNativesAEstadoPatrullando()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEstadoPatrullando);
UClass* Z_Construct_UClass_AEstadoPatrullando_NoRegister()
{
	return AEstadoPatrullando::StaticClass();
}
struct Z_Construct_UClass_AEstadoPatrullando_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoPatrullando.h" },
		{ "ModuleRelativePath", "EstadoPatrullando.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoPatrullando>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEstadoPatrullando_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ExFinalSIS457,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoPatrullando_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoPatrullando_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIEstadoEnemigo_NoRegister, (int32)VTABLE_OFFSET(AEstadoPatrullando, IIEstadoEnemigo), false },  // 748195097
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEstadoPatrullando_Statics::ClassParams = {
	&AEstadoPatrullando::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoPatrullando_Statics::Class_MetaDataParams), Z_Construct_UClass_AEstadoPatrullando_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEstadoPatrullando()
{
	if (!Z_Registration_Info_UClass_AEstadoPatrullando.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEstadoPatrullando.OuterSingleton, Z_Construct_UClass_AEstadoPatrullando_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEstadoPatrullando.OuterSingleton;
}
template<> EXFINALSIS457_API UClass* StaticClass<AEstadoPatrullando>()
{
	return AEstadoPatrullando::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoPatrullando);
AEstadoPatrullando::~AEstadoPatrullando() {}
// End Class AEstadoPatrullando

// Begin Registration
struct Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_EstadoPatrullando_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEstadoPatrullando, AEstadoPatrullando::StaticClass, TEXT("AEstadoPatrullando"), &Z_Registration_Info_UClass_AEstadoPatrullando, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEstadoPatrullando), 734910609U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_EstadoPatrullando_h_924755402(TEXT("/Script/ExFinalSIS457"),
	Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_EstadoPatrullando_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_EstadoPatrullando_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
