#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionJump.h"
#include "UObject/NoExportTypes.h"
#include "AITestTractionParam.h"
#include "AITestAttack_Jump.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UAITestAttack_Jump : public UTresAttackDefinitionJump {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D m_AscentRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bUsedMaxDistance: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bUsedMinDistance: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bUsedMinHeight: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bUsedUnderMaxJumpHeight: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bUsedOnMinJumpHeight: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bWeaponVisible: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FAITestTractionParam m_AnimNotifyTractionParam;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bUsedLimitAngle: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bPitch: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_PitchUp;
    
    UPROPERTY()
    UAnimSequenceBase* m_AttackAnimDataForJump;
    
public:
    UAITestAttack_Jump();
};

