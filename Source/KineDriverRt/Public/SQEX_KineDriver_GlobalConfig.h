#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "SQEX_KineDriver_GlobalConfig.generated.h"

UCLASS(DefaultConfig)
class KINEDRIVERRT_API USQEX_KineDriver_GlobalConfig : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bMultiThreadUpdate;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableUpdateOverlaps;
    
    USQEX_KineDriver_GlobalConfig();
};

