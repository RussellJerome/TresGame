#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresNpcBTTask_SetBattleFollowMode.generated.h"

UCLASS()
class UTresNpcBTTask_SetBattleFollowMode : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bFollowMode;
    
    UTresNpcBTTask_SetBattleFollowMode();
};

