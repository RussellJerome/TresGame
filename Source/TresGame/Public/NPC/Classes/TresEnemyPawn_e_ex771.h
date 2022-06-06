#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyXIIIPawnBase.h"
#include "TresEnemyPawn_e_ex771.generated.h"

class AStaticMeshActor;
class ATresProjectileGenerator_e_ex771_EncloseFlare;
class ATresProjectileGenerator_e_ex771_LivelyFlarePillar;
class ATresProjectileGenerator_e_ex771_EncloseFlareHvn;
class ATresProjectileGenerator_e_ex771_FlareShot;
class ATresProjectileGenerator_e_ex771_FlareShotHvn;
class ATresProjectileGenerator_e_ex771_FlareShotTornado;
class ATresProjectileGenerator_e_ex771_FlareTornado;
class ATresActor_e_ex771_UpdraftEffect;
class ATresActor_e_ex771_HvnEnvEffect;
class ATresCameraNormal;
class ATresActor_e_ex771_Updraft;
class USQEX_ParticleAttachDataAsset;
class APawn;
class UTresParam_e_ex771_TerrainCrushing;
class USoundBase;
class ATresProjectile_e_ex771_HeavenlyPillar;
class ATresProjectile_e_ex771_FlarePillarOmen;
class UTresParam_e_ex771_HeavenlyPillar;
class AActor;

UCLASS()
class ATresEnemyPawn_e_ex771 : public ATresEnemyXIIIPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileGenerator_e_ex771_EncloseFlare> m_pro_EncloseFlareGeneratorClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileGenerator_e_ex771_EncloseFlareHvn> m_pro_EncloseFlareHvnGeneratorClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileGenerator_e_ex771_FlareShot> m_pro_FlareShotGeneratorClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileGenerator_e_ex771_FlareShotHvn> m_pro_FlareShotHvnGeneratorClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileGenerator_e_ex771_FlareShotTornado> m_pro_FlareShotTornadoGeneratorClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileGenerator_e_ex771_FlareTornado> m_pro_FlareTornadoGeneratorClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileGenerator_e_ex771_LivelyFlarePillar> m_pro_LivelyFlarePillarGeneratorClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresActor_e_ex771_UpdraftEffect> m_pro_UpdraftEffectClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresActor_e_ex771_HvnEnvEffect> m_pro_HvnEnvEffectClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresActor_e_ex771_UpdraftEffect> m_pro_bt04UpdraftEffectClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraNormal> m_pro_HeavenlyPillarCameraClass;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_PCEffDataAsset;
    
private:
    UPROPERTY()
    APawn* m_pAtkPawn;
    
protected:
    UPROPERTY()
    ATresProjectileGenerator_e_ex771_EncloseFlare* m_EncloseFlareGenerator;
    
    UPROPERTY()
    ATresProjectileGenerator_e_ex771_EncloseFlareHvn* m_EncloseFlareHvnGenerator;
    
    UPROPERTY()
    ATresProjectileGenerator_e_ex771_FlareShot* m_FlareShotGenerator;
    
    UPROPERTY()
    ATresProjectileGenerator_e_ex771_FlareShotHvn* m_FlareShotHvnGenerator;
    
    UPROPERTY()
    ATresProjectileGenerator_e_ex771_FlareShotTornado* m_FlareShotTornadoGenerator;
    
    UPROPERTY()
    ATresProjectileGenerator_e_ex771_FlareTornado* m_FlareTornadoGenerator;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresParam_e_ex771_TerrainCrushing> m_TerrainCrushingParam;
    
    UPROPERTY()
    ATresProjectile_e_ex771_HeavenlyPillar* m_HeavenlyPillar;
    
    UPROPERTY()
    ATresProjectile_e_ex771_FlarePillarOmen* m_AimFlarePillar;
    
    UPROPERTY()
    ATresProjectileGenerator_e_ex771_LivelyFlarePillar* m_LivelyFlarePillarGenerator;
    
    UPROPERTY()
    ATresActor_e_ex771_Updraft* m_HeavenlyUpdraft;
    
    UPROPERTY(Transient)
    ATresCameraNormal* m_Camera;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresParam_e_ex771_HeavenlyPillar> m_HeavenlyPillarParam;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresParam_e_ex771_HeavenlyPillar> m_HeavenlyPillarBT04Param;
    
    UPROPERTY()
    ATresActor_e_ex771_UpdraftEffect* m_HvnUpdraftEffect;
    
    UPROPERTY()
    ATresActor_e_ex771_HvnEnvEffect* m_HvnEnvEffect;
    
    UPROPERTY()
    ATresActor_e_ex771_UpdraftEffect* m_bt04UpdraftEffect;
    
    UPROPERTY()
    AStaticMeshActor* m_pPlFloorColl;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AStaticMeshActor> m_pro_PlFloorCollClass;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_WarpVoiceDataArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_HvnFlareShotVoiceDataArray;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpVoiceDisableTime;
    
public:
    ATresEnemyPawn_e_ex771();
    UFUNCTION(BlueprintCallable)
    void StartUpdraftEffect();
    
    UFUNCTION(BlueprintCallable)
    void SetEncloseFlareHitTime(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    bool RedyHeavenlyPillarPhase4();
    
    UFUNCTION(BlueprintCallable)
    bool IsStartFlareTornadoEscape();
    
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
    
    UFUNCTION(BlueprintCallable)
    bool IsEncloseFlare();
    
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
    
};

