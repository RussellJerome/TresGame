#pragma once
#include "CoreMinimal.h"
#include "TresEnterVolumeSignatureDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresEnterVolumeSignature, AActor*, Actor);

