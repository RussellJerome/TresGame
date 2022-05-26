#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex703.generated.h"

class UParticleSystem;
class USceneComponent;
class USQEX_ParticleAttachDataAsset;
class UCurveFloat;

UCLASS()
class ATresEnemyPawn_e_ex703 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* ProjectileSpawnComponent;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SpawnLocationTarParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_MoveEffectAttachDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ShadowMoveParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ShadowMoveGlowParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LifeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShadowEffectSpawnDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_AppearCurveData;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_DieCurveData;
    
public:
    ATresEnemyPawn_e_ex703();
    UFUNCTION()
    bool IsParentNormalMode() const;
    
    UFUNCTION()
    bool IsParentBirdMode() const;
    
    UFUNCTION()
    bool IsLifeOver() const;
    
};

