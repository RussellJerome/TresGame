#pragma once
#include "CoreMinimal.h"
#include "TresPlayerState_OneAction.h"
#include "TresPlayerState_WaterPlay.generated.h"

class ATresGimmickRA_Impression_SplashWater;

UCLASS()
class UTresPlayerState_WaterPlay : public UTresPlayerState_OneAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    ATresGimmickRA_Impression_SplashWater* m_pWaterPlayGimmick;
    
public:
    UTresPlayerState_WaterPlay();
};

