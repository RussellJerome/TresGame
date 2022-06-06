#pragma once
#include "CoreMinimal.h"
#include "TresProj_MagicBase.h"
#include "TresProj_MagicFire.generated.h"

class UParticleSystem;
class UMaterial;

UCLASS(Abstract)
class ATresProj_MagicFire : public ATresProj_MagicBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_PutEffect;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PutEffectLife;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PutEffectLifePlus;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterial* m_PutDecalMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PutDecalSize;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PutDecalSizePlus;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PutDecalLife;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PutDecalFadeInTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PutDecalFadeOutTime;
    
public:
    ATresProj_MagicFire();
};

