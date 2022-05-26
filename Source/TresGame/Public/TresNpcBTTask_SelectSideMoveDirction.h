#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresNpcBTTask_SelectSideMoveDirction.generated.h"

UCLASS()
class UTresNpcBTTask_SelectSideMoveDirction : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bAwayFromPlayer;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseEventBattlePoint;
    
    UPROPERTY(EditAnywhere)
    float m_LimitLength;
    
    UTresNpcBTTask_SelectSideMoveDirction();
};

