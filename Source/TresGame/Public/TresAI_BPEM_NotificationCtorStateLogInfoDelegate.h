#pragma once
#include "CoreMinimal.h"
#include "TresStateLogInfo.h"
#include "TresAI_BPEM_NotificationCtorStateLogInfoDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresAI_BPEM_NotificationCtorStateLogInfo, FTresStateLogInfo, NotificationCtorStateLogInfo);

