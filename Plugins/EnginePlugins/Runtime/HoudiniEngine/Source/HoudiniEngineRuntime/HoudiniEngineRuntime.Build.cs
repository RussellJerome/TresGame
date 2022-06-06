using UnrealBuildTool;

public class HoudiniEngineRuntime : ModuleRules {
    public HoudiniEngineRuntime(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "Foliage",
        });
    }
}
