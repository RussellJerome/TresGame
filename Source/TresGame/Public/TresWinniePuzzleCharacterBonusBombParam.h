#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleBombInterferedParam.h"
#include "UObject/NoExportTypes.h"
#include "TresWinniePuzzleBombScoreOffsetParam.h"
#include "TresWinniePuzzleCharacterBonusBombParam.generated.h"

class UCurveFloat;
class UParticleSystem;
class USQEX_ParticleAttachDataAsset;

USTRUCT(BlueprintType)
struct FTresWinniePuzzleCharacterBonusBombParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 FailTimes;
    
    UPROPERTY(EditDefaultsOnly)
    int32 FailTimesAdditionalInvocation;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<int32> TargetExcludeRows;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<int32> TargetExcludeColumns;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float FloatMoveDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float SuccessFloatMoveDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float FloatMoveVerticalAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float FloatMoveHorizontalAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float FloatMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float FloatMoveDelayTimeCorrectionValue;
    
    UPROPERTY(EditDefaultsOnly)
    float FloatTime;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* FloatMoveCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveHeightMin;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveHeightMax;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveDelayTimeCorrectionValue;
    
    UPROPERTY(EditDefaultsOnly)
    float GotoFillUnitsPhaseWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresWinniePuzzleBombScoreOffsetParam> ScoreOffset;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresWinniePuzzleBombScoreOffsetParam> ScoreOffsetOnSuccess;
    
    UPROPERTY(EditDefaultsOnly)
    FVector ReservationLocation;
    
    UPROPERTY(EditDefaultsOnly)
    FVector FirstAppearLocation;
    
    UPROPERTY(EditDefaultsOnly)
    FVector FirstLocationWhenBonusOccurring;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* AppearParticle;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* MoveParticle;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* ComeOutParticleOnReadyAttachData;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* ComeOutParticleOnDiveAttachData;
    
    UPROPERTY(EditDefaultsOnly)
    FTresWinniePuzzleBombInterferedParam InterferedParam;
    
    TRESGAME_API FTresWinniePuzzleCharacterBonusBombParam();
};

