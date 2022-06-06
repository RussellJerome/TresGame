#pragma once
#include "CoreMinimal.h"
#include "TresParamDispatcherPostInterpChangeDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresParamDispatcherPostInterpChangeDelegate, FName, ParameterName);

