#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETresScreenEffectPriority -FallbackName=ETresScreenEffectPriority
#include "TresEnemyXIIIPawnBase.h"
#include "ETresEnemyXIIIPhaseType.h"
#include "TresAnimNotifyState_AttachEffect.h"
#include "TresEnemyPawn_e_ex773.generated.h"

class ATresProjectileGenerator_e_ex773_LivelyFlarePillar;
class ATresProjectileGenerator_e_ex773_FlareShotTornado;
class AStaticMeshActor;
class ATresProjectileGenerator_e_ex773_EncloseFlare;
class ATresProjectileGenerator_e_ex773_EncloseFlareHvn;
class ATresProjectileGenerator_e_ex773_FlareShot;
class ATresActor_e_ex773_HvnEnvEffect;
class ATresProjectileGenerator_e_ex773_FlareShotHvn;
class ATresProjectileGenerator_e_ex773_FlareTornado;
class UTresParam_e_ex773_TerrainCrushing;
class ATresActor_e_ex773_UpdraftEffect;
class ATresProjectile_e_ex773_SwordJoint;
class USQEX_ParticleAttachDataAsset;
class UTresEnemyPawn_e_ex773_EclipseManagerComponent;
class UTresParam_e_ex773_Common;
class UTresParam_e_ex773_Eclipse13;
class ATresProjectile_e_ex773_HeavenlyPillar;
class ATresProjectile_e_ex773_FlarePillarOmen;
class ATresActor_e_ex773_Updraft;
class ATresCameraNormal;
class UTresParam_e_ex773_HeavenlyPillar;
class USoundBase;
class ATresEnemyPawnBase;
class AActor;
class UTresStateBase;

UCLASS()
class ATresEnemyPawn_e_ex773 : public ATresEnemyXIIIPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileGenerator_e_ex773_EncloseFlare> m_pro_EncloseFlareGeneratorClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileGenerator_e_ex773_EncloseFlareHvn> m_pro_EncloseFlareHvnGeneratorClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileGenerator_e_ex773_FlareShot> m_pro_FlareShotGeneratorClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileGenerator_e_ex773_FlareShotHvn> m_pro_FlareShotHvnGeneratorClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileGenerator_e_ex773_FlareShotTornado> m_pro_FlareShotTornadoGeneratorClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileGenerator_e_ex773_FlareTornado> m_pro_FlareTornadoGeneratorClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileGenerator_e_ex773_LivelyFlarePillar> m_pro_LivelyFlarePillarGeneratorClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresActor_e_ex773_UpdraftEffect> m_pro_UpdraftEffectClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresActor_e_ex773_HvnEnvEffect> m_pro_HvnEnvEffectClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresActor_e_ex773_UpdraftEffect> m_pro_bt04UpdraftEffectClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_e_ex773_SwordJoint> SwordJointClass;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_PCEffDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    FName EventNameForFinish;
    
    UPROPERTY(EditDefaultsOnly)
    float LimitZ_ForOneHeart;
    
protected:
    UPROPERTY(Export, VisibleAnywhere)
    UTresEnemyPawn_e_ex773_EclipseManagerComponent* EclipseManagerComponent;
    
    UPROPERTY(EditDefaultsOnly)
    UTresParam_e_ex773_Common* CommonParameterAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UTresParam_e_ex773_Eclipse13* ParameterEclipse13_Asset;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> SwordJointForceAnimationNameArray;
    
    UPROPERTY(Transient)
    ATresProjectileGenerator_e_ex773_EncloseFlareHvn* m_EncloseFlareHvnGenerator;
    
    UPROPERTY(Transient)
    ATresProjectileGenerator_e_ex773_FlareShot* m_FlareShotGenerator;
    
    UPROPERTY(Transient)
    ATresProjectileGenerator_e_ex773_FlareShotHvn* m_FlareShotHvnGenerator;
    
    UPROPERTY(Transient)
    ATresProjectileGenerator_e_ex773_FlareShotTornado* m_FlareShotTornadoGenerator;
    
    UPROPERTY(Transient)
    ATresProjectileGenerator_e_ex773_FlareTornado* m_FlareTornadoGenerator;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresParam_e_ex773_TerrainCrushing> m_TerrainCrushingParam;
    
    UPROPERTY(Transient)
    ATresProjectile_e_ex773_HeavenlyPillar* m_HeavenlyPillar;
    
    UPROPERTY(Transient)
    ATresProjectile_e_ex773_FlarePillarOmen* m_AimFlarePillar;
    
    UPROPERTY(Transient)
    ATresProjectileGenerator_e_ex773_LivelyFlarePillar* m_LivelyFlarePillarGenerator;
    
    UPROPERTY(Transient)
    ATresActor_e_ex773_Updraft* m_HeavenlyUpdraft;
    
    UPROPERTY(Transient)
    ATresCameraNormal* m_Camera;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresParam_e_ex773_HeavenlyPillar> m_HeavenlyPillarParam;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresParam_e_ex773_HeavenlyPillar> m_HeavenlyPillarBT04Param;
    
    UPROPERTY(Transient)
    ATresActor_e_ex773_UpdraftEffect* m_HvnUpdraftEffect;
    
    UPROPERTY(Transient)
    ATresActor_e_ex773_HvnEnvEffect* m_HvnEnvEffect;
    
    UPROPERTY(Transient)
    ATresActor_e_ex773_UpdraftEffect* m_bt04UpdraftEffect;
    
    UPROPERTY(Transient)
    AStaticMeshActor* m_pPlFloorColl;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_WarpVoiceDataArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_HvnFlareShotVoiceDataArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_RevengeWarpVoiceArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_RevengeFlarePillarVoiceArray;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpVoiceDisableTime;
    
