#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipEnemyTerritoryID.h"
#include "ETresGummiSpaceDef.h"
#include "TresGumiShipEnemyTerritoryInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipEnemyTerritoryInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresGumiShipEnemyTerritoryID m_eTerritoryID;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_sNameLabel;
    
    UPROPERTY(EditDefaultsOnly)
    ETresGummiSpaceDef m_nSpace;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_nDispNum;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_nLevel;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_isBoss;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_isDiscard;
    
    TRESGAME_API FTresGumiShipEnemyTerritoryInfo();
};

