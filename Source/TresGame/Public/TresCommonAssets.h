#pragma once
#include "CoreMinimal.h"
#include "TresLoadAsset.h"
#include "TresAssetReferences.h"
#include "TresCommonAssets.generated.h"

class UTresFoodstuffDropDataSet;
class UDataTable;
class UTresBattlePortalRewardActionData;
class UTresKeybladeAbilityDataAsset;
class UTresStaticSESet;
class UTresForceFeedbackSet;
class UTresTreasureDataSet;
class UTresCommandData;
class UTresItemSynthesisDataTableSet;
class UTresPhotoHologramDataAsset;

UCLASS(Config=Game)
class TRESGAME_API UTresCommonAssets : public UTresLoadAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_ItemDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_EquipItemDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UTresKeybladeAbilityDataAsset* m_KeybladeAbilityData;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_FoodItemEffectDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_FoodCompleteMealEffectDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UTresFoodstuffDropDataSet* m_FoodstuffDropDataSet;
    
    UPROPERTY(EditDefaultsOnly)
    UTresTreasureDataSet* m_TreasureDataSet;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_VictoryBonusDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_AbilityDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_UnlockFlagDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_LuckyMarkDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_LuckyMarkMilestoneRewardDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UTresBattlePortalRewardActionData* m_TresBattlePortalRewardActionData;
    
    UPROPERTY(EditDefaultsOnly)
    UTresCommandData* m_CommandData;
    
    UPROPERTY(EditDefaultsOnly)
    UTresCommandData* m_ShootFlowData;
    
    UPROPERTY(EditDefaultsOnly)
    UTresStaticSESet* m_StaticSE;
    
    UPROPERTY(EditDefaultsOnly)
    UTresForceFeedbackSet* m_ForceFeedbackSet;
    
    UPROPERTY(EditDefaultsOnly)
    UTresItemSynthesisDataTableSet* m_ItemSynthesisDataTableSet;
    
    UPROPERTY(EditDefaultsOnly)
    UTresPhotoHologramDataAsset* m_HologramData;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresAssetReferences> m_TaggedAssets;
    
    UPROPERTY(Config)
    TArray<FName> m_InitialLoadTags;
    
    UTresCommonAssets();
};

