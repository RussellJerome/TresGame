#pragma once
#include "CoreMinimal.h"
#include "TresParamDispatcherPostInterpChangeDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresParamDispatcherPostInterpChangeDelegate, FName, ParameterName);

