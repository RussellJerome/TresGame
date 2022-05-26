#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FireMagic.h"
#include "TresPlayerState_FireMagic.generated.h"

class UTresLockonTargetComponent;
class ATresCharPawnBase;

UCLASS()
class UTresPlayerState_FireMagic : public UTresCharState_FireMagic {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresCharPawnBase* m_pTargetPawn;
    
    UPROPERTY(Export, Transient)
    UTresLockonTargetComponent* m_HomingTargetComponent;
    
    UTresPlayerState_FireMagic();
};

