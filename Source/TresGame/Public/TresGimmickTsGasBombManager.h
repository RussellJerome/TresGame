#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickTsGasBombManager.generated.h"

class ATresCharPawnBase;

UCLASS(Config=Game)
class ATresGimmickTsGasBombManager : public ATresGimmickActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_VoiceEffectTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_VoiceEffectFadeTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_EffectRange;
    
    ATresGimmickTsGasBombManager();
    UFUNCTION(BlueprintCallable)
    void StartVoiceEffect(FVector BaseLocation, float EffectRange);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyChangeVoiceEffect(bool bEffected);
    
    UFUNCTION(BlueprintPure)
    bool IsPawnEffected(ATresCharPawnBase* Pawn) const;
    
    UFUNCTION(BlueprintCallable)
    void EndVoiceEffectImmediately();
    
};