public:
    ATresEnemyPawn_e_ex773();
    UFUNCTION(BlueprintCallable)
    void StartUpdraftEffect();
    
    UFUNCTION(BlueprintCallable)
    void SpawnPhaseDifferenceActor(TSubclassOf<ATresEnemyPawnBase> PawnClass, ETresEnemyXIIIPhaseType phase);
    
    UFUNCTION(BlueprintCallable)
    void SetMasterLightCoefficientDefault(float InTransitionTime, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
    
    UFUNCTION(BlueprintCallable)
    void SetMasterLightCoefficient(float InTransitionTime, float InCoefficient, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
    
    UFUNCTION(BlueprintCallable)
    void SetEncloseFlareHitTime(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    bool RedyHeavenlyPillarPhase4();
    
    UFUNCTION(BlueprintCallable)
    bool IsStartFlareTornadoEscape();
    
    UFUNCTION()
    bool IsSecondBattle();
    
    UFUNCTION(BlueprintCallable)
    bool IsHeavenlyPillarPhase4();
    
    UFUNCTION(BlueprintCallable)
    bool IsHeavenlyPillarPhase3();
    
    UFUNCTION(BlueprintCallable)
    bool IsHeavenlyPillarPhase2();
    
    UFUNCTION(BlueprintCallable)
    bool IsHeavenlyPillarPhase1();
    
    UFUNCTION(BlueprintCallable)
    bool IsHeavenlyPillar();
    
    UFUNCTION(BlueprintCallable)
    bool IsFlareTornadoPhase2();
    
    UFUNCTION(BlueprintCallable)
    bool IsFlareTornadoPhase1();
    
    UFUNCTION(BlueprintCallable)
    bool IsFlareTornado();
    
    UFUNCTION()
    bool IsFinish();
    
    UFUNCTION(BlueprintCallable)
    bool IsEncloseFlare();
    
    UFUNCTION(BlueprintPure)
    bool IsEclipse13WaveComplete();
    
    UFUNCTION()
    bool IsEclipse13();
    
    UFUNCTION(BlueprintCallable)
    int32 GetFlareTornadoNum();
    
    UFUNCTION(BlueprintCallable)
    int32 GetFlareShotTornadoNum();
    
    UFUNCTION(BlueprintCallable)
    int32 GetFlareShotNum();
    
    UFUNCTION(BlueprintCallable)
    int32 GetEncloseFlareNum();
    
    UFUNCTION(BlueprintCallable)
    float GetEncloseFlareHitTime();
    
    UFUNCTION(BlueprintPure)
    UTresEnemyPawn_e_ex773_EclipseManagerComponent* GetEclipseManagerComponent();
    
    UFUNCTION(BlueprintPure)
    int32 GetEclipse13NowWaveNum();
    
    UFUNCTION(BlueprintCallable)
    void ExecNextWaveEclipse13(float ReserveTime, bool bNotifyJustInCase);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_StepHeavenlyPillarExplosion(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_StepHeavenlyPillar(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_StepEclipse13(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_IsCancelStateFRPromiseWings(UTresStateBase* State);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_ExecutePromiseWings();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_CreateHeavenlyPillarExplosionEffect();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_CreateHeavenlyPillarEffect();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_ChangeTransparentMode(bool mode);
    
public:
    UFUNCTION(BlueprintCallable)
    void BpDestroyEquipment();
    
};

