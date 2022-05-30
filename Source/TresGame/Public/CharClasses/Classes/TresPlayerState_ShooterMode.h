#pragma once
#include "CoreMinimal.h"
#include "TresCharState_ShooterMode.h"
#include "TresPlayerState_ShooterMode.generated.h"

class ATresCharPawnBase;
class UTresLockonTargetComponent;

UCLASS()
class UTresPlayerState_ShooterMode : public UTresCharState_ShooterMode {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresCharPawnBase* m_pTargetPawn;
    
    UPROPERTY(Export)
    UTresLockonTargetComponent* m_pTargetComponent;
    
    UPROPERTY()
    ATresCharPawnBase* m_pDamagePawn;
    
    UTresPlayerState_ShooterMode();
};

