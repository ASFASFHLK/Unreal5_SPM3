// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Unreal5_SPM3 : ModuleRules
{
	public Unreal5_SPM3(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
