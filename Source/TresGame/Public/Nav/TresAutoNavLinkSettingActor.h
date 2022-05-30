#pragma once
#include "CoreMinimal.h"
#include "TresGenerateNavLinkArgs.h"
#include "GameFramework/Actor.h"
#include "TresAutoNavLinkSettingActor.generated.h"

UCLASS()
class ATresAutoNavLinkSettingActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FTresGenerateNavLinkArgs GenerateSetting;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    uint32 Version;
    
    ATresAutoNavLinkSettingActor();
};

