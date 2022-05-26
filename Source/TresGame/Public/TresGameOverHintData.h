#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EGameOverHintType.h"
#include "TresGameOverHintEnemyInfo.h"
#include "ETresWorldCode.h"
#include "ETresUIDataVersion.h"
#include "TresUIGameFlagData.h"
#include "ETresGameOverHintSpecialType.h"
#include "TresGameOverHintData.generated.h"

USTRUCT()
struct FTresGameOverHintData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString HintNameLocSpaceKey;
    
    UPROPERTY(EditDefaultsOnly)
    EGameOverHintType HintType;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Priority;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresWorldCode> WorldCode;
    
    UPROPERTY(EditDefaultsOnly)
    FName MapName;
    
    UPROPERTY(EditDefaultsOnly)
    FTresUIGameFlagData StartGameFlag;
    
    UPROPERTY(EditDefaultsOnly)
    FTresUIGameFlagData EndGameFlag;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresGameOverHintEnemyInfo> EnemyInfo;
    
    UPROPERTY(EditDefaultsOnly)
    ETresGameOverHintSpecialType SpecialType;
    
    UPROPERTY(EditDefaultsOnly)
    ETresUIDataVersion Version;
    
    TRESGAME_API FTresGameOverHintData();
};

