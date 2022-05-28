#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresDieParam_e_ex020.h"
#include "TresEnemyPawn_e_ex020.generated.h"

class UTresEnemyToyComponent;

UCLASS()
class ATresEnemyPawn_e_ex020 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FTresDieParam_e_ex020 m_DieParam;
    
public:
    ATresEnemyPawn_e_ex020();
    UFUNCTION(BlueprintPure)
    void GetToyComponentList(TArray<UTresEnemyToyComponent*>& OutList) const;
    
    UFUNCTION()
    int32 GetNumToyPawnActiveOnly() const;
    
    UFUNCTION()
    int32 GetNumToyPawn() const;
    
};

