// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExFinalSIS457/BombaDecorator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombaDecorator() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
EXFINALSIS457_API UClass* Z_Construct_UClass_ABombaDecorator();
EXFINALSIS457_API UClass* Z_Construct_UClass_ABombaDecorator_NoRegister();
EXFINALSIS457_API UClass* Z_Construct_UClass_UIBomba_NoRegister();
UPackage* Z_Construct_UPackage__Script_ExFinalSIS457();
// End Cross Module References

// Begin Class ABombaDecorator
void ABombaDecorator::StaticRegisterNativesABombaDecorator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABombaDecorator);
UClass* Z_Construct_UClass_ABombaDecorator_NoRegister()
{
	return ABombaDecorator::StaticClass();
}
struct Z_Construct_UClass_ABombaDecorator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BombaDecorator.h" },
		{ "ModuleRelativePath", "BombaDecorator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BombaOriginal_MetaData[] = {
		{ "ModuleRelativePath", "BombaDecorator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_BombaOriginal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABombaDecorator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_ABombaDecorator_Statics::NewProp_BombaOriginal = { "BombaOriginal", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABombaDecorator, BombaOriginal), Z_Construct_UClass_UIBomba_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BombaOriginal_MetaData), NewProp_BombaOriginal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABombaDecorator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABombaDecorator_Statics::NewProp_BombaOriginal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABombaDecorator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABombaDecorator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ExFinalSIS457,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABombaDecorator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABombaDecorator_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIBomba_NoRegister, (int32)VTABLE_OFFSET(ABombaDecorator, IIBomba), false },  // 1194704311
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABombaDecorator_Statics::ClassParams = {
	&ABombaDecorator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABombaDecorator_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABombaDecorator_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABombaDecorator_Statics::Class_MetaDataParams), Z_Construct_UClass_ABombaDecorator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABombaDecorator()
{
	if (!Z_Registration_Info_UClass_ABombaDecorator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABombaDecorator.OuterSingleton, Z_Construct_UClass_ABombaDecorator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABombaDecorator.OuterSingleton;
}
template<> EXFINALSIS457_API UClass* StaticClass<ABombaDecorator>()
{
	return ABombaDecorator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABombaDecorator);
ABombaDecorator::~ABombaDecorator() {}
// End Class ABombaDecorator

// Begin Registration
struct Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_BombaDecorator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABombaDecorator, ABombaDecorator::StaticClass, TEXT("ABombaDecorator"), &Z_Registration_Info_UClass_ABombaDecorator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABombaDecorator), 2910406717U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_BombaDecorator_h_3020275125(TEXT("/Script/ExFinalSIS457"),
	Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_BombaDecorator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_BombaDecorator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
