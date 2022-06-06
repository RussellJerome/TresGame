#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex711.generated.h"

class UCurveFloat;
class ATresProjectileBase;
class USQEX_ParticleAttachDataAsset;
class AActor;
class UTresSkeletalMeshComponent;
class UParticleSystemComponent;
class ATresGimmick_e_ex711_PhysicsActorManager;
class UTresParam_e_ex711;
class UParticleSystem;
class AStaticMeshActor;
class ATresEnemyPawn_e_ex711_Head;

UCLASS()
class ATresEnemyPawn_e_ex711 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_RadioTowerOpenCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_RadioTowerCloseCurve;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_EffDataAsset;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* MyCollMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* MyCollMesh1;
    
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresGimmick_e_ex711_PhysicsActorManager> m_pro_PhysicsActorManagerClass;
    
protected:
    UPROPERTY()
    ATresGimmick_e_ex711_PhysicsActorManager* m_PhysicsActorManager;
    
    UPROPERTY()
    TArray<TWeakObjectPtr<ATresProjectileBase>> m_MissileArray;
    
    UPROPERTY()
    AActor* m_pWeatherActor;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_WeatherFirstEff;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_WeatherSecondEff;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_WeatherThirdEff;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresParam_e_ex711> m_CommonParam;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_PhysicsActorResetEff;
    
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_PhysicsActorResetEffData;
    
protected:
    UPROPERTY()
    AStaticMeshActor* m_pPlayerPushCollActor;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEnemyPawn_e_ex711_Head> m_HeadPawnClass;
    
public:
    ATresEnemyPawn_e_ex711();
protected:
    UFUNCTION(BlueprintCallable)
    void SetCommonCounterZero();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsPlayerFloorBoss();
    
    UFUNCTION(BlueprintCallable)
    bool IsOutputRise();
    
    UFUNCTION(BlueprintPure)
    float GetVerticalMissileMotBlendRate() const;
    
    UFUNCTION(BlueprintPure)
    float GetRadioTowerRotXRate() const;
    
    UFUNCTION(BlueprintPure)
    float GetRadioTowerRFRotX() const;
    
    UFUNCTION(BlueprintPure)
    float GetRadioTowerRBRotX() const;
    
    UFUNCTION(BlueprintPure)
    float GetRadioTowerLFRotX() const;
    
    UFUNCTION(BlueprintPure)
    float GetRadioTowerLBRotX() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerHopActorGroupNo();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerAthleticFlowGroupNo();
    
    UFUNCTION(BlueprintCallable)
    float GetOutputRiseTimer();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCommonCounter();
    
public:
    UFUNCTION(BlueprintPure)
    float GetAntennaRotRate() const;
    
    UFUNCTION(BlueprintPure)
    float GetAntennaRotR() const;
    
    UFUNCTION(BlueprintPure)
    float GetAntennaRotL() const;
    
    UFUNCTION(BlueprintPure)
    float GetAntennaRot() const;
    
    UFUNCTION(BlueprintPure)
    float GetAnimSlotHeadBlendRate() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugOpenRadioTower();
    
    UFUNCTION(BlueprintCallable)
    void DebugCloseRadioTower();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddCommonCounter();
    
};

