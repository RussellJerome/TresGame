#pragma once
#include "CoreMinimal.h"
#include "TresSkeletalMesh_e_ex721_Base.h"
#include "TresSkeletalMesh_e_ex721_WoodsJail.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class ATresSkeletalMesh_e_ex721_WoodsJail : public ATresSkeletalMesh_e_ex721_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_AttachDisappearEffectTime;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DisappearEffect;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_DisappearEffectCmp;
    
public:
    ATresSkeletalMesh_e_ex721_WoodsJail();
};

