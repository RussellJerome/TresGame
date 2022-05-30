#pragma once
#include "CoreMinimal.h"
#include "TresSharedCheatManager.h"
#include "TresRemyCheatManager.generated.h"

UCLASS()
class UTresRemyCheatManager : public UTresSharedCheatManager {
    GENERATED_BODY()
public:
    UTresRemyCheatManager();
private:
    UFUNCTION(Exec)
    void ToggleRemyUMGDebugInfo();
    
public:
    UFUNCTION(Exec)
    void RemySetToNextRank();
    
private:
    UFUNCTION(Exec)
    void RemyResetUnlockDishLevelPoint();
    
    UFUNCTION(Exec)
    void RemyMakeStar5NormalRecipeAllGreatSuccess();
    
    UFUNCTION(Exec)
    void RemyMakeStar4NormalRecipeAllGreatSuccess();
    
    UFUNCTION(Exec)
    void RemyMakeStar3NormalRecipeAllGreatSuccess();
    
    UFUNCTION(Exec)
    void RemyMakeStar2NormalRecipeAllGreatSuccess();
    
    UFUNCTION(Exec)
    void RemyMakeStar1NormalRecipeAllGreatSuccess();
    
public:
    UFUNCTION(Exec)
    void RemyMakeAllSpecialRecipeGreatSuccess();
    
    UFUNCTION(Exec)
    void RemyMakeAllNormalRecipeGreatSuccess();
    
    UFUNCTION(Exec)
    void RemyGetAllSpecialRecipeFoodstuff10();
    
private:
    UFUNCTION(Exec)
    void RemyGetAllSpecialRecipeFoodstuff1();
    
public:
    UFUNCTION(Exec)
    void RemyGetAllNormalRecipeFoodstuff10();
    
private:
    UFUNCTION(Exec)
    void RemyGetAllNormalRecipeFoodstuff1();
    
    UFUNCTION(Exec)
    void RemyChangeShowFinishOperationUITiming(int32 timing);
    
    UFUNCTION(Exec)
    void RemyAddUnlockDishLevelPoint(int16 Point);
    
};

