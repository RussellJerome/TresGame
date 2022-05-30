#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTDecorator.h"
#include "ETresChrUniqueID.h"
#include "TresBTDecorator_IsPlayerTeamCharacter.generated.h"

UCLASS()
class UTresBTDecorator_IsPlayerTeamCharacter : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_Source;
    
    UPROPERTY(EditAnywhere)
    TArray<ETresChrUniqueID> m_CharactorUID;
    
    UTresBTDecorator_IsPlayerTeamCharacter();
};

