#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack5_e_ex311_KBRideTackle.generated.h"

class UParticleSystem;
class USoundBase;

UCLASS(HideDropdown)
class UTresAttack5_e_ex311_KBRideTackle : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_TackleParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetHighOffset;
    
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
    
    UTresAttack5_e_ex311_KBRideTackle();
};

