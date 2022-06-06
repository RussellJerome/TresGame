#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "Tres_GenerateRandomNumber_Param.h"
#include "TresBTTask_GenerateRandomNumberArray.generated.h"

UCLASS()
class UTresBTTask_GenerateRandomNumberArray : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FTres_GenerateRandomNumber_Param> m_ParamName;
    
    UTresBTTask_GenerateRandomNumberArray();
};

