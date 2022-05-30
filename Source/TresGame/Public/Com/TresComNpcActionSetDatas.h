#pragma once
#include "CoreMinimal.h"
#include "TresComNpcActionSetValue.h"
#include "TresComNpcActionSetDatas.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcActionSetDatas {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_DataName;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bDropItem: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bTargetTurn: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresComNpcActionSetValue> m_Values;
    
    TRESGAME_API FTresComNpcActionSetDatas();
};

