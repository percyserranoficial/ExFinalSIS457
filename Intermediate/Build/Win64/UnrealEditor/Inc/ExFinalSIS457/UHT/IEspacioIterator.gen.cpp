// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExFinalSIS457/IEspacioIterator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIEspacioIterator() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
EXFINALSIS457_API UClass* Z_Construct_UClass_UIEspacioIterator();
EXFINALSIS457_API UClass* Z_Construct_UClass_UIEspacioIterator_NoRegister();
UPackage* Z_Construct_UPackage__Script_ExFinalSIS457();
// End Cross Module References

// Begin Interface UIEspacioIterator
void UIEspacioIterator::StaticRegisterNativesUIEspacioIterator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIEspacioIterator);
UClass* Z_Construct_UClass_UIEspacioIterator_NoRegister()
{
	return UIEspacioIterator::StaticClass();
}
struct Z_Construct_UClass_UIEspacioIterator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IEspacioIterator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIEspacioIterator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIEspacioIterator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ExFinalSIS457,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIEspacioIterator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIEspacioIterator_Statics::ClassParams = {
	&UIEspacioIterator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIEspacioIterator_Statics::Class_MetaDataParams), Z_Construct_UClass_UIEspacioIterator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIEspacioIterator()
{
	if (!Z_Registration_Info_UClass_UIEspacioIterator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIEspacioIterator.OuterSingleton, Z_Construct_UClass_UIEspacioIterator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIEspacioIterator.OuterSingleton;
}
template<> EXFINALSIS457_API UClass* StaticClass<UIEspacioIterator>()
{
	return UIEspacioIterator::StaticClass();
}
UIEspacioIterator::UIEspacioIterator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIEspacioIterator);
UIEspacioIterator::~UIEspacioIterator() {}
// End Interface UIEspacioIterator

// Begin Registration
struct Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_IEspacioIterator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIEspacioIterator, UIEspacioIterator::StaticClass, TEXT("UIEspacioIterator"), &Z_Registration_Info_UClass_UIEspacioIterator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIEspacioIterator), 1987391038U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_IEspacioIterator_h_1827864532(TEXT("/Script/ExFinalSIS457"),
	Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_IEspacioIterator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_IEspacioIterator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
