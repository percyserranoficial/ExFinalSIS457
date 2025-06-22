// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExFinalSIS457/EstadoAbierta.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoAbierta() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
EXFINALSIS457_API UClass* Z_Construct_UClass_AEstadoAbierta();
EXFINALSIS457_API UClass* Z_Construct_UClass_AEstadoAbierta_NoRegister();
EXFINALSIS457_API UClass* Z_Construct_UClass_UIEstadoPuerta_NoRegister();
UPackage* Z_Construct_UPackage__Script_ExFinalSIS457();
// End Cross Module References

// Begin Class AEstadoAbierta
void AEstadoAbierta::StaticRegisterNativesAEstadoAbierta()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEstadoAbierta);
UClass* Z_Construct_UClass_AEstadoAbierta_NoRegister()
{
	return AEstadoAbierta::StaticClass();
}
struct Z_Construct_UClass_AEstadoAbierta_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoAbierta.h" },
		{ "ModuleRelativePath", "EstadoAbierta.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoAbierta>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEstadoAbierta_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ExFinalSIS457,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoAbierta_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoAbierta_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIEstadoPuerta_NoRegister, (int32)VTABLE_OFFSET(AEstadoAbierta, IIEstadoPuerta), false },  // 3659835430
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEstadoAbierta_Statics::ClassParams = {
	&AEstadoAbierta::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoAbierta_Statics::Class_MetaDataParams), Z_Construct_UClass_AEstadoAbierta_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEstadoAbierta()
{
	if (!Z_Registration_Info_UClass_AEstadoAbierta.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEstadoAbierta.OuterSingleton, Z_Construct_UClass_AEstadoAbierta_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEstadoAbierta.OuterSingleton;
}
template<> EXFINALSIS457_API UClass* StaticClass<AEstadoAbierta>()
{
	return AEstadoAbierta::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoAbierta);
AEstadoAbierta::~AEstadoAbierta() {}
// End Class AEstadoAbierta

// Begin Registration
struct Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_EstadoAbierta_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEstadoAbierta, AEstadoAbierta::StaticClass, TEXT("AEstadoAbierta"), &Z_Registration_Info_UClass_AEstadoAbierta, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEstadoAbierta), 2827292641U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_EstadoAbierta_h_4107882448(TEXT("/Script/ExFinalSIS457"),
	Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_EstadoAbierta_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_EstadoAbierta_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
