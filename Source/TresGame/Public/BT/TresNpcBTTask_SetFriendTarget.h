#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ETresChrUniqueID.h"
#include "TresNpcBTTask_SetFriendTarget.generated.h"

UCLASS()
class UTresNpcBTTask_SetFriendTarget : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETresChrUniqueID m_ChrUniqueID;
    
    UPROPERTY(EditAnywhere)
    uint32 m_isTargetActor: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 m_isDestination: 1;
    
    UTresNpcBTTask_SetFriendTarget();
};

