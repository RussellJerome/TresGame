#pragma once
#include "CoreMinimal.h"
#include "TresAI_EBP_PhaseChangeDelegate.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "TresAIEventBattlePoint.generated.h"

UCLASS()
class TRESGAME_API ATresAIEventBattlePoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTresAI_EBP_PhaseChange OnPhaseChange;
    
    UPROPERTY(EditAnywhere)
    bool m_UseBattlePlayerEmotionManager;
    
    ATresAIEventBattlePoint();
    UFUNCTION(BlueprintCallable)
    void SetPhaseTag(const FGameplayTag& InTag);
    
    UFUNCTION(BlueprintPure)
    bool IsPhaseTag(const FGameplayTag& InTag) const;
    
};

