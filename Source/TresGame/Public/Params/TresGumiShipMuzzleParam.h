#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipMuzzleParam.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipMuzzleParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector m_vOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_Rotate;
    
    TRESGAME_API FTresGumiShipMuzzleParam();
};

