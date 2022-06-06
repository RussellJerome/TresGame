#pragma once
#include "CoreMinimal.h"
#include "TresAttack_n_ex023_ComboBase.h"
#include "TresAttack1_n_ex023_LandCombo.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_n_ex023_LandCombo : public UTresAttack_n_ex023_ComboBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fGroundVerticalSlashAttackableDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fGroundTripleSlashAttackableDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fAerialTripleSlashAttackableDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fGroundComboFinishAttackableDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fAerialComboFinishAttackableDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fAerialComboRouteBranchThresholdHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bDebugForceBranchAerialComboRoute: 1;
    
public:
    UTresAttack1_n_ex023_LandCombo();
};

