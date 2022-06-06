#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresGumiShipEnemyStateID.h"
#include "TresGumiShipEnemyAttackMethodDataTable.generated.h"

USTRUCT()
struct FTresGumiShipEnemyAttackMethodDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackMinRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackMaxRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackRangeAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackingTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCoolDownTime;
    
    UPROPERTY(EditDefaultsOnly)
    ETresGumiShipEnemyStateID m_eAttackStateID;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_UsableEnemyID;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bUsableDefaultValue;
    
    TRESGAME_API FTresGumiShipEnemyAttackMethodDataTable();
};

