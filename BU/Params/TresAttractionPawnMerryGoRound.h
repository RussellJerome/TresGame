#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttractionPawnBase.h"
#include "TresAttractionPawnMerryGoRound.generated.h"

class ATresCameraMerryGoRound;
class USQEX_ParticleAttachDataAsset;
class ATresProjectileBase;
class ATresAttractionVfxMerryGoRoundRing;
class UParticleSystem;
class USoundBase;
class UParticleSystemComponent;

UCLASS()
class ATresAttractionPawnMerryGoRound : public ATresAttractionPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjExcellent;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjGood;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjFinish;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresAttractionVfxMerryGoRoundRing> m_Ring;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_VfxAssetZeroGrav;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_VfxAssetFinish;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_EffDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_SndAssetFail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_RotSpeedMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_RotSpeedAddMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_RotSpeedAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_RotBrakeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_AttackFailInterval;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_Param_ScoreExcellentOne;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_Param_ScoreExcellent;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_Param_ScoreGoodOne;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_Param_ScoreGood;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_Param_ScoreFinish;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_Param_ScoreKill;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> m_Param_ScoreChainRateList;
    
private:
    UPROPERTY(Export)
    UParticleSystemComponent* m_EffectFinish;
    
    UPROPERTY()
    ATresCameraMerryGoRound* m_Camera;
    
    UPROPERTY()
    ATresProjectileBase* m_pChainReserveProj;
    
public:
    ATresAttractionPawnMerryGoRound();
    UFUNCTION(BlueprintPure)
    float GetRotYaw() const;
    
};

