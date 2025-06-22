// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExFinalSIS457/BombaConDobleExplosion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombaConDobleExplosion() {}

// Begin Cross Module References
EXFINALSIS457_API UClass* Z_Construct_UClass_ABombaConDobleExplosion();
EXFINALSIS457_API UClass* Z_Construct_UClass_ABombaConDobleExplosion_NoRegister();
EXFINALSIS457_API UClass* Z_Construct_UClass_ABombaDecorator();
UPackage* Z_Construct_UPackage__Script_ExFinalSIS457();
// End Cross Module References

// Begin Class ABombaConDobleExplosion
void ABombaConDobleExplosion::StaticRegisterNativesABombaConDobleExplosion()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABombaConDobleExplosion);
UClass* Z_Construct_UClass_ABombaConDobleExplosion_NoRegister()
{
	return ABombaConDobleExplosion::StaticClass();
}
struct Z_Construct_UClass_ABombaConDobleExplosion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BombaConDobleExplosion.h" },
		{ "ModuleRelativePath", "BombaConDobleExplosion.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABombaConDobleExplosion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABombaConDobleExplosion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABombaDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_ExFinalSIS457,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABombaConDobleExplosion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABombaConDobleExplosion_Statics::ClassParams = {
	&ABombaConDobleExplosion::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABombaConDobleExplosion_Statics::Class_MetaDataParams), Z_Construct_UClass_ABombaConDobleExplosion_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABombaConDobleExplosion()
{
	if (!Z_Registration_Info_UClass_ABombaConDobleExplosion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABombaConDobleExplosion.OuterSingleton, Z_Construct_UClass_ABombaConDobleExplosion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABombaConDobleExplosion.OuterSingleton;
}
template<> EXFINALSIS457_API UClass* StaticClass<ABombaConDobleExplosion>()
{
	return ABombaConDobleExplosion::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABombaConDobleExplosion);
ABombaConDobleExplosion::~ABombaConDobleExplosion() {}
// End Class ABombaConDobleExplosion

// Begin Registration
struct Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_BombaConDobleExplosion_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABombaConDobleExplosion, ABombaConDobleExplosion::StaticClass, TEXT("ABombaConDobleExplosion"), &Z_Registration_Info_UClass_ABombaConDobleExplosion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABombaConDobleExplosion), 510267470U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_BombaConDobleExplosion_h_913717282(TEXT("/Script/ExFinalSIS457"),
	Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_BombaConDobleExplosion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_BombaConDobleExplosion_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
