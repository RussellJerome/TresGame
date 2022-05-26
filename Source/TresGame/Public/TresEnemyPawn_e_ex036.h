#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex036.generated.h"

class ATresAccessory_e_ex036_WaterBallManager;

UCLASS()
class ATresEnemyPawn_e_ex036 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    bool m_bMagicSquare;
    
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresAccessory_e_ex036_WaterBallManager> m_pro_WaterBallManagerClass;
    
protected:
    UPROPERTY()
    ATresAccessory_e_ex036_WaterBallManager* m_WaterBallManager;
    
public:
    ATresEnemyPawn_e_ex036();
    UFUNCTION(BlueprintCallable)
    bool IsMagicSquare();
    
    UFUNCTION(BlueprintPure)
    bool IsFinMoveUp() const;
    
    UFUNCTION(BlueprintCallable)
    void Debug_ForcingCancelMagicSquare();
    
};

