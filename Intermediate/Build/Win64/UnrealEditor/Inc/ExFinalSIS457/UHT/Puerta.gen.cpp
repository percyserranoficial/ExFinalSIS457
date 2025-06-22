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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuerta>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_APuerta, APuerta::StaticClass, TEXT("APuerta"), &Z_Registration_Info_UClass_APuerta, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APuerta), 2203501431U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_Puerta_h_2855415955(TEXT("/Script/ExFinalSIS457"),
	Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_Puerta_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_Puerta_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
