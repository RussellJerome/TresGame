#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "Tres_GenerateRandomNumber_Param.generated.h"

USTRUCT(BlueprintType)
struct FTres_GenerateRandomNumber_Param {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardKey;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint8 m_bUseRange: 1;
    
    UPROPERTY(EditAnywhere)
    float m_MinValue;
    
    UPROPERTY(EditAnywhere)
    float m_MaxValue;
    
    TRESGAME_API FTres_GenerateRandomNumber_Param();
};

