#pragma once
#include "CoreMinimal.h"
#include "TresCharState_SuperSlide.h"
#include "TresPlayerState_AthleticFlow.generated.h"

class UPrimitiveComponent;
class AActor;
class UTresLockonTargetComponent;
class ATresCharPawnBase;
class UTresPoleComponent;

UCLASS()
class UTresPlayerState_AthleticFlow : public UTresCharState_SuperSlide {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UTresLockonTargetComponent* m_pTargetComponent;
    
    UPROPERTY()
    AActor* m_pHitActor;
    
    UPROPERTY(Export)
    UPrimitiveComponent* m_pHitComponent;
    
    UPROPERTY(Export)
    UTresPoleComponent* m_pPoleComponent;
    
    UPROPERTY()
    ATresCharPawnBase* m_pTargetEnemy;
    
    UPROPERTY()
    ATresCharPawnBase* m_pEnemyTurn;
    
    UTresPlayerState_AthleticFlow();
};

