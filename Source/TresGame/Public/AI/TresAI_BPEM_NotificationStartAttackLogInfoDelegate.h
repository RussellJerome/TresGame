#pragma once
#include "CoreMinimal.h"
#include "TresStartAttackLogInfo.h"
#include "TresAI_BPEM_NotificationStartAttackLogInfoDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresAI_BPEM_NotificationStartAttackLogInfo, FTresStartAttackLogInfo, NotificationStartAttackLogInfo);

