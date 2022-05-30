#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_dw407_DarkHoming.generated.h"

UCLASS(Abstract)
class ATresProjectile_e_dw407_DarkHoming : public ATresProjectileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_Height;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Rate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FadeoutTime;
    
public:
    ATresProjectile_e_dw407_DarkHoming();
};

