// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExFinalSIS457/Puerta.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuerta() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
EXFINALSIS457_API UClass* Z_Construct_UClass_APuerta();
EXFINALSIS457_API UClass* Z_Construct_UClass_APuerta_NoRegister();
EXFINALSIS457_API UClass* Z_Construct_UClass_UIEstadoPuerta_NoRegister();
UPackage* Z_Construct_UPackage__Script_ExFinalSIS457();
// End Cross Module References

// Begin Class APuerta
void APuerta::StaticRegisterNativesAPuerta()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APuerta);
UClass* Z_Construct_UClass_APuerta_NoRegister()
{
	return APuerta::StaticClass();
}
struct Z_Construct_UClass_APuerta_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Puerta.h" },
		{ "ModuleRelativePath", "Puerta.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EstadoActual_MetaData[] = {
		{ "ModuleRelativePath", "Puerta.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_EstadoActual;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuerta>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_APuerta_Statics::NewProp_EstadoActual = { "EstadoActual", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuerta, EstadoActual), Z_Construct_UClass_UIEstadoPuerta_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EstadoActual_MetaData), NewProp_EstadoActual_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APuerta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuerta_Statics::NewProp_EstadoActual,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APuerta_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APuerta_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ExFinalSIS457,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APuerta_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APuerta_Statics::ClassParams = {
	&APuerta::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APuerta_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APuerta_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuerta_Statics::Class_MetaDataParams), Z_Construct_UClass_APuerta_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APuerta()
{
	if (!Z_Registration_Info_UClass_APuerta.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APuerta.OuterSingleton, Z_Construct_UClass_APuerta_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APuerta.OuterSingleton;
}
template<> EXFINALSIS457_API UClass* StaticClass<APuerta>()
{
	return APuerta::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APuerta);
APuerta::~APuerta() {}
// End Class APuerta

// Begin Registration
struct Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_Puerta_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APuerta, APuerta::StaticClass, TEXT("APuerta"), &Z_Registration_Info_UClass_APuerta, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APuerta), 4009252143U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_Puerta_h_4204060423(TEXT("/Script/ExFinalSIS457"),
	Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_Puerta_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_Puerta_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
