#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AttackParam_e_ex761.h"
#include "TresCoopDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "CameraEventParam_e_ex761.h"
#include "UObject/NoExportTypes.h"
#include "TresCoopDefinitionParamBP.h"
#include "TresCoop2_e_ex761_WavyLightning.generated.h"

class UParticleSystem;
class UEnvQuery;
class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresCoop2_e_ex761_WavyLightning : public UTresCoopDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CameraCenterParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_CameraAppearCenterLocation;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CameraAppearRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FCameraEventParam_e_ex761 m_CameraFirstEventParam;
    
    UPROPERTY(EditDefaultsOnly)
    FCameraEventParam_e_ex761 m_CameraNotFirstEventParam;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_LightningProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DummyLightningSpawnIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval m_DummyLightningSpawnRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DummyLightningMinIntervalDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AimLightningSpawnIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AimLightningAttackStartSpawnIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AimLightningSpawnLocationRate;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsAttackStartFinish: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackStartFinishLightningEndDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackStartDelyaTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> m_AttackAimLightningIntervalTimeList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FAttackParam_e_ex761> m_AttackParamList;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RaiseCutStartDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RaiseCutAppearDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishStartDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishAttachEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishAppearIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishAppearDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishAppearOffsetHeightList[11];
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishAppearAttackHitOffsetHeightList[11];
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarknessSpreadOutAppearBlockDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarknessSpreadOutAppearBlockOtherPawnDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_VisualChangeEndDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CenterSignParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LightCoefficient;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LightChangeStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LightChangeEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SignEffectDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EnvChangeDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LightChangeDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_FindReferencePointEnvQuery;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FindReferencePointIntervalTime;
    
public:
    UTresCoop2_e_ex761_WavyLightning();
    UFUNCTION()
    void OnStartEnd(const FTresCoopDefinitionParamBP& Param);
    
    UFUNCTION()
    void OnRaiseCutEnd(const FTresCoopDefinitionParamBP& Param);
    
    UFUNCTION()
    void OnRaiseCutAttackHit(const FTresCoopDefinitionParamBP& Param);
    
    UFUNCTION()
    void OnFinishEnd(const FTresCoopDefinitionParamBP& Param);
    
    UFUNCTION()
    void OnDarknessSpreadOutStart(const FTresCoopDefinitionParamBP& Param);
    
    UFUNCTION()
    void OnAttackEnd(const FTresCoopDefinitionParamBP& Param);
    
    UFUNCTION()
    void OnAppearEnd(const FTresCoopDefinitionParamBP& Param);
    
};

