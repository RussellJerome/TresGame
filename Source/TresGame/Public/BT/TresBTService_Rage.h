#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "ETresValueModifierMethod.h"
#include "TresBTService_Rage.generated.h"

UCLASS()
class UTresBTService_Rage : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresValueModifierMethod::Type> m_ValueModifierType;
    
    UPROPERTY(EditAnywhere)
    float m_Value;
    
    UPROPERTY(EditAnywhere)
    float m_ValueRandomDeviation;
    
    UPROPERTY(EditAnywhere)
    float m_Interval;
    
    UTresBTService_Rage();
};

