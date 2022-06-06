#pragma once
#include "CoreMinimal.h"
#include "TresBTService_BlackboardValueModifierInOutBase.h"
#include "TresBlackboardClassValueModifierInOutParam.h"
#include "TresBTService_BlackboardClassValueModifierInOut.generated.h"

UCLASS()
class UTresBTService_BlackboardClassValueModifierInOut : public UTresBTService_BlackboardValueModifierInOutBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FTresBlackboardClassValueModifierInOutParam> m_InParamList;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresBlackboardClassValueModifierInOutParam> m_OutParamList;
    
public:
    UTresBTService_BlackboardClassValueModifierInOut();
};

