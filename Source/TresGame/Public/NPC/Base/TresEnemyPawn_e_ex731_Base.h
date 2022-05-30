#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex731_Base.generated.h"

class USQEX_ParticleAttachDataAsset;

UCLASS()
class ATresEnemyPawn_e_ex731_Base : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_EffDataAsset;
    
    ATresEnemyPawn_e_ex731_Base();
protected:
    UFUNCTION(BlueprintCallable)
    static void OnReceiveRemoteEvent(FName inEventName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCollisionChange(bool inEnabled);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool NotifyIceRevengerDamage(float inDamage);
    
    UFUNCTION(BlueprintPure)
    bool IsNowHiding();
    
    UFUNCTION(BlueprintPure)
    int32 GetWolfNum() const;
    
};

