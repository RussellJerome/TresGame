#pragma once
#include "CoreMinimal.h"
#include "TresBoneNames_e_ex011.generated.h"

USTRUCT(BlueprintType)
struct FTresBoneNames_e_ex011 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName ParentConnectBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    FName ChildConnectBoneName;
    
    TRESGAME_API FTresBoneNames_e_ex011();
};

