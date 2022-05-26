#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "TresSpawnActorData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTresSpawnActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AActor> GeneratedClass;
    
    TRESGAME_API FTresSpawnActorData();
};

