#pragma once
#include "CoreMinimal.h"
#include "TresDashAnims_e_ex107.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FTresDashAnims_e_ex107 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* StartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* DashAnimData;
    
    TRESGAME_API FTresDashAnims_e_ex107();
};

