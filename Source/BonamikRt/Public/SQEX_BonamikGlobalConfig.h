#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_GlobalOutOfCamera.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "UObject/NoExportTypes.h"
#include "SQEX_BonamikGlobalConfig.generated.h"

UCLASS(DefaultConfig, Config=Engine)
class BONAMIKRT_API USQEX_BonamikGlobalConfig : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bEnableTickComponent;
    
    UPROPERTY(Config, EditAnywhere)
    bool bDebugDrawBonamik;
    
    UPROPERTY(Config, EditAnywhere)
    bool bDebugDrawWind;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableUpdate;
    
    UPROPERTY(Config, EditAnywhere)
    bool bMultiThreadUpdate;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableSimulation;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableUpdateOverlaps;
    
    UPROPERTY(Config)
    float TimeStep;
    
    UPROPERTY(Config, EditAnywhere)
    float ExpectedFrameRate;
    
    UPROPERTY(Config, EditAnywhere)
    float MayaAnimationFrameRate;
    
    UPROPERTY(Config, EditAnywhere)
    float MayaSimulationFrameRate;
    
    UPROPERTY(Config, EditAnywhere)
    FVector Gravity;
    
    UPROPERTY(Config, EditAnywhere)
    float WindSourceSpeedFactor;
    
    UPROPERTY(Config, EditAnywhere)
    bool bTickWindWhenPaused;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ESQEX_Bonamik_GlobalOutOfCamera> OutOfCamera;
    
    UPROPERTY(Config, EditAnywhere)
    bool bKBDEnable;
    
    UPROPERTY(Config, EditAnywhere)
    bool bKBDEnableInitializaiton;
    
    UPROPERTY(Config, EditAnywhere)
    bool bKBDEnableCreationOfBonamikComponent;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 SkipUpdateForActorType;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 SkipWaitForActorType;
    
    USQEX_BonamikGlobalConfig();
};

