#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "DataProviders/AIDataProvider.h"
#include "TresEnvQueryTest_ItemOffsetVelocity.generated.h"

class UEnvQueryContext;

UCLASS()
class UTresEnvQueryTest_ItemOffsetVelocity : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bEnableUseMovedVelocity: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue OffsetTime;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue AddOffsetTime;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue bOffset2D;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue bOffsetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue CorrectionViewportDepthRate;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue CorrectionViewportInvDepthRate;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue CorrectionViewportSideRate;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue CorrectionUpRate;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue CorrectionDownRate;
    
    UTresEnvQueryTest_ItemOffsetVelocity();
};

