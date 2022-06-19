#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_ValidateEQSQuery.generated.h"

class UEnvQuery;

UCLASS(BlueprintType)
class UTresBTDecorator_ValidateEQSQuery : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(EditAnywhere)
    TArray<FEnvNamedValue> QueryParams;
    
    UPROPERTY(EditAnywhere)
    float m_UpdateMinTime;
    
    UPROPERTY(BlueprintReadWrite)
    uint32 m_bMaxTime: 1;
    
    UPROPERTY(EditAnywhere)
    float m_UpdateMaxTime;
    
    UTresBTDecorator_ValidateEQSQuery();
};

