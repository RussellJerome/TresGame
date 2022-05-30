#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_ex081_UpsideDownFall.generated.h"

UCLASS(HideDropdown)
class UTresAction2_e_ex081_UpsideDownFall : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_DistanceJumpOff;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FallPoint;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MapFallPoint;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RandFallPoint;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxFallDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinFallDistance;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsJumpOffRandom: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_JumpOffWaitMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_JumpOffWaitMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_JumpOffWaitNotFogged;
    
    UTresAction2_e_ex081_UpsideDownFall();
};

