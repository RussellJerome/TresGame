#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "SQEX_KineDriver_GlobalConfig.generated.h"

UCLASS(DefaultConfig, Config=Engine)
class KINEDRIVERRT_API USQEX_KineDriver_GlobalConfig : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bMultiThreadUpdate;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableUpdateOverlaps;
    
    USQEX_KineDriver_GlobalConfig();
};

