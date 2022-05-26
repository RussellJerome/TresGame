#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionRanged.h"
#include "TresAction1_n_bx202_CureSprayer.generated.h"

UCLASS(HideDropdown)
class UTresAction1_n_bx202_CureSprayer : public UTresNpcAttackDefinitionRanged {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_MinDegree;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_StopDegree;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_ShotTime;
    
    UTresAction1_n_bx202_CureSprayer();
};

