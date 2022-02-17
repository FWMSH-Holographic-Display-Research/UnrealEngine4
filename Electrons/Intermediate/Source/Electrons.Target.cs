using UnrealBuildTool;

public class ElectronsTarget : TargetRules
{
	public ElectronsTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("Electrons");
	}
}
