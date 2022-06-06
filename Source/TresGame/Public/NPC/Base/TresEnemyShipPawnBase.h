#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyShip.h"
#include "ETresEnemyShipSubType.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "EnemyShipCoreData.h"
#include "EnemyShipDustEffectData.h"
#include "TresEnemyShipCoreSpawnData.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyShipFadeParameter.h"
#include "TresEnemyShipPawnBase.generated.h"

class UTresSkeletalMeshComponent;
class UParticleSystemComponent;
class UTresMapMarkerComponent;
class UTresCAShipComponent;
class UParticleSystem;
class USQEX_ParticleAttachDataAsset;

UCLASS()
class ATresEnemyShipPawnBase : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    ETresEnemyShipSubType m_ShipSubType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShipSpeedDeclRateOnDestroyedMast;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShipCoreDamageWeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShipMastDamageWeight;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDeadOnShipCoreAllDestroyed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShipMastBlendMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpankerCheckSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpankerParamSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_KnockBackMovePower;
    
    UPROPERTY(EditDefaultsOnly)
    float m_KnockBackRollPower;
    
    UPROPERTY(EditDefaultsOnly)
    float m_KnockBackYawPower;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SurfaceEffectDispSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SlowDownSpeedPerHitWindChaser;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SlowDownTimerAfterWindChaser;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_MaxCannonNum;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_CannonCenterOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LifeTimeDustEffect;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_MaxNumDustEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bDisableMastDamage: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bIsMastHpLimitOne: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bSpawnedChildInheritGroup;
    
    UPROPERTY(Transient)
    TArray<FEnemyShipCoreData> m_CoreDataArray;
    
    UPROPERTY(Transient)
    TArray<FEnemyShipDustEffectData> m_DustEffDataArray;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresMapMarkerComponent* m_MapMarker;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresSkeletalMeshComponent* m_MastMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresSkeletalMeshComponent* m_DriverMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UParticleSystemComponent* m_SeaSurfaceParticle;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresCAShipComponent* m_CAShipComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UParticleSystemComponent* m_ExpParticleComponent;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CoreHitParticleAsset01;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CoreHitParticleAsset02;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CoreHitParticleAsset03;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_MastHitParticle;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_BodyHitParticle;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DustOnHitParticle;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CoreDestroyParticleAsset01;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CoreDestroyParticleAsset02;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CoreDestroyParticleAsset03;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CoreParticleAsset01;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CoreParticleAsset02;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CoreParticleAsset03;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CoreThonParticleFrontAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CoreThonParticleSideAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CoreThonParticleBackAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SinkingExplosion;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EnterDestroyParticle;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemyShipCoreSpawnData> m_CoreParamArray;
    
    UPROPERTY(EditAnywhere)
    int32 m_MinSpawnCoreNum;
    
    UPROPERTY(EditAnywhere)
    int32 m_MaxSpawnCoreNum;
    
    UPROPERTY(EditAnywhere)
    float m_SpawnCoreWidth;
    
    UPROPERTY(EditAnywhere)
    int32 m_CoreItemTypeSpawnWeight01;
    
    UPROPERTY(EditAnywhere)
    int32 m_CoreItemTypeSpawnWeight02;
    
    UPROPERTY(EditAnywhere)
    int32 m_CoreItemTypeSpawnWeight03;
    
    UPROPERTY(EditAnywhere)
    FName m_CoreParamName01;
    
    UPROPERTY(EditAnywhere)
    FName m_CoreParamName02;
    
    UPROPERTY(EditAnywhere)
    FName m_CoreParamName03;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval m_StopAIOnMastBrakeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTresEnemyShipFadeParameter m_FadeParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USQEX_ParticleAttachDataAsset* m_BreakMastEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_BreakMastGroupId;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 m_BreakMastNotifyID;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 m_DisableForceFadeOutOnDeadNotifyID;
    
public:
    ATresEnemyShipPawnBase();
    UFUNCTION(BlueprintCallable)
    void SetShipAttackHitCollisionEnabled(bool bEnable);
    
    UFUNCTION(BlueprintPure)
    bool IsWarpOut() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSummonedShip() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSeaGodModeTidalWave() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSeaGodMode() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingBreakingMast() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFinishedOfWeaponAttack() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDestroyedMast() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBattleModeCapturePlayerShip() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAliveShipCore(TEnumAsByte<ETresEnemyShip::Type> coreType) const;
    
    UFUNCTION(BlueprintPure)
    float GetSpankerMoveBlendRate() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetShipDamageCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetShipCoreNum() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMemberCountOfBlackShipSmall() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMemberCountOfBlackShipLarge() const;
    
    UFUNCTION(BlueprintPure)
    float GetMastMoveBlendRate() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMastHP() const;
    
    UFUNCTION(BlueprintPure)
    bool EnableSpawnBlackShipLarge() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_SetFadeIn(float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void BP_ForceSetFadeOut();
    
};

