#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTDecorator.h"
#include "ETresFloorTestMode.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "TresBTDecorator_FloorHeightCheck.generated.h"

UCLASS()
class UTresBTDecorator_FloorHeightCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector Source;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EArithmeticKeyOperation::Type> Operation;
    
    UPROPERTY(EditAnywhere)
    float MinRange;
    
    UPROPERTY(EditAnywhere)
    float TestHeight;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresFloorTestMode::Type> TestMode;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseOverrideKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_OverrideKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_OverrideKeyLocation;
    
    UTresBTDecorator_FloorHeightCheck();
};

