#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresWinniePuzzleComponentBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresWinniePuzzleSpecialMoveParam.h"
#include "WinniePuzzleVagetableUnitRoot.h"
#include "TresWinniePuzzleUnitControllerBase.generated.h"

class ATresWinniePuzzleUnitBase;
class ATresWinniePuzzleCollisionUnit;
class UParticleSystem;
class UAnimationAsset;
class UCurveFloat;
class ATresWinniePuzzleUnit;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzleUnitControllerBase : public UTresWinniePuzzleComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<ATresWinniePuzzleUnitBase>> UnitRef;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ClusterUnitsMaxNumWhenSpawnUnits;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MatchingCheckMaxTimesWhenSpawnUnits;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWinniePuzzleCollisionUnit> CollisionUnitRef;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FColor> UnitColorRef;
    
    UPROPERTY(EditDefaultsOnly)
    FVector UnitScale;
    
    UPROPERTY(EditDefaultsOnly)
    FVector UnitSpawnRefLocation;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator UnitRotationOffset;
    
    UPROPERTY(EditDefaultsOnly)
    int32 UnitMaxRows;
    
    UPROPERTY(EditDefaultsOnly)
    int32 UnitMaxColumns;
    
    UPROPERTY(EditDefaultsOnly)
    int32 UnitSpawnRows;
    
    UPROPERTY(EditDefaultsOnly)
    int32 UnitSpawnColumns;
    
    UPROPERTY(EditDefaultsOnly)
    float UnitHorizontalSpacing;
    
    UPROPERTY(EditDefaultsOnly)
    float UnitVerticalSpacing;
    
    UPROPERTY(EditDefaultsOnly)
    int32 RemoveTargetClusterUnitsMinNum;
    
    UPROPERTY(EditDefaultsOnly)
    float UnitRemovingHeightMin;
    
    UPROPERTY(EditDefaultsOnly)
    float UnitRemovingHeightMax;
    
    UPROPERTY(EditDefaultsOnly)
    float UnitRemovingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float UnitRemovingChangeScaleTiming;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FVector> UnitRemovingDestination;
    
    UPROPERTY(EditDefaultsOnly)
    float UnitRemovingDelayTimeCorrectionValue;
    
    UPROPERTY(EditDefaultsOnly)
    float UnitSpringOutHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float UnitSpringOutSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* SpringOutUnitLandingParticle;
    
    UPROPERTY(EditDefaultsOnly)
    float FlipUnitMovingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float FlipUnitMovingDelayTimeCorrectionValue;
    
    UPROPERTY(EditDefaultsOnly)
    float FlipUnitMovingStartJudgementDistance;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* FlipUnitParticle;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UAnimationAsset*> UnitAnimationAssets;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* TakenDamageParticle;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* TakenDamageParticleWhichGetInvolved;
    
    UPROPERTY(EditDefaultsOnly)
    float VibrationPowerWhenTakenDamage;
    
    UPROPERTY(EditDefaultsOnly)
    float VibrationTimeWhenTakenDamage;
    
    UPROPERTY(EditDefaultsOnly)
    float VibrationDelayTimeWhenTakenDamage;
    
    UPROPERTY(EditDefaultsOnly)
    FName BlinkParameterName;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* BlinkCurveWhenTakenDamage;
    
    UPROPERTY(EditDefaultsOnly)
    FTresWinniePuzzleSpecialMoveParam UnitRemovingSpecialMoveParam;
    
    UPROPERTY(EditDefaultsOnly)
    FVector UnitScaleForColorBlind;
    
    UPROPERTY(EditDefaultsOnly)
    float UnitScalingSpeedForColorBlind;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* UnitScalingCurveForColorBlind;
    
    UPROPERTY(EditDefaultsOnly)
    bool ResetUnitScaleWhenShoot;
    
    UPROPERTY(EditDefaultsOnly)
    int32 AutoGrowTurnNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 AutoGrowUnitNum;
    
    UPROPERTY(EditDefaultsOnly)
    float AutoGrowDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float AutoGrowMoveHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float AutoGrowMoveSpeed;
    
    UPROPERTY(Transient)
    TArray<ATresWinniePuzzleUnitBase*> m_Units;
    
    UPROPERTY(Transient)
    WinniePuzzleVagetableUnitRoot m_unitsRoot;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<ATresWinniePuzzleUnitBase>> m_removeTargetUnits;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<ATresWinniePuzzleUnitBase>> m_flipTargetUnits;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<ATresWinniePuzzleUnitBase>> m_slopeMovingUnits;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<ATresWinniePuzzleUnitBase>> m_clusterFindingTargetUnits;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<ATresWinniePuzzleUnitBase>> m_springOutUnits;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<ATresWinniePuzzleUnitBase>> m_autoGrowUnits;
    
    UPROPERTY(Transient)
    TArray<ATresWinniePuzzleCollisionUnit*> m_collisionUnitsWhenNSRoot;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<ATresWinniePuzzleUnit>> m_specialUnits;
    
public:
    UTresWinniePuzzleUnitControllerBase();
};

