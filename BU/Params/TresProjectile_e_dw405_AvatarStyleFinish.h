#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_dw405_AvatarStyleFinish.generated.h"

UCLASS(Abstract)
class ATresProjectile_e_dw405_AvatarStyleFinish : public ATresProjectileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_HomingEndTime;
    
public:
    ATresProjectile_e_dw405_AvatarStyleFinish();
};

