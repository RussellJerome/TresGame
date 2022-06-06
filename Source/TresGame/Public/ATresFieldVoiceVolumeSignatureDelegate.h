#pragma once
#include "CoreMinimal.h"
#include "ATresFieldVoiceVolumeSignatureDelegate.generated.h"

class UTresFieldVoiceBluePrint;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FATresFieldVoiceVolumeSignature, FName, UserName, UTresFieldVoiceBluePrint*, bp);

