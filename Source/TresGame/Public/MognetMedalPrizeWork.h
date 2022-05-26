#pragma once
#include "CoreMinimal.h"
#include "ETresDropItemID.h"
#include "MognetMedalPrizeWork.generated.h"

USTRUCT(BlueprintType)
struct FMognetMedalPrizeWork {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresDropItemID m_Type;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumDropMin;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumDropMax;
    
    TRESGAME_API FMognetMedalPrizeWork();
};

