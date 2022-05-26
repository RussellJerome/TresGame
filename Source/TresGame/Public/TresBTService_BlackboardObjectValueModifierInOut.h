#pragma once
#include "CoreMinimal.h"
#include "TresBTService_BlackboardValueModifierInOutBase.h"
#include "TresBlackboardObjectValueModifierInOutParam.h"
#include "TresBTService_BlackboardObjectValueModifierInOut.generated.h"

UCLASS()
class UTresBTService_BlackboardObjectValueModifierInOut : public UTresBTService_BlackboardValueModifierInOutBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FTresBlackboardObjectValueModifierInOutParam> m_InParamList;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresBlackboardObjectValueModifierInOutParam> m_OutParamList;
    
public:
    UTresBTService_BlackboardObjectValueModifierInOut();
};

