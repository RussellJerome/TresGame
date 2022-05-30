#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex363_SledgeHammer.generated.h"

class USoundBase;
class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack3_e_ex363_SledgeHammer : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_GoalDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMoveStopDegree;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMoveStopRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLoopWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_DirectAttack;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AtkMotionSkipTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_VoiceSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayVoiceRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_ShotInvisible;
    
public:
    UTresAttack3_e_ex363_SledgeHammer();
};

