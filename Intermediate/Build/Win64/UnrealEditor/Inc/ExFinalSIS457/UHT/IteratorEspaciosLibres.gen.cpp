// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExFinalSIS457/IteratorEspaciosLibres.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIteratorEspaciosLibres() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
EXFINALSIS457_API UClass* Z_Construct_UClass_AIteratorEspaciosLibres();
EXFINALSIS457_API UClass* Z_Construct_UClass_AIteratorEspaciosLibres_NoRegister();
EXFINALSIS457_API UClass* Z_Construct_UClass_UIEspacioIterator_NoRegister();
UPackage* Z_Construct_UPackage__Script_ExFinalSIS457();
// End Cross Module References

// Begin Class AIteratorEspaciosLibres
void AIteratorEspaciosLibres::StaticRegisterNativesAIteratorEspaciosLibres()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIteratorEspaciosLibres);
UClass* Z_Construct_UClass_AIteratorEspaciosLibres_NoRegister()
{
	return AIteratorEspaciosLibres::StaticClass();
}
struct Z_Construct_UClass_AIteratorEspaciosLibres_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "IteratorEspaciosLibres.h" },
		{ "ModuleRelativePath", "IteratorEspaciosLibres.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIteratorEspaciosLibres>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AIteratorEspaciosLibres_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ExFinalSIS457,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIteratorEspaciosLibres_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AIteratorEspaciosLibres_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIEspacioIterator_NoRegister, (int32)VTABLE_OFFSET(AIteratorEspaciosLibres, IIEspacioIterator), false },  // 1987391038
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIteratorEspaciosLibres_Statics::ClassParams = {
	&AIteratorEspaciosLibres::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIteratorEspaciosLibres_Statics::Class_MetaDataParams), Z_Construct_UClass_AIteratorEspaciosLibres_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIteratorEspaciosLibres()
{
	if (!Z_Registration_Info_UClass_AIteratorEspaciosLibres.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIteratorEspaciosLibres.OuterSingleton, Z_Construct_UClass_AIteratorEspaciosLibres_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIteratorEspaciosLibres.OuterSingleton;
}
template<> EXFINALSIS457_API UClass* StaticClass<AIteratorEspaciosLibres>()
{
	return AIteratorEspaciosLibres::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIteratorEspaciosLibres);
AIteratorEspaciosLibres::~AIteratorEspaciosLibres() {}
// End Class AIteratorEspaciosLibres

// Begin Registration
struct Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_IteratorEspaciosLibres_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIteratorEspaciosLibres, AIteratorEspaciosLibres::StaticClass, TEXT("AIteratorEspaciosLibres"), &Z_Registration_Info_UClass_AIteratorEspaciosLibres, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIteratorEspaciosLibres), 3290547343U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_IteratorEspaciosLibres_h_1386889672(TEXT("/Script/ExFinalSIS457"),
	Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_IteratorEspaciosLibres_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_IteratorEspaciosLibres_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
