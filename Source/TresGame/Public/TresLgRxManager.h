#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresLgRxPhaseData.h"
#include "TresLgRxReactionData.h"
#include "ETresChrUniqueID.h"
#include "TresLgRxManager.generated.h"

class ATresLgRxPawnBase;
class UParticleSystem;
class ATresCameraNormal;
class ATresProjectileBase;
class USoundBase;
class ATresPlayerControllerBase;
class UParticleSystemComponent;
class AEmitterCameraLensEffectBase;
class ATresCharPawnBase;

UCLASS()
class ATresLgRxManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<ATresLgRxPawnBase>> m_AssetsLgF;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<ATresLgRxPawnBase>> m_AssetsLgB;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<ATresLgRxPawnBase>> m_AssetsRx;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraNormal> m_AssetsCameraNormal;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_AssetsProjGuardCounter;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AssetEffectGuardLoop;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AssetEffectAttackRelfect;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AssetEffectAttackSpark;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AssetEffectLgHeavyEndOne;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AssetEffectLgHeavyEndAll;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AssetEffectLgRing;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AssetEffectRushGuardHit;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AssetEffectKeyHole;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AssetEffectBgLens;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_AssetVoiceMickey1;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_AssetVoiceMickey2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_Param_LgMaxHp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_GuardTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_GuardStun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CmdPointGuardCounterAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CmdPointGuardCounterOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_RushStartActionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_Param_FocusChrNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_GameClearGameSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresLgRxReactionData> m_ReactData;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresLgRxPhaseData> m_PhaseData;
    
protected:
    UPROPERTY()
    ATresPlayerControllerBase* m_PlayerController;
    
    UPROPERTY()
    ATresCameraNormal* m_Camera;
    
    UPROPERTY()
    TArray<ATresLgRxPawnBase*> m_PawnListLgF;
    
    UPROPERTY()
    TArray<ATresLgRxPawnBase*> m_PawnListLgB;
    
    UPROPERTY()
    TArray<ATresLgRxPawnBase*> m_PawnListRx;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_pGuardEffect;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_pRushGuardHitEffect;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_pLgRingEffect;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_pKeyHoleEffect;
    
    UPROPERTY()
    AEmitterCameraLensEffectBase* m_pBgLensEffect;
    
    UPROPERTY()
    TArray<AActor*> m_CameraNoteList;
    
    UPROPERTY()
    TArray<ATresLgRxPawnBase*> m_ReactPawnListLg;
    
public:
    ATresLgRxManager();
    UFUNCTION(BlueprintCallable)
    void BP_SpawnLgRingEffect();
    
    UFUNCTION(BlueprintCallable)
    void BP_SetFocusLgPawn(ETresChrUniqueID InChrUniqueID);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetFocusChangeEnd();
    
    UFUNCTION(BlueprintCallable)
    void BP_SetEventEnd();
    
    UFUNCTION(BlueprintCallable)
    void BP_SetAllVisible(bool InVisible);
    
    UFUNCTION(BlueprintCallable)
    void BP_PrepareAppear();
    
    UFUNCTION(BlueprintCallable)
    bool BP_PlayInterruptVoice(ETresChrUniqueID InChrUniqueID, USoundBase* InVoiceAsset, FName InLipAnimName);
    
    UFUNCTION(BlueprintPure)
    bool BP_IsPlayInterruptVoice(ETresChrUniqueID InChrUniqueID) const;
    
    UFUNCTION(BlueprintPure)
    int32 BP_GetPhase() const;
    
    UFUNCTION(BlueprintPure)
    ATresCharPawnBase* BP_GetLgPawn(ETresChrUniqueID InChrUniqueID) const;
    
    UFUNCTION(BlueprintPure)
    ETresChrUniqueID BP_GetFocusLgChrUniqueID() const;
    
    UFUNCTION(BlueprintCallable)
    AActor* BP_GetCameraNote(ETresChrUniqueID InChrUniqueID);
    
    UFUNCTION(BlueprintPure)
    bool BP_CanSpawnRushCamera() const;
    
};

