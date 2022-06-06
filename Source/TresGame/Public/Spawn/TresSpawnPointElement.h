#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresSpawnPointElement.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresSpawnPointElement {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector m_Position;
    
    FTresSpawnPointElement();
};

