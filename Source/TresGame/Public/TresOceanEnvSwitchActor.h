#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SQEX_OceanEnvSwitchActor -FallbackName=SQEX_OceanEnvSwitchActor
#include "SQEX_OceanEnvSwitchActor.h"
#include "TresOceanEnvSwitchSignatureDelegate.h"
#include "TresOceanEnvSwitchActor.generated.h"

class AActor;
class ATresOceanShaderController;
class APostProcessVolume;
class ATresOceanPostProcessVolume;
class AEmitterCameraLensEffectBase;

UCLASS()
class ATresOceanEnvSwitchActor : public ASQEX_OceanEnvSwitchActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTresOceanEnvSwitchSignature OnChangeDiveMode;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint32 m_bChangeOceanMaterialIndex: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ATresOceanShaderController* m_pOceanController;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_OceanMaterialOverSea;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_OceanMaterialUnderSea;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint32 m_bChangeOceanPostProcessVolume: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    APostProcessVolume* m_pPostProcessOverSea;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ATresOceanPostProcessVolume* m_pPostProcessUnderSea;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_PostProcessBlendTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint32 m_bChangeLightProperty: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AActor* m_pLightPropertyChangeActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_TemperatureOverSea;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_TemperatureUnderSea;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AEmitterCameraLensEffectBase> m_InLensEffectClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AEmitterCameraLensEffectBase> m_OutLensEffectClass;
    
public:
    ATresOceanEnvSwitchActor();
    UFUNCTION(BlueprintCallable)
    void BP_SetOceanMaterialIndex(int32 InOverSeaIndex, int32 InUnderSeaIndex);
    
};

