using UnrealBuildTool;

public class CriWareRuntime : ModuleRules {
    public CriWareRuntime(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "MovieScene",
            "RenderCore",
        });
    }
}
