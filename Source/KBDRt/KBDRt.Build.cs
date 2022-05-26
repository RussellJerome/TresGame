using UnrealBuildTool;

public class KBDRt : ModuleRules {
    public KBDRt(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AnimGraphRuntime",
            "AnimationCore",
            "BonamikRt",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
