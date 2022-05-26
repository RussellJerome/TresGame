#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleSpecialMoveParam.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresWinniePuzzleSpecialMoveParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool UseSpecialMove;
    
    UPROPERTY(EditDefaultsOnly)
    int32 InvokeClusterMinUnitsNum;
    
    UPROPERTY(EditDefaultsOnly)
    float P1DistanceFromStartMin;
    
    UPROPERTY(EditDefaultsOnly)
    float P1DistanceFromStartMax;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveAngleRangeStartValue;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveAngleRangeEndValue;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* MoveLocusParticle;
    
    TRESGAME_API FTresWinniePuzzleSpecialMoveParam();
};

