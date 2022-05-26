#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresWinniePuzzleComponentBase.h"
#include "WinniePuzzleBucketFillMoveType.h"
#include "UObject/NoExportTypes.h"
#include "TresWinniePuzzleBucketUnitPlacingParam.h"
#include "TresWinniePuzzleBucketController.generated.h"

class ATresWinniePuzzleBucket;
class UParticleSystem;
class ATresWinniePuzzleUnitBase;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzleBucketController : public UTresWinniePuzzleComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWinniePuzzleBucket> BucketRef;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWinniePuzzleBucket> SpecialBucketRef;
    
    UPROPERTY(EditDefaultsOnly)
    FVector BucketSpawnLocation;
    
    UPROPERTY(EditDefaultsOnly)
    FVector BucketLocation;
    
    UPROPERTY(EditDefaultsOnly)
    float BucketHorizontalSpacing;
    
    UPROPERTY(EditDefaultsOnly)
    float BucketVerticalSpacing;
    
    UPROPERTY(EditDefaultsOnly)
    WinniePuzzleBucketFillMoveType FillMoveType;
    
    UPROPERTY(EditDefaultsOnly)
    float FillWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float FillMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float FillMoveHeight;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<int32> FillOrderIndexes;
    
    UPROPERTY(EditDefaultsOnly)
    float FillMoveDelayTimeCorrectionValue;
    
    UPROPERTY(EditDefaultsOnly)
    float FillMoveDelayTimeCorrectionRandomValueMin;
    
    UPROPERTY(EditDefaultsOnly)
    float FillMoveDelayTimeCorrectionRandomValueMax;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* FillMoveLandingParticle;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* StoreUnitParticle;
    
    UPROPERTY(EditDefaultsOnly)
    float DecreaseWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float DecreaseMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float DecreaseMoveHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float ExistingBuckedMoveSpeedWhenDecrease;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresWinniePuzzleBucketUnitPlacingParam> UnitPlacingParam;
    
    UPROPERTY(EditDefaultsOnly)
    FVector PlacedUnitLocationOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float UnitPlaceLocationZSpacing;
    
private:
    UPROPERTY(Transient)
    TArray<ATresWinniePuzzleBucket*> m_pBuckets;
    
    UPROPERTY(Transient)
    TArray<ATresWinniePuzzleUnitBase*> m_pPlacedUnits;
    
    UPROPERTY(Transient)
    ATresWinniePuzzleBucket* m_pDecTargetBucket;
    
public:
    UTresWinniePuzzleBucketController();
};

