#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "TresCoopDefinitionBase.generated.h"

UCLASS(Abstract, NotPlaceable)
class UTresCoopDefinitionBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FInt32Interval m_JoinMemberRange;
    
    UPROPERTY(EditAnywhere)
    int32 m_ConcurrentExeLimit;
    
    UPROPERTY(EditAnywhere)
    float m_CooldownTime;
    
public:
    UTresCoopDefinitionBase();
};

