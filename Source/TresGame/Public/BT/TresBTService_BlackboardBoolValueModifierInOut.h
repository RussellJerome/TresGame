#pragma once
#include "CoreMinimal.h"
#include "TresBTService_BlackboardValueModifierInOutBase.h"
#include "TresBlackboardBoolValueModifierInOutParam.h"
#include "TresBTService_BlackboardBoolValueModifierInOut.generated.h"

UCLASS()
class UTresBTService_BlackboardBoolValueModifierInOut : public UTresBTService_BlackboardValueModifierInOutBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FTresBlackboardBoolValueModifierInOutParam> m_InParamList;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresBlackboardBoolValueModifierInOutParam> m_OutParamList;
    
public:
    UTresBTService_BlackboardBoolValueModifierInOut();
};

