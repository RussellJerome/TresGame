using UnrealBuildTool;

public class TresGameTarget : TargetRules {
	public TresGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		ExtraModuleNames.AddRange(new string[] {
			"ActorSequence",
			"BonamikRt",
			"ClothingSystemRuntime",
			"GeometryCache",
			"KBDRt",
			"KineDriverRt",
			"Niagara",
			"ScaleformUI",
			"TresGame",
		});
	}
}
