#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresWinniePuzzleComponentBase.h"
#include "TresWinniePuzzleBossController.generated.h"

class ATresWinniePuzzleUnitBase;
class UParticleSystem;
class UCurveFloat;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzleBossController : public UTresWinniePuzzleComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool IsBossUnitExist;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWinniePuzzleUnitBase> BossUnitRef;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWinniePuzzleUnitBase> BossCollisionUnitRef;
    
    UPROPERTY(EditDefaultsOnly)
    int32 BossUnitRow;
    
    UPROPERTY(EditDefaultsOnly)
    int32 BossUnitColumn;
    
    UPROPERTY(EditDefaultsOnly)
    bool SpringOutObstacleUnit;
    
    UPROPERTY(EditDefaultsOnly)
    float ObstacleUnitMovingDelayTimeCorrectionValue;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* TakenDamageParticle;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* FinalDamageParticle;
    
    UPROPERTY(EditDefaultsOnly)
    int32 HitPointMax;
    
    UPROPERTY(EditDefaultsOnly)
    float VibrationPowerWhenTakenDamage;
    
    UPROPERTY(EditDefaultsOnly)
    float VibrationTimeWhenTakenDamage;
    
    UPROPERTY(EditDefaultsOnly)
    FName BlinkParameterName;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* BlinkCurveWhenTakenDamage;
    
public:
    UTresWinniePuzzleBossController();
};

