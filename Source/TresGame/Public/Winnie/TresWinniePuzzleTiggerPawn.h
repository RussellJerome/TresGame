#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresWinniePuzzleCharacterPawn.h"
#include "TresWinniePuzzleTiggerPawn.generated.h"

UCLASS()
class ATresWinniePuzzleTiggerPawn : public ATresWinniePuzzleCharacterPawn {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float EntryJumpMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float EntryJumpHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float ReadyLandingRotateRate;
    
    UPROPERTY(EditDefaultsOnly)
    float SuperJumpStartRotateRate;
    
    UPROPERTY(EditDefaultsOnly)
    float SuperJumpMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float UnitsMoveStartJudgementDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float PlayBoundAnimationJudgementDistance;
    
    UPROPERTY(EditDefaultsOnly)
    FVector MinScale;
    
    UPROPERTY(EditDefaultsOnly)
    FVector MaxScale;
    
    ATresWinniePuzzleTiggerPawn();
};

