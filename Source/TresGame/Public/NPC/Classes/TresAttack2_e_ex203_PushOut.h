#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresFollowParams_e_ex203.h"
#include "TresAttack2_e_ex203_PushOut.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack2_e_ex203_PushOut : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_StartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_LoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_EndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresFollowParams_e_ex203> m_FollowParams;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttenuationStartDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttenuationEndDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttenuationEndTurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxTurnAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WallHitAngle;
    
public:
    UTresAttack2_e_ex203_PushOut();
};

