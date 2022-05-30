#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleComponentBase.h"
#include "UObject/NoExportTypes.h"
#include "TresWinniePuzzlePlayerUnitControllerBase.generated.h"

class UParticleSystem;
class ATresWinniePuzzleUnit;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzlePlayerUnitControllerBase : public UTresWinniePuzzleComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FVector PlayerUnitScale;
    
    UPROPERTY(EditDefaultsOnly)
    int32 SpawnUnitNum;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FVector> UnitsLocationNorth;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FVector> UnitsLocationSouth;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FVector> UnitsLocationWest;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FVector> UnitsLocationEast;
    
    UPROPERTY(EditDefaultsOnly)
    FVector NewPlayerUnitSpawnLocation;
    
    UPROPERTY(EditDefaultsOnly)
    float UnitMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float UnitMoveWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float UnitMoveWaitTimeForStrike;
    
    UPROPERTY(EditDefaultsOnly)
    float UnitSwitchMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float UnitSwitchMoveHeight;
    
    UPROPERTY(EditDefaultsOnly)
    FVector GhostUnitLocationOffset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* GhostUnitParticle;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* PlayerUnitMovingLocusParticle;
    
    UPROPERTY(EditDefaultsOnly)
    bool IsUpdateUnitRotation;
    
    UPROPERTY(Transient)
    TArray<ATresWinniePuzzleUnit*> m_Units;
    
public:
    UTresWinniePuzzlePlayerUnitControllerBase();
};

