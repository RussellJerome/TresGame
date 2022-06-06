#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex308_WarpCut.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack1_e_ex308_WarpCut : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_LoopAbortNumFailed;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumLoopList[5];
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearCorrectionTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FollowSpeed;
    
public:
    UTresAttack1_e_ex308_WarpCut();
};

