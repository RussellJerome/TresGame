using UnrealBuildTool;

public class SQEXSEADEd : ModuleRules {
	public SQEXSEADEd(ReadOnlyTargetRules Target) : base(Target) {
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"Slate",
			"SlateCore",
            "UnrealEd",
			"SQEXSEAD",
			}
			);
	}
}