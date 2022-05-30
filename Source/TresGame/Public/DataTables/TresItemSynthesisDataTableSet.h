#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresItemSynthesisDataTableSet.generated.h"

class UDataTable;

UCLASS()
class TRESGAME_API UTresItemSynthesisDataTableSet : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_ItemSynthesisData;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_ItemCollectData;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_ItemMotifData;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_ItemWeaponEnhanceData;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_ItemWeaponEnhanceIconData;
    
public:
    UTresItemSynthesisDataTableSet();
};

