#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProj_Ragnarok.generated.h"

UCLASS(Abstract)
class ATresProj_Ragnarok : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_RollingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RollingSpeedAdd;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RollingSpeedMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RollingRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RollingRadiusAdd;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RollingRadiusMax;
    
public:
    ATresProj_Ragnarok();
};

