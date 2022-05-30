#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ETresDecoratorMercunaRaycast.h"
#include "TresBTDecorator_MercunaRaycast.generated.h"

UCLASS()
class UTresBTDecorator_MercunaRaycast : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresDecoratorMercunaRaycast::Type> m_Dir;
    
    UPROPERTY(EditAnywhere)
    float m_fAngle;
    
    UPROPERTY(EditAnywhere)
    float m_fTestDepth;
    
    UPROPERTY(EditAnywhere)
    bool m_bUnuseMercunaProject;
    
    UTresBTDecorator_MercunaRaycast();
};

