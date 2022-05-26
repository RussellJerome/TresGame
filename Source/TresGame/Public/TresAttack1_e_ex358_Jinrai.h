#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack_e_ex358_Base.h"
#include "ETresEnemyJinraiPhaseType_e_ex358.h"
#include "TresAttack1_e_ex358_Jinrai.generated.h"

class UTresAttack1_e_ex358_JinraiBase;

UCLASS(HideDropdown)
class UTresAttack1_e_ex358_Jinrai : public UTresAttack_e_ex358_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UTresAttack1_e_ex358_JinraiBase>> m_JinraiAttackDefinitionClassList;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemyJinraiPhaseType_e_ex358> m_StartPhaseType;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemyJinraiPhaseType_e_ex358> m_EndPhaseType;
    
    UPROPERTY()
    UTresAttack1_e_ex358_JinraiBase* m_CurrentAttackDefinition;
    
public:
    UTresAttack1_e_ex358_Jinrai();
};

