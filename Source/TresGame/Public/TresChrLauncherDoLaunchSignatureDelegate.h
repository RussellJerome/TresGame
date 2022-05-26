#pragma once
#include "CoreMinimal.h"
#include "TresChrLauncherDoLaunchSignatureDelegate.generated.h"

class ATresCharPawnBase;
class UTresChrLauncherComponentBase;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresChrLauncherDoLaunchSignature, ATresCharPawnBase*, LaunchedChrPawn, float, Height, UTresChrLauncherComponentBase*, LaunchComponent);

