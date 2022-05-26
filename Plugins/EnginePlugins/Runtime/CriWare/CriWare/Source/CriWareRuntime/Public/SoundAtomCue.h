#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SoundAtomCue.generated.h"

class USoundAtomCueSheet;

UCLASS(BlueprintType, EditInlineNew)
class CRIWARERUNTIME_API USoundAtomCue : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundAtomCueSheet* CueSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString CueName;
    
    USoundAtomCue();
    UFUNCTION(BlueprintCallable)
    int32 GetLength();
    
};

