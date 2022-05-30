#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Tres_e_ex352_DarkShotSpawnParam.generated.h"

USTRUCT(BlueprintType)
struct FTres_e_ex352_DarkShotSpawnParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector Offset;
    
    TRESGAME_API FTres_e_ex352_DarkShotSpawnParam();
};

