// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class TresGame : ModuleRules
{
	public TresGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "AIModule", "GameplayTags", "BonamikRt", "ScaleformUI", "Mercuna3DMovement", "Mercuna", "SQEXSEAD", "KBDRt", "AnimGraphRuntime", "GameplayTasks" });
		PrivateDependencyModuleNames.AddRange(new string[] { });
	}
}
