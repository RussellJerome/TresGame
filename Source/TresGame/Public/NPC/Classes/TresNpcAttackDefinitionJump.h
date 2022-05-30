#pragma once
#include "CoreMinimal.h"
#include "TresNpcTractionParam.h"
#include "TresAttackDefinitionJump.h"
#include "TresNpcAttackDefinitionInterface.h"
#include "UObject/NoExportTypes.h"
#include "TresNpcAttackDefinitionJump.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresNpcAttackDefinitionJump : public UTresAttackDefinitionJump, public ITresNpcAttackDefinitionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D m_AscentRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bTargetDownCheck: 1;
    
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
    uint8 m_bStartVelocityClear: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FTresNpcTractionParam m_AnimNotifyTractionParam;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bUsedLimitAngle: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bPitch: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_PitchUp;
    
    UPROPERTY()
    UAnimSequenceBase* m_AttackAnimDataForJump;
    
public:
    UTresNpcAttackDefinitionJump();
    
    // Fix for true pure virtual functions not being implemented
};

