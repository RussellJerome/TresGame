#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresAbilityKind.h"
#include "TresChrLevelUpDataTable.generated.h"

USTRUCT()
struct FTresChrLevelUpDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_Exp;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AttackPower;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_MagicPower;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_DefensePower;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AbilityPoint;
    
    UPROPERTY(EditDefaultsOnly)
    ETresAbilityKind m_AbilityKind1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresAbilityKind m_AbilityKind2;
    
    UPROPERTY(EditDefaultsOnly)
    ETresAbilityKind m_AbilityKind3;
    
    TRESGAME_API FTresChrLevelUpDataTable();
};

