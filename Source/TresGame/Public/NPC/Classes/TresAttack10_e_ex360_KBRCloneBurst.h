#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresKBRCloneBurstParam.h"
#include "TresAttack10_e_ex360_KBRCloneBurst.generated.h"

class UTresStateBase;
class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack10_e_ex360_KBRCloneBurst : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(EditAnywhere)
    float m_ShotPitchDegree;
    
    UPROPERTY(EditAnywhere)
    float m_PitchVariationDegree;
    
    UPROPERTY(EditAnywhere)
    float m_RollVariationDegree;
    
    UPROPERTY(EditAnywhere)
    float m_KBBEraseSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackCollisionGroupName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackCollisionAttackDataID;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackCollisionIntervalTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_SlashState;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_SlashUpState;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_CutDownState;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_KBShootState;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresKBRCloneBurstParam> m_CloneBurstParam;
    
    UPROPERTY(EditAnywhere)
    float m_ModeChengeTime;
    
    UPROPERTY(EditAnywhere)
    float m_ModeChengeSubSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_ModeChengeSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_KBCenterOffset;
    
    UPROPERTY(EditAnywhere)
    float m_MoTPlayZRate;
    
    UPROPERTY(EditAnywhere)
    float m_ShotToTargetDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveRotRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotRateTimeLimit;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveTimeLimit;
    
public:
    UTresAttack10_e_ex360_KBRCloneBurst();
};

