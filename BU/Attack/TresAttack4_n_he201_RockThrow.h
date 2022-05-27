#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAttack4_n_he201_RockThrow.generated.h"

class UParticleSystem;
class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack4_n_he201_RockThrow : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fThrowRotSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fThrowPitchMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fThrowPitchMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fMoveSpeedUp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fMoveSpeedMiddle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fMoveSpeedDown;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fGravityUp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fGravityMiddle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fGravityDown;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fMoveSpeedUpBoss;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fMoveSpeedMiddleBoss;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fMoveSpeedDownBoss;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fGravityUpBoss;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fGravityMiddleBoss;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fGravityDownBoss;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UParticleSystem* m_HitEffData;
    
protected:
    UPROPERTY()
    ATresProjectileBase* m_pProjRock;
    
public:
    UTresAttack4_n_he201_RockThrow();
};

