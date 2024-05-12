// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DMVMeleeCombat : ModuleRules
{
	public DMVMeleeCombat(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "StateTreeModule", 
			"GameplayStateTreeModule", "StateTreeEditorModule", "GameplayAbilities", "GameplayTags", "GameplayTasks", "AIModule", "NavigationSystem",
			"UMG"
		});
	}
}
