#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresNavLinkExtendedInfo.h"
#include "TresNavLinkExtendedInfoActor.generated.h"

UCLASS()
class ATresNavLinkExtendedInfoActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    uint32 Version;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    TMap<FName, uint32> ExtendedInfoList;
    
    UPROPERTY()
    TArray<FTresNavLinkExtendedInfo> ExtendedDataArray;
    
public:
    ATresNavLinkExtendedInfoActor();
};

