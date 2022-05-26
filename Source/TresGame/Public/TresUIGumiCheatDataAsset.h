#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ETresItemDefGumiMaterial.h"
#include "ETresItemDefGumiParts.h"
#include "ETresItemDefGumiSticker.h"
#include "ETresItemDefGumiPattern.h"
#include "ETresItemDefGumiEtc.h"
#include "ETresItemDefGumiShipBP.h"
#include "TresUIGumiCheatDataAsset.generated.h"

UCLASS()
class UTresUIGumiCheatDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresItemDefGumiParts> m_CheatParts;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresItemDefGumiMaterial> m_CheatMaterials;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresItemDefGumiPattern> m_CheatPatterns;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresItemDefGumiSticker> m_CheatStickers;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresItemDefGumiShipBP> m_CheatDefGumiShips;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresItemDefGumiEtc> m_CheatWeapons;
    
    UTresUIGumiCheatDataAsset();
};

