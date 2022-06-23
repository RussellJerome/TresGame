using UnrealBuildTool;

public class SQEXSEAD : ModuleRules {
    public SQEXSEAD(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
		
        });
        if (Target.Type == TargetType.Editor)
        {
            PublicDependencyModuleNames.Add("SQEXSEADEd");
        }
    }
}
