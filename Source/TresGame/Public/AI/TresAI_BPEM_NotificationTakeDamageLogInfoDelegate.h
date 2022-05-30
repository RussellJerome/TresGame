#pragma once
#include "CoreMinimal.h"
#include "TresTakeDamageLogInfo.h"
#include "TresAI_BPEM_NotificationTakeDamageLogInfoDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresAI_BPEM_NotificationTakeDamageLogInfo, FTresTakeDamageLogInfo, NotificationTakeDamageLogInfo);

