#pragma once
#include "CoreMinimal.h"
#include "TresFieldGenerateParamBase_e_ex357.h"
#include "FieldGenerateMapParam_e_ex357.h"
#include "TresFieldGenerateMapParam_e_ex357.generated.h"

UCLASS(EditInlineNew)
class UTresFieldGenerateMapParam_e_ex357 : public UTresFieldGenerateParamBase_e_ex357 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FFieldGenerateMapParam_e_ex357> ParamList;
    
    UTresFieldGenerateMapParam_e_ex357();
};

