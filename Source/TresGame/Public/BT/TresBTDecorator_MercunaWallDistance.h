#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_MercunaWallDistance.generated.h"

UCLASS()
class UTresBTDecorator_MercunaWallDistance : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fTestDepth;
    
    UPROPERTY(EditAnywhere)
    int32 m_TestCount;
    
    UTresBTDecorator_MercunaWallDistance();
};

