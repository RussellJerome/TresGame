#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyGigasPawnBase.generated.h"

class UParticleSystem;
class USQEX_ParticleAttachDataAsset;
class ATresEnemyPawn_e_ex015;
class ATresVehiclePawnGigas;
class UParticleSystemComponent;

UCLASS()
class ATresEnemyGigasPawnBase : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresVehiclePawnGigas> m_VehiclePawnGigasClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEnemyPawn_e_ex015> m_e_ex015Class;
    
    UPROPERTY(EditAnywhere)
    bool m_pro_DisableGigasPC;
    
    UPROPERTY(EditAnywhere)
    bool m_pro_DieBlowTest;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_ShotNumMin;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_ShotNumMax;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_AimShotMinNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_AimShotMaxNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ShotBureDistMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ShotBureDistMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ShotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ShotHoseiAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ShotLoopMotionPlayRate;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_UltimaModeShotNumMin;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_UltimaModeShotNumMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_UltimaModeShotLoopMotionPlayRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_PunchMotionPlayRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_BombMotionPlayRate;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_CanbeUltimaModeHpPer;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_LightMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_LightMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_LightSpeedRate;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_pro_LightFadeOff;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DamageAddMotionInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_BoosterBlendRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_BoosterUpPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_BoosterDownPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_BattleEscapeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_UltimaModeBattleEscapeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AuraRate;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AuraEffData;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_EffDataAsset;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_AuraEff;
    
protected:
    UPROPERTY(Export)
    UParticleSystemComponent* m_VernierEff[6];
    
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_VernierEffData;
    
    ATresEnemyGigasPawnBase();
    UFUNCTION(BlueprintCallable)
    void SetStateMachineStep(int32 step);
    
    UFUNCTION(BlueprintCallable)
    bool IsUltimaMode();
    
    UFUNCTION(BlueprintCallable)
    bool IsFlyMode();
    
    UFUNCTION(BlueprintPure)
    FRotator GetWaistRotation() const;
    
    UFUNCTION(BlueprintPure)
    float GetUpperBodyBlendRate() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetStateMachineStep();
    
    UFUNCTION(BlueprintPure)
    float GetMachineGunBlendRate() const;
    
    UFUNCTION(BlueprintPure)
    float GetDamageAddBlendRate() const;
    
    UFUNCTION(BlueprintPure)
    float GetBoosterUpBlendRate() const;
    
    UFUNCTION(BlueprintPure)
    float GetBoosterTopMachineGunBlendRate() const;
    
    UFUNCTION(BlueprintPure)
    float GetBoosterTopBlendRate() const;
    
    UFUNCTION(BlueprintPure)
    float GetBoosterMachineGunBlendRate() const;
    
    UFUNCTION(BlueprintPure)
    float GetBoosterDownMachineGunBlendRate() const;
    
    UFUNCTION(BlueprintPure)
    float GetBoosterDownBlendRate() const;
    
    UFUNCTION(BlueprintPure)
    float GetBoosterAddBlendRate() const;
    
    UFUNCTION(BlueprintPure)
    float GetAimOffsetAlpha() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanbeUltimaMode();
    
};

