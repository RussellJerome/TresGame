#pragma once
#include "CoreMinimal.h"
#include "TresStateLogInfo.h"
#include "TresAI_BPEM_NotificationDtorStateLogInfoDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresAI_BPEM_NotificationDtorStateLogInfo, FTresStateLogInfo, NotificationDtorStateLogInfo);

