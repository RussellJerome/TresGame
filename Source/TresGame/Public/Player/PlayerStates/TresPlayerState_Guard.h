#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Guard.h"
#include "TresPlayerState_Guard.generated.h"

class UTresLockonTargetComponent;
class AActor;

UCLASS()
class UTresPlayerState_Guard : public UTresCharState_Guard {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    AActor* m_pAttackPawn;
    
    UPROPERTY(Transient)
    AActor* m_pTargetPawn;
    
    UPROPERTY(Export, Transient)
    UTresLockonTargetComponent* m_pTargetComponent;
    
    UTresPlayerState_Guard();
};

