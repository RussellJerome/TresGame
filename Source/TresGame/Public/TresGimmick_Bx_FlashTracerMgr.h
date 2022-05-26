#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETresGimmickBxFlashTracerCourse.h"
#include "ETresUIHudBaymaxResult.h"
#include "TresGimmick_Bx_FlashTracerMgr.generated.h"

UCLASS(Abstract)
class ATresGimmick_Bx_FlashTracerMgr : public AActor {
    GENERATED_BODY()
public:
    ATresGimmick_Bx_FlashTracerMgr();
    UFUNCTION(BlueprintCallable)
    void SetHighScore(ETresGimmickBxFlashTracerCourse Course, int32 Score);
    
    UFUNCTION(BlueprintCallable)
    void SetClearTime(ETresGimmickBxFlashTracerCourse Course, float Time);
    
    UFUNCTION(BlueprintCallable)
    void OpenResult(float Time, int32 Score, int32 Bonus, ETresUIHudBaymaxResult rankKind, bool RecordTime, bool RecordScore, ETresGimmickBxFlashTracerCourse Course);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnClosedResult();
    
    UFUNCTION(BlueprintPure)
    bool IsValidDebugRank() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHighScore(ETresGimmickBxFlashTracerCourse Course) const;
    
    UFUNCTION(BlueprintPure)
    ETresUIHudBaymaxResult GetDebugRank() const;
    
    UFUNCTION(BlueprintPure)
    float GetClearTime(ETresGimmickBxFlashTracerCourse Course) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void DebugSetSec(float sec);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DebugSetScore(int32 Score);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DebugForceFinish();
    
};

