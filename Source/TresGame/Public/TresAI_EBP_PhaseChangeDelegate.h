#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TresAI_EBP_PhaseChangeDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresAI_EBP_PhaseChange, FGameplayTag, Tag);

