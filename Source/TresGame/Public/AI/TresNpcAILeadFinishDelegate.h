#pragma once
#include "CoreMinimal.h"
#include "TresNpcAILeadFinishDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresNpcAILeadFinish, FName, LeadID);

