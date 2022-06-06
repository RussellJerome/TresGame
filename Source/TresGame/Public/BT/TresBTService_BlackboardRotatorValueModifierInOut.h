#pragma once
#include "CoreMinimal.h"
#include "TresBTService_BlackboardValueModifierInOutBase.h"
#include "TresBlackboardRotatorValueModifierInOutParam.h"
#include "TresBTService_BlackboardRotatorValueModifierInOut.generated.h"

UCLASS()
class UTresBTService_BlackboardRotatorValueModifierInOut : public UTresBTService_BlackboardValueModifierInOutBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FTresBlackboardRotatorValueModifierInOutParam> m_InParamList;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresBlackboardRotatorValueModifierInOutParam> m_OutParamList;
    
public:
    UTresBTService_BlackboardRotatorValueModifierInOut();
};

