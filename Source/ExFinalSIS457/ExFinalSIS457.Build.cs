// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ExFinalSIS457 : ModuleRules
{
	public ExFinalSIS457(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
