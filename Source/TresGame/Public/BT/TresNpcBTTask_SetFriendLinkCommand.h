#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ETresCommandKind.h"
#include "TresNpcBTTask_SetFriendLinkCommand.generated.h"

UCLASS()
class UTresNpcBTTask_SetFriendLinkCommand : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 m_CommandSet: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresCommandKind> m_CommandKind;
    
    UPROPERTY(EditAnywhere)
    float m_ReceptionTime;
    
    UPROPERTY(EditAnywhere)
    uint32 m_CommandAuto: 1;
    
    UTresNpcBTTask_SetFriendLinkCommand();
};

