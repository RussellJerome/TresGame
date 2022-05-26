#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresWinniePuzzleCharacterPawn.h"
#include "TresWinniePuzzleRabbitPawn.generated.h"

UCLASS()
class ATresWinniePuzzleRabbitPawn : public ATresWinniePuzzleCharacterPawn {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float EnterAnimationPlayRate;
    
    UPROPERTY(EditDefaultsOnly)
    float EnterMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FVector EnterLocationOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FVector EnterStartLocation;
    
    UPROPERTY(EditDefaultsOnly)
    FVector HarvestCountDownMoveStartLocation;
    
    UPROPERTY(EditDefaultsOnly)
    FVector HarvestCountDownMoveEndLocation;
    
    UPROPERTY(EditDefaultsOnly)
    float HarvestJumpMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float HarvestJumpHeight;
    
    UPROPERTY(EditDefaultsOnly)
    FVector HarvestEndLocation;
    
    UPROPERTY(EditDefaultsOnly)
    float RotateRate;
    
    UPROPERTY(EditDefaultsOnly)
    FVector MinScale;
    
    UPROPERTY(EditDefaultsOnly)
    FVector MaxScale;
    
    ATresWinniePuzzleRabbitPawn();
};

