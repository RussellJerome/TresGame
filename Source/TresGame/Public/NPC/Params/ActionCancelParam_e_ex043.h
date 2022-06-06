#pragma once
#include "CoreMinimal.h"
#include "ActionCancelParam_e_ex043.generated.h"

USTRUCT(BlueprintType)
struct FActionCancelParam_e_ex043 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 CancelChance_Phase1;
    
    UPROPERTY(EditDefaultsOnly)
    int32 CancelChance_Phase2;
    
    UPROPERTY(EditDefaultsOnly)
    int32 CancelChance_Phase3;
    
    TRESGAME_API FActionCancelParam_e_ex043();
};

