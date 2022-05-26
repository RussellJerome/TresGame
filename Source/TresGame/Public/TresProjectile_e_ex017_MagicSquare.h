#pragma once
#include "CoreMinimal.h"
#include "TresProjectileSkeletalMeshBase.h"
#include "TresProjectile_e_ex017_MagicSquare.generated.h"

class UParticleSystem;
class UParticleSystemComponent;
class USQEX_ParticleAttachDataAsset;

UCLASS(Abstract)
class ATresProjectile_e_ex017_MagicSquare : public ATresProjectileSkeletalMeshBase {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UParticleSystemComponent* m_JointEff[5];
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_JointEffData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HoveringHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HoveringSpeedRate;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_pro_EffDataAsset;
    
    ATresProjectile_e_ex017_MagicSquare();
    UFUNCTION(BlueprintPure)
    float GetRevolverBoneRoll() const;
    
    UFUNCTION(BlueprintPure)
    float GetRevolverBoneBlendRate() const;
    
    UFUNCTION(BlueprintPure)
    float GetHoveringZ() const;
    
};

