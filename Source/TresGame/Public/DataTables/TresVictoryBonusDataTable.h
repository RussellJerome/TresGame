#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresVBonusAbilityType.h"
#include "ETresAbilityKind.h"
#include "ETresVictoryBonusKind.h"
#include "TresVictoryBonusDataTable.generated.h"

USTRUCT()
struct FTresVictoryBonusDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_FlagName;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_Comment;
    
    UPROPERTY(EditDefaultsOnly)
    ETresVBonusAbilityType m_InitAbilityEquipOnCriticalMode;
    
    UPROPERTY(EditDefaultsOnly)
    ETresVictoryBonusKind m_BonusSora1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresAbilityKind m_AbilitySora1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresVictoryBonusKind m_BonusSora2;
    
    UPROPERTY(EditDefaultsOnly)
    ETresAbilityKind m_AbilitySora2;
    
    UPROPERTY(EditDefaultsOnly)
    ETresVictoryBonusKind m_BonusDONALD1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresAbilityKind m_AbilityDONALD1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresVictoryBonusKind m_BonusGOOFY1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresAbilityKind m_AbilityGOOFY1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresVictoryBonusKind m_BonusHERCULES1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresAbilityKind m_AbilityHERCULES1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresVictoryBonusKind m_BonusWOODY1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresAbilityKind m_AbilityWOODY1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresVictoryBonusKind m_BonusBUZZ1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresAbilityKind m_AbilityBUZZ1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresVictoryBonusKind m_BonusRAPUNZEL1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresAbilityKind m_AbilityRAPUNZEL1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresVictoryBonusKind m_BonusFLYNN1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresAbilityKind m_AbilityFLYNN1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresVictoryBonusKind m_BonusSULLEY1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresAbilityKind m_AbilitySULLEY1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresVictoryBonusKind m_BonusMIKE1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresAbilityKind m_AbilityMIKE1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresVictoryBonusKind m_BonusMARSHMALLOW1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresAbilityKind m_AbilityMARSHMALLOW1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresVictoryBonusKind m_BonusBAYMAX1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresAbilityKind m_AbilityBAYMAX1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresVictoryBonusKind m_BonusJACK_SPARROW1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresAbilityKind m_AbilityJACK_SPARROW1;
    
    TRESGAME_API FTresVictoryBonusDataTable();
};

