#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ETresChrUniqueID.h"
#include "ETresEnemyUniqueID.h"
#include "TresBTDecorator_DoesCharacterExist.generated.h"

UCLASS()
class UTresBTDecorator_DoesCharacterExist : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<ETresChrUniqueID> m_FriendsUID;
    
    UPROPERTY(EditAnywhere)
    TArray<ETresEnemyUniqueID> m_EnemiesUID;
    
    UTresBTDecorator_DoesCharacterExist();
};

