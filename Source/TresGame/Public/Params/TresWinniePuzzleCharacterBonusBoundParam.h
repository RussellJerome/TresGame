#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleBoundStyleParam.h"
#include "UObject/NoExportTypes.h"
#include "TresWinniePuzzleCharacterBonusBoundParam.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresWinniePuzzleCharacterBonusBoundParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float MoveWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveHeightMin;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveHeightMax;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveDelayTimeCorrectionValue;
    
    UPROPERTY(EditDefaultsOnly)
    float WaitBoundAnimationTime;
    
    UPROPERTY(EditDefaultsOnly)
    float GotoFillUnitsPhaseWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresWinniePuzzleBoundStyleParam> StyleParam;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresWinniePuzzleBoundStyleParam> StyleParamAdditionalInvocation;
    
    UPROPERTY(EditDefaultsOnly)
    bool UseSpecialMove;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* BoundParticle;
    
    UPROPERTY(EditDefaultsOnly)
    float DistanceWithBoundPointWhenSpawnBoundParticle;
    
    UPROPERTY(EditDefaultsOnly)
    FVector ReservationLocation;
    
    TRESGAME_API FTresWinniePuzzleCharacterBonusBoundParam();
};

