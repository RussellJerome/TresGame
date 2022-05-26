#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Attack.h"
#include "TresPlayerState_Attack.generated.h"

class ATresCharPawnBase;
class AActor;
class UTresLockonTargetComponent;

UCLASS()
class UTresPlayerState_Attack : public UTresCharState_Attack {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresCharPawnBase* m_pTargetPawn;
    
    UPROPERTY(Export, Transient)
    UTresLockonTargetComponent* m_HomingTargetComponent;
    
    UPROPERTY(Export, Transient)
    UTresLockonTargetComponent* m_OldTargetComponent;
    
    UPROPERTY(DuplicateTransient, Transient)
    AActor* m_pReflectCauser;
    
    UPROPERTY(DuplicateTransient, Transient)
    ATresCharPawnBase* m_pRevengePawn;
    
    UTresPlayerState_Attack();
};

