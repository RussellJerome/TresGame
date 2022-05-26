using UnrealBuildTool;

public class ActorSequence : ModuleRules {
    public ActorSequence(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "MovieScene",
        });
    }
}
