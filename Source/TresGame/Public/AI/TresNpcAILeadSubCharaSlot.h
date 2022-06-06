#pragma once
#include "CoreMinimal.h"
#include "ETresChrUniqueID.h"
#include "TresNpcAILeadSubCharaSlot.generated.h"

USTRUCT(BlueprintType)
struct FTresNpcAILeadSubCharaSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETresChrUniqueID Slot0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETresChrUniqueID Slot1;
    
    TRESGAME_API FTresNpcAILeadSubCharaSlot();
};

