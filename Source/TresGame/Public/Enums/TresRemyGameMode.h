#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresGameModeBase.h"
#include "UObject/NoExportTypes.h"
#include "TresRemyGameMode.generated.h"

class ATresRemyGameManager;
class ATresRemyPawn;
class ATresRemyPawnBase;
class UTresRemyData;

UCLASS(NonTransient)
class ATresRemyGameMode : public ATresGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresRemyGameManager> GameManagerRef;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresRemyPawn> PawnRef;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresRemyPawnBase> RemyRatPawnRef;
    
    UPROPERTY(EditDefaultsOnly)
    FVector PawnInitialLocationRef;
    
    UPROPERTY(EditDefaultsOnly)
    UTresRemyData* DataRef;
    
private:
    UPROPERTY(Transient)
    ATresRemyGameManager* m_pGameManager;
    
    UPROPERTY(Transient)
    ATresRemyPawn* m_pPawn;
    
    UPROPERTY(Transient)
    ATresRemyPawnBase* m_pRemyRatPawn;
    
public:
    ATresRemyGameMode();
    UFUNCTION(BlueprintPure)
    ATresRemyPawnBase* GetRemyRatPawn() const;
    
    UFUNCTION(BlueprintPure)
    ATresRemyPawn* GetPawn() const;
    
    UFUNCTION(BlueprintPure)
    ATresRemyGameManager* GetGameManager() const;
    
    UFUNCTION(BlueprintPure)
    UTresRemyData* GetData() const;
    
};

