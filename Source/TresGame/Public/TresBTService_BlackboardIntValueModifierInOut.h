#pragma once
#include "CoreMinimal.h"
#include "TresBTService_BlackboardValueModifierInOutBase.h"
#include "TresBlackboardIntValueModifierInOutParam.h"
#include "TresBTService_BlackboardIntValueModifierInOut.generated.h"

UCLASS()
class UTresBTService_BlackboardIntValueModifierInOut : public UTresBTService_BlackboardValueModifierInOutBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FTresBlackboardIntValueModifierInOutParam> m_InParamList;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresBlackboardIntValueModifierInOutParam> m_OutParamList;
    
public:
    UTresBTService_BlackboardIntValueModifierInOut();
};

