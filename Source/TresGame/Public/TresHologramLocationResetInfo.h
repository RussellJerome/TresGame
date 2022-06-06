#pragma once
#include "CoreMinimal.h"
#include "TresHologramLocationResetInfo.generated.h"

class ATresPhotoHologramActor;

USTRUCT(BlueprintType)
struct FTresHologramLocationResetInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresPhotoHologramActor* m_pTargetActor;
    
    TRESGAME_API FTresHologramLocationResetInfo();
};

