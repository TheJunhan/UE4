// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class myUE4 : ModuleRules
{
	public myUE4(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
