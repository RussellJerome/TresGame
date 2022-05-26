using UnrealBuildTool;

public class TresGame : ModuleRules {
    public TresGame(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AnimGraphRuntime",
            "AnimationCore",
            "BonamikRt",
            "Core",
            "CoreUObject",
            "CriWareRuntime",
            "Engine",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "KBDRt",
            "Mercuna",
            "Mercuna3DMovement",
            "MovieScene",
            "MovieSceneTracks",
            "Renderer",
            "SQEXSEAD",
            "ScaleformUI",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
