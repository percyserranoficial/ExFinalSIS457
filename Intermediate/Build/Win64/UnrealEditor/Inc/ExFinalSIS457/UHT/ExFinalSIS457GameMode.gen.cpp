// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExFinalSIS457/ExFinalSIS457GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExFinalSIS457GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
EXFINALSIS457_API UClass* Z_Construct_UClass_AExFinalSIS457GameMode();
EXFINALSIS457_API UClass* Z_Construct_UClass_AExFinalSIS457GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ExFinalSIS457();
// End Cross Module References

// Begin Class AExFinalSIS457GameMode
void AExFinalSIS457GameMode::StaticRegisterNativesAExFinalSIS457GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AExFinalSIS457GameMode);
UClass* Z_Construct_UClass_AExFinalSIS457GameMode_NoRegister()
{
	return AExFinalSIS457GameMode::StaticClass();
}
struct Z_Construct_UClass_AExFinalSIS457GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ExFinalSIS457GameMode.h" },
		{ "ModuleRelativePath", "ExFinalSIS457GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExFinalSIS457GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AExFinalSIS457GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ExFinalSIS457,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExFinalSIS457GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AExFinalSIS457GameMode_Statics::ClassParams = {
	&AExFinalSIS457GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AExFinalSIS457GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AExFinalSIS457GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AExFinalSIS457GameMode()
{
	if (!Z_Registration_Info_UClass_AExFinalSIS457GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExFinalSIS457GameMode.OuterSingleton, Z_Construct_UClass_AExFinalSIS457GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AExFinalSIS457GameMode.OuterSingleton;
}
template<> EXFINALSIS457_API UClass* StaticClass<AExFinalSIS457GameMode>()
{
	return AExFinalSIS457GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AExFinalSIS457GameMode);
AExFinalSIS457GameMode::~AExFinalSIS457GameMode() {}
// End Class AExFinalSIS457GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_ExFinalSIS457GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AExFinalSIS457GameMode, AExFinalSIS457GameMode::StaticClass, TEXT("AExFinalSIS457GameMode"), &Z_Registration_Info_UClass_AExFinalSIS457GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExFinalSIS457GameMode), 241275860U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_ExFinalSIS457GameMode_h_3461566574(TEXT("/Script/ExFinalSIS457"),
	Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_ExFinalSIS457GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ExFinalSIS457_Source_ExFinalSIS457_ExFinalSIS457GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
