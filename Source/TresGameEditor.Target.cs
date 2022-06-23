using UnrealBuildTool;

public class TresGameEditorTarget : TargetRules {
	public TresGameEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		ExtraModuleNames.AddRange(new string[] {
			"ActorSequence",
			"BonamikRt",
			"ClothingSystemRuntime",
			"GeometryCache",
			"KBDRt",
			"KineDriverRt",
			"KineDriverEd",
			"Niagara",
			"ScaleformUI",
			"SQEXSEAD",
			"SQEXSEADEd",
			"TresGame",
			"TresGameEditor",
		});
	}
}
