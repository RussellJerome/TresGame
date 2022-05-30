#pragma once
#include "CoreMinimal.h"
#include "TresFNpcAIAttackDefInfo.h"
#include "TresActionDefinitionBase.h"
#include "ETresAttackDefinition.h"
#include "TresAttackDefinitionBase.generated.h"

class UEnvQuery;

UCLASS(Abstract)
class UTresAttackDefinitionBase : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleDefaultsOnly)
    TEnumAsByte<ETresAttackDefinition::Type> m_AttackType;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackName;
    
protected:
    UPROPERTY(BlueprintReadWrite)
    uint8 m_bMinDistance: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinDistance;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 m_bMaxDistance: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxDistance;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 m_bMinHeight: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinHeight;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 m_bMaxHeight: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxHeight;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_EQSRangeRefinement;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bDirectPathRequired: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bLineOfSightRequired: 1;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_ActionEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bTargetRequired: 1;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    uint8 m_bSelfInViewport: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bValidateYaw: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_YawOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_YawTolerance;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bValidatePitch: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PitchOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PitchTolerance;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bEditNpcAIInfo;
    
    UPROPERTY(EditDefaultsOnly)
    FTresFNpcAIAttackDefInfo m_NpcAIInfo;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    bool m_bIndirectAttack;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FName m_AttackerDataID;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    TArray<FName> m_AttackedDataID;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_AttackDuration;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    bool m_bCanMultiHit;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_SuspendTime;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_MissScore;
    
public:
    UTresAttackDefinitionBase();
};

