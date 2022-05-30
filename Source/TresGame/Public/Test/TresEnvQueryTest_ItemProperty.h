#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "ETresEnvQueryTestItemPropertySource.h"
#include "TresEnvQueryTest_ItemProperty.generated.h"

UCLASS()
class UTresEnvQueryTest_ItemProperty : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresEnvQueryTestItemPropertySource::Type> m_ValueType;
    
    UPROPERTY(EditAnywhere)
    FName m_PropertyName;
    
    UTresEnvQueryTest_ItemProperty();
};

