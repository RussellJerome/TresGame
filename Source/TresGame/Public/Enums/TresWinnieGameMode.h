#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresGameModeBase.h"
#include "UObject/NoExportTypes.h"
#include "TresWinnieGameMode.generated.h"

class ATresWinniePuzzleManager;
class ATresWinniePuzzleBase;
class ATresWinniePuzzlePlayerPawn;

UCLASS(NonTransient)
class ATresWinnieGameMode : public ATresGameModeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWinniePuzzleManager> PuzzleManagerRef;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWinniePuzzleBase> PuzzleGameRef;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWinniePuzzlePlayerPawn> PlayerPawnRef;
    
    UPROPERTY(EditDefaultsOnly)
    FVector PlayerPawnSpawnLocationRef;
    
private:
    UPROPERTY(Transient)
    ATresWinniePuzzleManager* m_pPuzzleManager;
    
    UPROPERTY(Transient)
    ATresWinniePuzzlePlayerPawn* m_pPlayerPawn;
    
public:
    ATresWinnieGameMode();
    UFUNCTION(BlueprintPure)
    ATresWinniePuzzleManager* GetPuzzleManager() const;
    
};

