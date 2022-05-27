#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAttack5_n_ra203_BarrelBasch.generated.h"

class ATresCharPawnBase;

UCLASS(HideDropdown)
class UTresAttack5_n_ra203_BarrelBasch : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fMoveTimeOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fMovemSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fBarrelSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fRangeMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fHomingAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fTurnAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fTargetHeight;
    
protected:
    UPROPERTY()
    ATresCharPawnBase* m_pTargetPawn;
    
public:
    UTresAttack5_n_ra203_BarrelBasch();
};

