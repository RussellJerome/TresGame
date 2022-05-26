#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BTDecorator.h"
#include "ETresDecoratorNavigationRayDir.h"
#include "TresBTDecorator_NavigationRayDir.generated.h"

class UNavigationQueryFilter;

UCLASS()
class UTresBTDecorator_NavigationRayDir : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UNavigationQueryFilter> FilterClass;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresDecoratorNavigationRayDir::Type> m_Dir;
    
    UPROPERTY(EditAnywhere)
    float m_fAngle;
    
    UPROPERTY(EditAnywhere)
    float m_fTestDepth;
    
    UTresBTDecorator_NavigationRayDir();
};

