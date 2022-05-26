#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack7_e_ex360_KBRideTackle.generated.h"

class UParticleSystem;
class ATresProjectileBase;
class USoundBase;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class UTresAttack7_e_ex360_KBRideTackle : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_TackleParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnTailIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_KBTailAttackPawnData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetHighOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SubSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_InitSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AddSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Speed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingTimeMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingEndDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveLandOffsetHigh;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackEndMoveHigh;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackCollisionGroupName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackCollisionAttackDataID;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackCollisionIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_VoiceSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayVoiceRate;
    
private:
    UPROPERTY(Export)
    UParticleSystemComponent* m_TackleParticle;
    
public:
    UTresAttack7_e_ex360_KBRideTackle();
};

