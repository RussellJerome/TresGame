#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack4_e_ex002_Dash.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack4_e_ex002_Dash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_StartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_LoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_EndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_SuccessAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_HitWallAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_WallReflectRightAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_WallReflectLeftAnimData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_MaxMoveSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_DashAmount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bSkipStartMotionOnAppear;
    
public:
    UTresAttack4_e_ex002_Dash();
};

