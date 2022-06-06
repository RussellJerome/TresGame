#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresWinniePuzzleCharacterPawn.h"
#include "TresWinniePuzzleGopherPawn.generated.h"

UCLASS()
class ATresWinniePuzzleGopherPawn : public ATresWinniePuzzleCharacterPawn {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FVector MinScale;
    
    UPROPERTY(EditDefaultsOnly)
    FVector MaxScale;
    
    ATresWinniePuzzleGopherPawn();
};

