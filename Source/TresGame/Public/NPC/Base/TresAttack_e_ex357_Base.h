#pragma once
#include "CoreMinimal.h"
#include "TresAction_e_ex357_ActionInterface.h"
#include "TresAttack_XIIILB_Base.h"
#include "TresAttack_e_ex357_Base.generated.h"

UCLASS(Abstract, HideDropdown)
class UTresAttack_e_ex357_Base : public UTresAttack_XIIILB_Base, public ITresAction_e_ex357_ActionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<float> m_AnimStartTimeList;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FallActionAbortTimingDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_FallActionAbortTimingNumber;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableFallActionAbortTimingLand: 1;
    
public:
    UTresAttack_e_ex357_Base();
    
    // Fix for true pure virtual functions not being implemented
};

