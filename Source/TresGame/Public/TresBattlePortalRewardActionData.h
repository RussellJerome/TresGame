#pragma once
#include "CoreMinimal.h"
#include "TresLoadAsset.h"
#include "TresSelfieCameraActionDef.h"
#include "TresBattlePortalRewardActionData.generated.h"

UCLASS(BlueprintType)
class UTresBattlePortalRewardActionData : public UTresLoadAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FName> BattlePortalClearFlagCheckList;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FTresSelfieCameraActionDef> SelfieActionList;
    
    UTresBattlePortalRewardActionData();
};

