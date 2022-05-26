#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SQEXSEAD_BGMOptions.h"
#include "ESQEXSEAD_BGMState.h"
#include "SQEXSEADBGMSlot.generated.h"

class USQEXSEAD_BGM;

UCLASS()
class SQEXSEAD_API USQEXSEADBGMSlot : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    ESQEXSEAD_BGMState State;
    
private:
    UPROPERTY()
    FSQEXSEAD_BGMOptions DefaultOptions_;
    
    UPROPERTY()
    USQEXSEAD_BGM* BGM_;
    
    UPROPERTY()
    USQEXSEAD_BGM* PrevBGM_;
    
public:
    USQEXSEADBGMSlot();
};

