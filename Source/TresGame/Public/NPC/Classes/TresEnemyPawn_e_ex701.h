#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex701.generated.h"

class USQEX_ParticleAttachDataAsset;

UCLASS()
class ATresEnemyPawn_e_ex701 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FName m_BodyCollisionNames[3];
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_GroundEffectAttachDataAsset;
    
public:
    ATresEnemyPawn_e_ex701();
    UFUNCTION(BlueprintCallable)
    void OnRetrySkip();
    
    UFUNCTION(BlueprintPure)
    float GetRushAddAngle() const;
    
    UFUNCTION()
    int32 GetNumTarHand() const;
    
    UFUNCTION(Exec)
    void DebugSetRushNum(int32 Num);
    
    UFUNCTION(Exec)
    void DebugSetEnableTarHandAlwaysEnd(int32 bEnable);
    
};

