#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresWinniePuzzleUnitControllerBase.h"
#include "WinniePuzzleUnitAppearDelayType.h"
#include "WinniePuzzleUnitAppearColumnDependencyDirection.h"
#include "WinniePuzzleUnitFillType.h"
#include "TresWinniePuzzleSpecialUnitParam.h"
#include "TresWinniePuzzleUnitController.generated.h"

class ATresWinniePuzzleCollisionActor;
class UParticleSystem;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzleUnitController : public UTresWinniePuzzleUnitControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float AppearDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float AppearMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float AppearWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    WinniePuzzleUnitAppearDelayType AppearDelayType;
    
    UPROPERTY(EditDefaultsOnly)
    float AppearDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    WinniePuzzleUnitAppearColumnDependencyDirection AppearColumnDependencyDirection;
    
    UPROPERTY(EditDefaultsOnly)
    float AppearDelayTimeStart;
    
    UPROPERTY(EditDefaultsOnly)
    float AppearDelayTimeEnd;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* GrowParticle;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* UnitsMatchingParticle;
    
    UPROPERTY(EditDefaultsOnly)
    float GotoFillUnitsPhaseWaitTimeFromStartRemovingMove;
    
    UPROPERTY(EditDefaultsOnly)
    WinniePuzzleUnitFillType FillType;
    
    UPROPERTY(EditDefaultsOnly)
    float FillDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float FillMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float SpawnFilledUnitsWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float SameKindUnitRemovingDelayTimeCorrectionValue;
    
    UPROPERTY(EditDefaultsOnly)
    int32 RemovedUnitsNumMax;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ComboOccurrenceDifficulty;
    
    UPROPERTY(EditDefaultsOnly)
    bool UseSpecialRemovingCondition;
    
    UPROPERTY(EditDefaultsOnly)
    FTresWinniePuzzleSpecialUnitParam SpecialUnitParam;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWinniePuzzleCollisionActor> CollisionActorRef;
    
private:
    UPROPERTY(Transient)
    TArray<ATresWinniePuzzleCollisionActor*> m_pCollisionActors;
    
public:
    UTresWinniePuzzleUnitController();
};

