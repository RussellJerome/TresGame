#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresDisneyMagicPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresDisneyMagicPawnAriel.generated.h"

class AEmitterCameraLensEffectBase;
class UParticleSystem;
class ATresProjectileBase;
class ATresCameraDMAriel;
class UParticleSystemComponent;

UCLASS()
class ATresDisneyMagicPawnAriel : public ATresDisneyMagicPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetJustMarker;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetGood;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetBad;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetPuddleGood;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetPuddleJust;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetDiveTraceBad;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetDiveTraceGood;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetDiveTraceJust;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetFinishRainbow;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjSplashTwistGood;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjSplashTwistJust;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjFinishBigGood;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjFinishBigJust;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjFinishSmall;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Param_DiveHeight[4];
    
    UPROPERTY(EditDefaultsOnly)
    float m_Param_DiveDistance[4];
    
    UPROPERTY(EditDefaultsOnly)
    float m_Param_DiveAttackVelAddZ[4];
    
    UPROPERTY(EditDefaultsOnly)
    float m_Param_PlayerGravity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Param_DiveJustTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_Param_bAutoDive;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_Param_ScoreAttack;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_Param_ScoreFinish;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_Param_ScoreKill;
    
private:
    UPROPERTY()
    ATresCameraDMAriel* m_Camera;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_pEffDiveTrace;
    
    UPROPERTY()
    AEmitterCameraLensEffectBase* m_pEffFinishRainbow;
    
    UPROPERTY(Export)
    TArray<UParticleSystemComponent*> m_PuddleEffList;
    
    UPROPERTY()
    TArray<TWeakObjectPtr<ATresProjectileBase>> m_ProjFinishList;
    
public:
    ATresDisneyMagicPawnAriel();
    UFUNCTION(BlueprintCallable)
    void SetFinishRainbowParameter(float rbw_main, float rbw_glow, float rbw_flr_01, float rbw_flr_01b, float rbw_flr_01c, float rbw_flr_02);
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetPuddlePosList();
    
    UFUNCTION(BlueprintPure)
    float GetFinishTimerMax() const;
    
    UFUNCTION(BlueprintPure)
    float GetFinishTimer() const;
    
};

