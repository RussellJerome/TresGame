#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex005.generated.h"

class UParticleSystem;
class USQEX_ParticleAttachDataAsset;
class UParticleSystemComponent;

UCLASS()
class ATresEnemyPawn_e_ex005 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_EffDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SandSmokeEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SandTowerCoolDown;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_SandSmokeEffectComponent;
    
public:
    ATresEnemyPawn_e_ex005();
    UFUNCTION()
    void DebugSetEnableSandMode(int32 bDisable);
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugSetBT();
    
};

