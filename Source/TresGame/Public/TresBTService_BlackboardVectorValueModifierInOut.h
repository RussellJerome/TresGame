#pragma once
#include "CoreMinimal.h"
#include "TresBTService_BlackboardValueModifierInOutBase.h"
#include "TresBlackboardVectorValueModifierInOutParam.h"
#include "TresBTService_BlackboardVectorValueModifierInOut.generated.h"

UCLASS()
class UTresBTService_BlackboardVectorValueModifierInOut : public UTresBTService_BlackboardValueModifierInOutBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FTresBlackboardVectorValueModifierInOutParam> m_InParamList;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresBlackboardVectorValueModifierInOutParam> m_OutParamList;
    
public:
    UTresBTService_BlackboardVectorValueModifierInOut();
};

