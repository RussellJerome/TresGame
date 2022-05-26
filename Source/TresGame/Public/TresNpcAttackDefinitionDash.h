#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionInterface.h"
#include "TresAttackDefinitionDash.h"
#include "TresNpcAttackDefinitionDash.generated.h"

UCLASS(HideDropdown)
class UTresNpcAttackDefinitionDash : public UTresAttackDefinitionDash, public ITresNpcAttackDefinitionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_LoopBranch;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_TargetRun;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_TargetOutRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_HitWallDeg;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_HeightLimit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_FallHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bUsedTurnSpeed: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_TurnSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bStartVelocityClear: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bEnableStartYawMax: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_StartYawMax;
    
public:
    UTresNpcAttackDefinitionDash();
    
    // Fix for true pure virtual functions not being implemented
};

