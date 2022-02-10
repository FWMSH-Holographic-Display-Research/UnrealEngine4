using UnrealBuildTool;

public class LightbulbTarget : TargetRules
{
	public LightbulbTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("Lightbulb");
	}
}
