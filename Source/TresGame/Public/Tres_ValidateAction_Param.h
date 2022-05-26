#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "Tres_ValidateAction_Param.generated.h"

class UTresActionDefinitionBase;

USTRUCT(BlueprintType)
struct FTres_ValidateAction_Param {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresActionDefinitionBase> ActionDefinitionOverride;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector Target;
    
    UPROPERTY(EditAnywhere)
    uint8 bValidateLocation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bValidateOrientation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bValidateExecution: 1;
    
    UPROPERTY(EditAnywhere)
    float offsetLocation;
    
    UPROPERTY(EditAnywhere)
    float offsetRatio;
    
    TRESGAME_API FTres_ValidateAction_Param();
};

