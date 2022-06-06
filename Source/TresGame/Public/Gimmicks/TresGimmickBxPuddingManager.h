#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGimmickBxPuddingManager.generated.h"

class ATresGimmickBxPudding;

UCLASS()
class ATresGimmickBxPuddingManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<ATresGimmickBxPudding*> m_pPuddings;
    
    UPROPERTY(Transient)
    bool m_bEnableLauncher;
    
public:
    ATresGimmickBxPuddingManager();
    UFUNCTION(BlueprintCallable)
    void NotifyStop();
    
    UFUNCTION(BlueprintCallable)
    void NotifyEnableLauncher();
    
};

