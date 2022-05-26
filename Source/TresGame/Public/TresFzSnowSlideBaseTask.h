#pragma once
#include "CoreMinimal.h"
#include "TresTaskBase.h"
#include "TresFzSnowSlideBaseTask.generated.h"

class ATresPlacePrizeBase;

UCLASS(Abstract)
class UTresFzSnowSlideBaseTask : public UTresTaskBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChainBonusSec_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ChainBonusCountMax_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChainBonusUpRate_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ChainBonusCountSpan_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> TreasureGotIndices_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ATresPlacePrizeBase*> m_storeChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bInGameCreate_;
    
    UTresFzSnowSlideBaseTask();
    UFUNCTION(BlueprintCallable)
    void SetSnowCurlingTreasure();
    
    UFUNCTION(BlueprintCallable)
    void SetSnowCurlingScore(int32 Score, float fTime);
    
    UFUNCTION(BlueprintCallable)
    void RequestSnowCurlingResetChain();
    
    UFUNCTION(BlueprintPure)
    bool IsSnowCurlingSavedTreasure(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    ATresPlacePrizeBase* GetStoreChildrenPrize();
    
    UFUNCTION(BlueprintPure)
    float GetSnowCurlingTime();
    
    UFUNCTION(BlueprintPure)
    int32 GetSnowCurlingScore();
    
    UFUNCTION(BlueprintPure)
    int32 GetSnowCurlingSavedTreasureCount();
    
    UFUNCTION(BlueprintCallable)
    void DeleteAllPrize();
    
    UFUNCTION(BlueprintImplementableEvent)
    void DebugSetDummySec(float sec);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DebugSetCurrentScore(int32 Score);
    
    UFUNCTION(BlueprintCallable)
    float AddSnowCurlingScore();
    
    UFUNCTION(BlueprintCallable)
    void AddDelayInitializePrize(ATresPlacePrizeBase* pPlz, int32 totalNum, int32 generateNumPerFrame);
    
};

