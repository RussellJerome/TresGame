#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresSharedFixedCameraParam.h"
#include "WinniePuzzleShootType.h"
#include "WinniePuzzleStopElapsedTimeTiming.h"
#include "TresWinniePuzzleBase.generated.h"

class UTresWinniePuzzleGuideLine;
class UTresWinniePuzzlePlayerUnitController;
class UTresWinniePuzzleUnitController;
class UTresWinniePuzzleWallVolumeController;
class UTresWinniePuzzlePlayerController;
class UTresWinniePuzzlePowerGaugeController;
class UTresWinniePuzzleCharacterBonusController;
class UTresWinniePuzzleShootTimesController;
class UTresWinniePuzzleRule;
class UTresWinniePuzzleResult;
class UTresWinniePuzzleTurnController;
class UTresWinniePuzzleBonusController;
class UTresWinniePuzzleScoreController;
class UTresWinniePuzzleBucketController;
class UTresWinniePuzzleObjectPool;
class UTresWinniePuzzleSoundPlayer;

UCLASS(Abstract, NotPlaceable)
class ATresWinniePuzzleBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FTresSharedFixedCameraParam FixedCameraInitialParamRef;
    
    UPROPERTY(EditDefaultsOnly)
    FTresSharedFixedCameraParam DebugFixedCameraInitialParamRef;
    
    UPROPERTY(EditDefaultsOnly)
    float DebugFixedCameraMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float DebugFixedCameraFOVChangeSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float RaycastDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float AimingDegreeMin;
    
    UPROPERTY(EditDefaultsOnly)
    float AimingDegreeMax;
    
    UPROPERTY(EditDefaultsOnly)
    float AimingSpeedNormal;
    
    UPROPERTY(EditDefaultsOnly)
    float AimingSpeedAcceleration;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> AimingDegreeOffset;
    
    UPROPERTY(EditDefaultsOnly)
    WinniePuzzleShootType ShootType;
    
    UPROPERTY(EditDefaultsOnly)
    WinniePuzzleStopElapsedTimeTiming StopElapsedTimeTiming;
    
    UPROPERTY(EditDefaultsOnly)
    float GraceTimeOfStopElapsedTimeCounting;
    
    UPROPERTY(EditDefaultsOnly)
    FName SaveDataLabelName;
    
    UPROPERTY(EditDefaultsOnly)
    float UIAppearWaitTime;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresWinniePuzzleUnitController* UnitCtrl;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresWinniePuzzlePlayerUnitController* PlayerUnitCtrl;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresWinniePuzzleGuideLine* GuideLine;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresWinniePuzzleWallVolumeController* WallVolumeCtrl;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresWinniePuzzlePlayerController* PlayerCtrl;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresWinniePuzzlePowerGaugeController* PowerGaugeCtrl;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresWinniePuzzleCharacterBonusController* CharacterBonusCtrl;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresWinniePuzzleShootTimesController* ShootTimesCtrl;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresWinniePuzzleRule* Rule;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresWinniePuzzleResult* GameResult;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresWinniePuzzleTurnController* TurnCtrl;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresWinniePuzzleBonusController* BonusCtrl;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresWinniePuzzleScoreController* ScoreCtrl;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresWinniePuzzleBucketController* BucketCtrl;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresWinniePuzzleObjectPool* ObjectPool;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresWinniePuzzleSoundPlayer* SoundPlayer;
    
public:
    ATresWinniePuzzleBase();
};

