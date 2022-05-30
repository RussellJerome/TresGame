#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresWinniePuzzleCharacterPawn.generated.h"

UCLASS()
class ATresWinniePuzzleCharacterPawn : public ATresCharPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FVector InitialLocationRef;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator InitialRotationRef;
    
    UPROPERTY(EditDefaultsOnly)
    FVector StandByLocationRef;
    
public:
    ATresWinniePuzzleCharacterPawn();
};

