#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "MercunaNavVolume.generated.h"

class AMercunaNavOctree;

UCLASS(MinimalAPI)
class AMercunaNavVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    AMercunaNavOctree* NavOctree;
    
public:
    AMercunaNavVolume();
};

