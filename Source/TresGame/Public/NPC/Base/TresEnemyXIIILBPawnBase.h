#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIILPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyXIIILBPawnBase.generated.h"

class USoundBase;

UCLASS(Abstract)
class ATresEnemyXIIILBPawnBase : public ATresEnemyXIIILPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_WarpFadeInterpTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_RevengeVoiceDataList;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableRevengeVoice2D: 1;
    
public:
    ATresEnemyXIIILBPawnBase();
    UFUNCTION(BlueprintPure)
    FRotator GetWarpLocationEQSDotRotator() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetTargetVecEQSDotRotator() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetEQSDotRotator() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugSetDefaultBT();
    
};

