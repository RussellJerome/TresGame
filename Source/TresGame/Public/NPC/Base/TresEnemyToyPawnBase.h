#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "ETresEnemyToyKind.h"
#include "TresEnemyToyPawnBase.generated.h"

class USQEX_ParticleAttachDataAsset;

UCLASS(Abstract)
class ATresEnemyToyPawnBase : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemyToyKind> m_ToyKind;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsEnableStartPossessionMaterial: 1;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_PossessionEffect;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ResetSlopeSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsBlowDamageMotionLoop: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsTossDamageMotionLoop: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShootingRideDamageSidePower;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShootingRideDamageSideBrake;
    
public:
    ATresEnemyToyPawnBase();
    UFUNCTION(BlueprintCallable)
    void EndToyWaitMode();
    
};

