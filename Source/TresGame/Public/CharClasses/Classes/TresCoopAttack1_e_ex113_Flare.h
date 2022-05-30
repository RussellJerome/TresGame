#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresCoopAttack1_e_ex113_Flare.generated.h"

class UAnimSequenceBase;
class USQEX_ParticleAttachDataAsset;
class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresCoopAttack1_e_ex113_Flare : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_StartWarpAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_StartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_LoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_EndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumShot;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HeightOffset;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_EffectDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotMaxSpeed;
    
public:
    UTresCoopAttack1_e_ex113_Flare();
};

