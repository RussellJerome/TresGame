#pragma once
#include "CoreMinimal.h"
#include "EEX354_TargetMoveDir.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_e_ex354_TargetMoveDirection.generated.h"

UCLASS()
class UTresBTDecorator_e_ex354_TargetMoveDirection : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_Target;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEX354_TargetMoveDir> m_TargetMoveDir;
    
    UPROPERTY(EditAnywhere)
    float m_fAngleDiffRange;
    
    UPROPERTY(EditAnywhere)
    float m_fMinTargetVelocity;
    
    UTresBTDecorator_e_ex354_TargetMoveDirection();
};

