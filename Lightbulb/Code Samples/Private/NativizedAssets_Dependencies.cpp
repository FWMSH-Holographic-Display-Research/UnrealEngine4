#include "NativizedAssets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
namespace
{
	static const FBlueprintDependencyObjectRef NativizedCodeDependenties[] =
	{
	FBlueprintDependencyObjectRef(TEXT("/Game/Bulb"), TEXT("Bulb_Окружность_003"), TEXT("Bulb_Окружность_003"), TEXT("/Script/Engine"), TEXT("StaticMesh"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Emissive"), TEXT("coil"), TEXT("coil"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("SceneComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("InputCore"), TEXT("Key"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("MaterialInstanceDynamic"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetMathLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("TimelineComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("StaticMeshComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("StaticMeshActor"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Actor"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PointerToUberGraphFrame"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("ETimelineDirection"), TEXT("/Script/CoreUObject"), TEXT("Enum"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PointLightComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PointLight"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("LightComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("LightComponentBase"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	};
}
const FBlueprintDependencyObjectRef& F__NativeDependencies::Get(int16 Index)
{
static const FBlueprintDependencyObjectRef& NullObjectRef = FBlueprintDependencyObjectRef();
if (Index == -1) { return NullObjectRef; }
	check((Index >= 0) && (Index < 16));
	return ::NativizedCodeDependenties[Index];
};
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
