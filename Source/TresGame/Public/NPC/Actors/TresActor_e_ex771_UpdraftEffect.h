#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresActor_e_ex771_UpdraftEffect.generated.h"

class UParticleSystemComponent;
class UParticleSystem;
class UCurveFloat;

UCLASS()
class ATresActor_e_ex771_UpdraftEffect : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UParticleSystemComponent* m_UpdraftEff;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_UpdraftEffData;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_UpdraftEffParticleNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_UpdraftEffSpeedZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_UpdraftEffScale;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_pro_UpdraftEffAlphaCurve;
    
public:
    ATresActor_e_ex771_UpdraftEffect();
};

