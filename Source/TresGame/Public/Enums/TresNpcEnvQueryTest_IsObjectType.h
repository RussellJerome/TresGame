#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESQEX_ObjectType -FallbackName=ESQEX_ObjectType
#include "TresNpcEnvQueryTest_IsObjectType.generated.h"

UCLASS()
class UTresNpcEnvQueryTest_IsObjectType : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESQEX_ObjectType m_ObjectType;
    
    UTresNpcEnvQueryTest_IsObjectType();
};

