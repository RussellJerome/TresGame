#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AtomTriggerRow.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct CRIWARERUNTIME_API FAtomTriggerRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundAtomCue* Cue;
    
    FAtomTriggerRow();
};

