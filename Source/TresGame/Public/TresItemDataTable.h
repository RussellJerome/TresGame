#pragma once
#include "CoreMinimal.h"
#include "ETresItemCategoryIcon.h"
#include "ETresItemCategory.h"
#include "Engine/DataTable.h"
#include "ETresItemRank.h"
#include "TresItemDataTable.generated.h"

class UTexture;

USTRUCT()
struct FTresItemDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_KeyName;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemCategory m_Category;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_UIPriority;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_Comment;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemCategoryIcon m_CategoryIcon;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemRank m_ItemRank;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture* m_IconAsset;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_NameTextID;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_HelpTextID;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_BuyPrice;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_SellPrice;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ShopLevel;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_GumiShopLevel;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bNeedMogCard: 1;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_UnlockFlagIndex;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bCanSell: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bCanDrop: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bCanbeSoldOut: 1;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_MaxNum;
    
    TRESGAME_API FTresItemDataTable();
};

