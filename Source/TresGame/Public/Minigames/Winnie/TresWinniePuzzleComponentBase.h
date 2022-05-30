#pragma once
#include "CoreMinimal.h"
#include "TresWinnieActorComponentBase.h"
#include "TresWinniePuzzleComponentBase.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzleComponentBase : public UTresWinnieActorComponentBase {
    GENERATED_BODY()
public:
    UTresWinniePuzzleComponentBase();
};

