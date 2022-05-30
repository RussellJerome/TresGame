#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_OverrideCameraLockon.generated.h"

UCLASS()
class UTresBTDecorator_OverrideCameraLockon : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_LockonLimitYaw;
    
    UPROPERTY(EditAnywhere)
    bool m_bEnableLockonMoveRotation;
    
    UPROPERTY(VisibleDefaultsOnly)
    bool m_bOverrided;
    
    UTresBTDecorator_OverrideCameraLockon();
};

