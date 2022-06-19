#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "TresBTService_RunEQSQuery.generated.h"

class UEnvQuery;

UCLASS()
class UTresBTService_RunEQSQuery : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UEnvQuery* EQSQueryOverride;
    
    UPROPERTY(EditAnywhere)
    TArray<FEnvNamedValue> QueryParams;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEnvQueryRunMode::Type> RunMode;
    
    UPROPERTY(EditAnywhere)
    uint32 bInvalidateBlackboardKeyOnFailure: 1;
    
protected:
    UPROPERTY(VisibleDefaultsOnly)
    uint32 bUseBlackboardQuery: 1;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector EQSQuery;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector Result;
    
public:
    UTresBTService_RunEQSQuery();
};

