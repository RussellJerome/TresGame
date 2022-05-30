#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ETresAchievement.h"
#include "TresAchievementStatics.generated.h"

UCLASS(Abstract, BlueprintType, NotPlaceable)
class UTresAchievementStatics : public UObject {
    GENERATED_BODY()
public:
    UTresAchievementStatics();
    UFUNCTION(BlueprintCallable)
    static void TresUnlockAchievement(ETresAchievement ID, float Rate);
    
    UFUNCTION(BlueprintCallable)
    static void NoContinueClear();
    
    UFUNCTION(BlueprintPure)
    static bool IsBattleCheatCodeOnForAchievement();
    
};

