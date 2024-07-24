// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AI_API_Project : ModuleRules
{
	public AI_API_Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] 
		{ 
			"Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore", 
			"EnhancedInput", 
			"HeadMountedDisplay",
			"AIModule", 
			"GameplayTasks", 
			"NavigationSystem" 
		});
	}
}
