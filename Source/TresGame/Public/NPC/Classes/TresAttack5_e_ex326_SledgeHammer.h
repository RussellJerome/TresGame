#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack5_e_ex326_SledgeHammer.generated.h"

class USoundBase;

UCLASS(HideDropdown)
class UTresAttack5_e_ex326_SledgeHammer : public UTresAttackDefinitionBase {
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
    
public:
    UTresAttack5_e_ex326_SledgeHammer();
};

