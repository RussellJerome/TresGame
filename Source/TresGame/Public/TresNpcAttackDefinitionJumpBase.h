#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresNpcAttackDefinitionJumpBase.generated.h"

UCLASS(HideDropdown)
class UTresNpcAttackDefinitionJumpBase : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_JumpStartAnim;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_JumpRiseLoopAnim;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_JumpDownLoopAnim;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_JumpLandAnim;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_JumpAttackUpAnim;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_JumpAttackDownAnim;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_JumpHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_JumpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_LimitHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_LimitMinHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_GravityScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_MinMoveDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_MaxMoveDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_JumpAttackEnableZ;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_JumpAttackRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_JumpAttackUpRangeZ;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_JumpAttackDownRangeZ;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_JumpAttackDecelMoveSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_JumpAttackMinMoveSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector m_TargetOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_JumpHomingSpeedEnable: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_JumpHomingSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_JumpHomingYawMaxEnable: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_JumpHomingYawMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_EnableSpeedCorrectionUp: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_EnableSpeedCorrectionDown: 1;
    
public:
    UTresNpcAttackDefinitionJumpBase();
};

