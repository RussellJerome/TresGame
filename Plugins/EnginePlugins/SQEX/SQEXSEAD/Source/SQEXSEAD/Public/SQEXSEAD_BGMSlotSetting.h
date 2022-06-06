#pragma once
#include "CoreMinimal.h"
#include "SQEXSEAD_BGMOptions.h"
#include "SQEXSEAD_BGMSlotSetting.generated.h"

USTRUCT(BlueprintType)
struct FSQEXSEAD_BGMSlotSetting {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName SlotName;
    
    UPROPERTY()
    FSQEXSEAD_BGMOptions SlotOption;
    
    SQEXSEAD_API FSQEXSEAD_BGMSlotSetting();
};

