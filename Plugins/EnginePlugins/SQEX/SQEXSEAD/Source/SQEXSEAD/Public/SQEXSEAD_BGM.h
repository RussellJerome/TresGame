#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SQEXSEAD_BGM.generated.h"

class USQEXSEADBGMSlot;
class USQEXSEADSound;

UCLASS()
class USQEXSEAD_BGM : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    USQEXSEADBGMSlot* OwnerSlot_;
    
    UPROPERTY()
    USQEXSEADSound* Sound_;
    
    USQEXSEAD_BGM();
};

