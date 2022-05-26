#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex351_Base.h"
#include "ETresEnemyex351ComboKind.h"
#include "TresEnemyEx351RootScale.h"
#include "TresAttack1_e_ex351_WhipComboBase.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack1_e_ex351_WhipComboBase : public UTresAttack_e_ex351_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(EditDefaultsOnly)
    ETresEnemyex351ComboKind m_ComboKind;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemyEx351RootScale> m_TractionScales;
    
    UPROPERTY(EditDefaultsOnly)
    float m_KeepDistance;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bBackStepAcction: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpStartMinDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpStartMaxDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearMinAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MovedCorrectionRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NotCorrectionAngle;
    
    UTresAttack1_e_ex351_WhipComboBase();
};

