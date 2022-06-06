#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresItemCollectRewardKind.h"
#include "ETresItemCollectCondition.h"
#include "ETresItemRank.h"
#include "ETresItemDefMaterial.h"
#include "TresItemCollectDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresItemCollectDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_FlagIndex;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemCollectCondition m_Condition;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ConditionN;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefMaterial m_ConditionX;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefMaterial m_ConditionY;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemRank m_ConditionR;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemCollectRewardKind m_RewardKind;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_RewardItem;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_NameTextID;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_HelptTextID;
    
    TRESGAME_API FTresItemCollectDataTable();
};

