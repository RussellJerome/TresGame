#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresGummiMissionRarity.h"
#include "ETresGummiMissionReleaseCondition.h"
#include "ETresItemDefGumiParts.h"
#include "ETresItemDefGumiMaterial.h"
#include "ETresItemDefGumiPattern.h"
#include "ETresItemDefGumiSticker.h"
#include "ETresItemDefGumiEtc.h"
#include "ETresItemDefGumiShipBP.h"
#include "TresGummiMissionDataTable.generated.h"

USTRUCT()
struct FTresGummiMissionDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_nMemo;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_isUse;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_nDispIndex;
    
    UPROPERTY(EditDefaultsOnly)
    ETresGummiMissionRarity m_nRarity;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_nTitleTextID;
    
    UPROPERTY(EditDefaultsOnly)
    ETresGummiMissionReleaseCondition m_nReleaseCondition;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_nAfterConditionTextID;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_nBeforeConditionTextID;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_nAfterGetItemTextID;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_nBeforeGetItemTextID;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_nMissionClearNum;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_isHideClearNum;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefGumiParts m_nReward1;
    
    UPROPERTY(EditDefaultsOnly)
    uint16 m_nReward1Num;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresItemDefGumiMaterial> m_nReward2;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresItemDefGumiPattern> m_nReward3;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresItemDefGumiSticker> m_nReward4;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresItemDefGumiShipBP> m_nReward5;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresItemDefGumiEtc> m_nReward6;
    
    TRESGAME_API FTresGummiMissionDataTable();
};

