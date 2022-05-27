#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex107_Jump.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack2_e_ex107_Jump : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* m_RiseStartAnimData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* m_RiseLoopAnimData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* m_FallStartAnimData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* m_FallLoopAnimData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* m_LandAnimData;
    
private:
    UPROPERTY(EditDefaultsOnly)
    float m_FollowInitialSpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FollowAccelerationXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FollowMaxSpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FollowSpeedZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetOffsetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FallFollowLimitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LimitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LimitHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DescentSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DescentAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DescentMaxSpeed;
    
public:
    UTresAttack2_e_ex107_Jump();
};

