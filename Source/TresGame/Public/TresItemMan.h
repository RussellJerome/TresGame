#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresEquipItemDataTable.h"
#include "TresItemMan.generated.h"

class UDataTable;
class UTresKeybladeAbilityDataAsset;
class UTresTreasureDataSet;
class UTresFoodstuffDropDataSet;
class UTresItemSynthesisDataTableSet;

UCLASS(NotPlaceable, Transient)
class TRESGAME_API UTresItemMan : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UDataTable* m_ItemData;
    
    UPROPERTY(Transient)
    UDataTable* m_EquipItemData;
    
    UPROPERTY(Transient)
    UTresKeybladeAbilityDataAsset* m_KeybladeAbilityData;
    
    UPROPERTY(Transient)
    UTresTreasureDataSet* m_TreasureData;
    
    UPROPERTY(Transient)
    UTresFoodstuffDropDataSet* m_FoodstuffDropDataSet;
    
    UPROPERTY(Transient)
    UDataTable* m_VBonusData;
    
    UPROPERTY(Transient)
    UDataTable* m_FoodItemEffectData;
    
    UPROPERTY(Transient)
    UDataTable* m_FoodCompleteMealEffectData;
    
    UPROPERTY(Transient)
    UDataTable* m_AbilityData;
    
    UPROPERTY(Transient)
    UTresItemSynthesisDataTableSet* m_ItemSynthesisDataTableSet;
    
    UPROPERTY(Transient)
    TArray<FTresEquipItemDataTable> m_EnhancedEquipDataBuf;
    
public:
    UTresItemMan();
};

