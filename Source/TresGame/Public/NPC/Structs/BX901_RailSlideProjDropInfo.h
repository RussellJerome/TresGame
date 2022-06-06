#pragma once
#include "CoreMinimal.h"
#include "ETresDropItemID.h"
#include "BX901_RailSlideProjDropInfo.generated.h"

USTRUCT(BlueprintType)
struct FBX901_RailSlideProjDropInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresDropItemID m_DropPrize1;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumDropPrize1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresDropItemID m_DropPrize2;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumDropPrize2;
    
    UPROPERTY(EditDefaultsOnly)
    ETresDropItemID m_DropItemID;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_DropItemRate;
    
    TRESGAME_API FBX901_RailSlideProjDropInfo();
};

