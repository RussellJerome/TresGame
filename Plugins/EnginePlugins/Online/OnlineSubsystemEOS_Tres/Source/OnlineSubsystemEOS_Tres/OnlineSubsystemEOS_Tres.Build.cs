using UnrealBuildTool;

public class OnlineSubsystemEOS_Tres : ModuleRules {
    public OnlineSubsystemEOS_Tres(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
