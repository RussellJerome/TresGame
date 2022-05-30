#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTService_e_ex358_BlackboardNextActionParam.generated.h"

UCLASS()
class UTresBTService_e_ex358_BlackboardNextActionParam : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_NextActionBlackboardKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_bIsAppearAirBlackboardKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_AppearDistanceBlackboardKey;
    
    UTresBTService_e_ex358_BlackboardNextActionParam();
};

