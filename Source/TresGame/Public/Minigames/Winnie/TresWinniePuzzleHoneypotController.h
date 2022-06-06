#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresWinniePuzzleHoneypotFillProbabilityParam.h"
#include "TresWinniePuzzleComponentBase.h"
#include "TresWinniePuzzleHoneypotFillRowsParam.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresWinniePuzzleHoneypotGaugeParam.h"
#include "TresWinniePuzzleHoneypotController.generated.h"

class ATresWinniePuzzleUnitBase;
class UParticleSystem;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzleHoneypotController : public UTresWinniePuzzleComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWinniePuzzleUnitBase> HoneypotRef;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* HighlightParticle;
    
    UPROPERTY(EditDefaultsOnly)
    FColor HighlightParticleColor;
    
    UPROPERTY(EditDefaultsOnly)
    int32 SpawnNumOnGameStart;
    
    UPROPERTY(EditDefaultsOnly)
    int32 SpawnMaxNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 SpawnNumOnGameStartOnChallengeMode;
    
    UPROPERTY(EditDefaultsOnly)
    int32 SpawnMaxColumns;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<int32> SpawnExcludeRows;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<int32> SpawnExcludeColumns;
    
    UPROPERTY(EditDefaultsOnly)
    bool SpawnInSameRow;
    
    UPROPERTY(EditDefaultsOnly)
    float StraightDropEndLocationX;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* StraightDropEndParticle;
    
    UPROPERTY(EditDefaultsOnly)
    FVector MoveDestWhenDrop;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveHeightMinWhenDrop;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveHeightMaxWhenDrop;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveSpeedWhenDrop;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresWinniePuzzleHoneypotFillProbabilityParam> FillProbabilityParam;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<int32, FTresWinniePuzzleHoneypotFillRowsParam> FillAreaDividePatterns;
    
    UPROPERTY(EditDefaultsOnly)
    float FillDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveSpeedWhenFill;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* MovedParticleWhenFill;
    
    UPROPERTY(EditDefaultsOnly)
    FTresWinniePuzzleHoneypotGaugeParam HoneypotGaugeParam;
    
private:
    UPROPERTY(Transient)
    TArray<ATresWinniePuzzleUnitBase*> m_pDropHoneyPots;
    
public:
    UTresWinniePuzzleHoneypotController();
};

