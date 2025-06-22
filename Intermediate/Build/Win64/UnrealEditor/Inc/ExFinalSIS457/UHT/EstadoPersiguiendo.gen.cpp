// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExFinalSIS457/EstadoPersiguiendo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoPersiguiendo() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
EXFINALSIS457_API UClass* Z_Construct_UClass_AEstadoPersiguiendo();
EXFINALSIS457_API UClass* Z_Construct_UClass_AEstadoPersiguiendo_NoRegister();
UPackage* Z_Construct_UPackage__Script_ExFinalSIS457();
// End Cross Module References

// Begin Class AEstadoPersiguiendo
void AEstadoPersiguiendo::StaticRegisterNativesAEstadoPersiguiendo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEstadoPersiguiendo);
UClass* Z_Construct_UClass_AEstadoPersiguiendo_NoRegister()
{
	return AEstadoPersiguiendo::StaticClass();
}
struct Z_Construct_UClass_AEstadoPersiguiendo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoPersiguiendo.h" },
		{ "ModuleRelativePath", "EstadoPersiguiendo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoPersiguiendo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEstadoPersiguiendo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ExFinalSIS457,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoPersiguiendo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEstadoPersiguiendo_Statics::ClassParams = {
	&AEstadoPersiguiendo::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoPersiguiendo_Statics::Class_MetaDataParams), Z_Construct_UClass_AEstadoPersiguiendo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEstadoPersiguiendo()
{
	if (!Z_Registration_Info_UClass_AEstadoPersiguiendo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEstadoPersiguiendo.OuterSingleton, Z_Construct_UClass_AEstadoPersiguiendo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEstadoPersiguiendo.OuterSingleton;
}
template<> EXFINALSIS457_API UClass* StaticClass<AEstadoPersiguiendo>()
{
	return AEstadoPersiguiendo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoPersiguiendo);
AEstadoPersiguiendo::~AEstadoPersiguiendo() {}
// End Class AEstadoPersiguiendo

// Begin Registration
struct Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_EstadoPersiguiendo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEstadoPersiguiendo, AEstadoPersiguiendo::StaticClass, TEXT("AEstadoPersiguiendo"), &Z_Registration_Info_UClass_AEstadoPersiguiendo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEstadoPersiguiendo), 1635962299U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_EstadoPersiguiendo_h_3226429894(TEXT("/Script/ExFinalSIS457"),
	Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_EstadoPersiguiendo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_EstadoPersiguiendo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
