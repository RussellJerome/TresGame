#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresItemDefBattleItem.h"
#include "ETresItemDefCampItem.h"
#include "ETresItemDefAccessory.h"
#include "ETresItemDefMaterial.h"
#include "TresGimmickTT_Post_PresentDataTable.generated.h"

USTRUCT(BlueprintType, Category="SQEX")
struct FTresGimmickTT_Post_PresentDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETresItemDefBattleItem m_BattleItemID1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETresItemDefCampItem m_CampItemID1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETresItemDefAccessory m_AccessoryID1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETresItemDefMaterial m_MaterialID1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_ItemNum1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_ItemPrizeRate1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_ItemRare1;
    
    TRESGAME_API FTresGimmickTT_Post_PresentDataTable();
};

