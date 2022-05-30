#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzlePlayerUnitControllerBase.h"
#include "TresWinniePuzzleGhostUnitStraightMoveJudgementRowRange.h"
#include "TresWinniePuzzlePlayerUnitController.generated.h"

class UParticleSystem;
class ATresWinniePuzzleUnit;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzlePlayerUnitController : public UTresWinniePuzzlePlayerUnitControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool EnableAppearPerform;
    
    UPROPERTY(EditDefaultsOnly)
    bool SpawnAppearParticle;
    
    UPROPERTY(EditDefaultsOnly)
    float AppearDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float AppearMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresWinniePuzzleGhostUnitStraightMoveJudgementRowRange> GhostUnitStraightMoveJudgementRowRange;
    
    UPROPERTY(EditDefaultsOnly)
    float CopyUnitMoveWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* PlayerUnitMoveDirectionParticle;
    
    UPROPERTY(EditDefaultsOnly)
    bool ShowPlayerUnitUnmovableParticle;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* PlayerUnitUnmovableParticle;
    
private:
    UPROPERTY(Transient)
    TArray<ATresWinniePuzzleUnit*> m_pCopyUnits;
    
public:
    UTresWinniePuzzlePlayerUnitController();
};

