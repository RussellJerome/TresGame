#pragma once
#include "CoreMinimal.h"
#include "TresSharedActor.h"
#include "WinniePuzzleType.h"
#include "TresWinniePuzzleManager.generated.h"

class UTresWinnieData;
class ATresWinniePuzzleBase;
class ATresWinniePuzzleWallVolume;
class ATresWinniePlayerController;

UCLASS()
class ATresWinniePuzzleManager : public ATresSharedActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UTresWinnieData* DataRef;
    
    UPROPERTY(EditDefaultsOnly)
    FName FieldMapName;
    
    UPROPERTY(EditDefaultsOnly)
    FName FieldMapPlayerStartTagName;
    
    UPROPERTY(EditDefaultsOnly)
    FName VegetableFieldMapPlayerStartTagName;
    
    UPROPERTY(EditDefaultsOnly)
    FName FruitFieldMapPlayerStartTagName;
    
    UPROPERTY(EditDefaultsOnly)
    FName FlowerFieldMapPlayerStartTagName;
    
    UPROPERTY(EditDefaultsOnly)
    FName SaveDataFlagName;
    
private:
    UPROPERTY(Transient)
    ATresWinniePuzzleBase* m_pPuzzle;
    
    UPROPERTY(Transient)
    TArray<ATresWinniePuzzleWallVolume*> m_wallVolumes;
    
public:
    ATresWinniePuzzleManager();
    UFUNCTION(BlueprintCallable)
    void StoreWallVolume(TArray<ATresWinniePuzzleWallVolume*> volumes);
    
    UFUNCTION(BlueprintPure)
    WinniePuzzleType GetPuzzleType() const;
    
    UFUNCTION(BlueprintPure)
    ATresWinniePuzzleBase* GetPuzzle() const;
    
    UFUNCTION(BlueprintPure)
    ATresWinniePlayerController* GetController() const;
    
};

