#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresNpcAIBattleController.generated.h"

class UTresNpcAIStyle_Battle;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresNpcAIBattleController : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<UTresNpcAIStyle_Battle*> m_BattleStyleList;
    
public:
    UTresNpcAIBattleController();
protected:
    UFUNCTION()
    void OnChangeBattleModeFunc(bool bBattleMode);
    
};

