#pragma once
#include "CoreMinimal.h"
#include "SQEXSEAD_BGMSlotSetting.h"
#include "UObject/Object.h"
#include "SQEXSEADBGMManager.generated.h"

class USQEXSEADBGMSlot;
class USQEXSEADBGMSlotController;

UCLASS(DefaultConfig, Config=Engine)
class SQEXSEAD_API USQEXSEADBGMManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<USQEXSEADBGMSlot*> Slots_;
    
    UPROPERTY()
    TArray<USQEXSEADBGMSlotController*> Controllers_;
    
    UPROPERTY(Transient)
    USQEXSEADBGMSlot* PlayingSlot_;
    
    UPROPERTY(Config)
    TArray<FSQEXSEAD_BGMSlotSetting> SlotSettings_;
    
public:
    USQEXSEADBGMManager();
};

