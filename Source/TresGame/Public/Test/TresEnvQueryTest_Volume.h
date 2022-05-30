#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "TresEnvQueryTest_Volume.generated.h"

class AVolume;

UCLASS()
class UTresEnvQueryTest_Volume : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AVolume> VolumeClass;
    
    UPROPERTY(EditAnywhere)
    bool bSkipIfNoVolumeFound;
    
    UPROPERTY(VisibleDefaultsOnly)
    bool bCheckTags;
    
    UPROPERTY(EditAnywhere)
    FName CheckTagNames;
    
    UTresEnvQueryTest_Volume();
};

