#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttractionPawnBase.h"
#include "TresEffectUnit.h"
#include "TresAttractionPawnVikingShip.generated.h"

class ATresCameraRotTargetAuto;
class UMaterial;
class UTresDecalComponent;
class ATresProjectileBase;

UCLASS()
class ATresAttractionPawnVikingShip : public ATresAttractionPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableDecal: 1;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterial* m_DecalMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DecalSize;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DecalZSize;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DecalLifeSpan;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DecalFadeinTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DecalFadeoutTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEffectUnit> m_SplashEffects;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjSplash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fIdlePitchLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fIdlePowerLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fIdleAccelLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fIdleBreakLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fAttackPitchLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fAttackPowerLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fAttackAccelLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fAttackBreakLimit;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_Param_ScoreDamage;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_Param_ScoreKill;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> m_Param_ScoreChainRateList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fYawPowerAdd;
    
protected:
    UPROPERTY(Export)
    UTresDecalComponent* m_pSpawnDecal;
    
    UPROPERTY()
    ATresCameraRotTargetAuto* m_pCamera;
    
public:
    ATresAttractionPawnVikingShip();
};

