// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExFinalSIS457/EstadoCerrada.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoCerrada() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
EXFINALSIS457_API UClass* Z_Construct_UClass_AEstadoCerrada();
EXFINALSIS457_API UClass* Z_Construct_UClass_AEstadoCerrada_NoRegister();
EXFINALSIS457_API UClass* Z_Construct_UClass_UIEstadoPuerta_NoRegister();
UPackage* Z_Construct_UPackage__Script_ExFinalSIS457();
// End Cross Module References

// Begin Class AEstadoCerrada
void AEstadoCerrada::StaticRegisterNativesAEstadoCerrada()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEstadoCerrada);
UClass* Z_Construct_UClass_AEstadoCerrada_NoRegister()
{
	return AEstadoCerrada::StaticClass();
}
struct Z_Construct_UClass_AEstadoCerrada_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoCerrada.h" },
		{ "ModuleRelativePath", "EstadoCerrada.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoCerrada>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEstadoCerrada_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ExFinalSIS457,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoCerrada_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoCerrada_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIEstadoPuerta_NoRegister, (int32)VTABLE_OFFSET(AEstadoCerrada, IIEstadoPuerta), false },  // 3659835430
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEstadoCerrada_Statics::ClassParams = {
	&AEstadoCerrada::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoCerrada_Statics::Class_MetaDataParams), Z_Construct_UClass_AEstadoCerrada_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEstadoCerrada()
{
	if (!Z_Registration_Info_UClass_AEstadoCerrada.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEstadoCerrada.OuterSingleton, Z_Construct_UClass_AEstadoCerrada_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEstadoCerrada.OuterSingleton;
}
template<> EXFINALSIS457_API UClass* StaticClass<AEstadoCerrada>()
{
	return AEstadoCerrada::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoCerrada);
AEstadoCerrada::~AEstadoCerrada() {}
// End Class AEstadoCerrada

// Begin Registration
struct Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_EstadoCerrada_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEstadoCerrada, AEstadoCerrada::StaticClass, TEXT("AEstadoCerrada"), &Z_Registration_Info_UClass_AEstadoCerrada, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEstadoCerrada), 3167271546U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_EstadoCerrada_h_3889380875(TEXT("/Script/ExFinalSIS457"),
	Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_EstadoCerrada_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_EstadoCerrada_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
