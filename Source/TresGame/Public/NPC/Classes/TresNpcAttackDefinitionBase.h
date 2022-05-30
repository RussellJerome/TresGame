#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresNpcAttackDefinitionInterface.h"
#include "TresNpcTractionParam.h"
#include "TresNpcAttackDefinitionBase.generated.h"

class AActor;

UCLASS(HideDropdown)
class UTresNpcAttackDefinitionBase : public UTresAttackDefinitionBase, public ITresNpcAttackDefinitionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bFlyingMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bSwimAttack: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bEnablePitchTurnSwim: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bOnShotAbilityUsed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bStartVelocityClear: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bEnableStartYawMax: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_StartYawMax;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FTresNpcTractionParam m_AnimNotifyTractionParam;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bWeaponVisible: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bUsedTractionLimitAngle: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_TractionLimitAngleJump;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bTractionPitch: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_TractionPitchUp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bTractionDecel: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_TractionDecelMoveSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_TractionMinMoveSpeed;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> m_AssignTarget;
    
public:
    UTresNpcAttackDefinitionBase();
    
    // Fix for true pure virtual functions not being implemented
};

