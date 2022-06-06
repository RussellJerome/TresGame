#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_Parameters.h"
#include "SQEX_BonamikChangingParameter.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_BonamikChangingParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> m_Groups;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ESQEX_Bonamik_Parameters> m_Parameter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_Value;
    
    BONAMIKRT_API FSQEX_BonamikChangingParameter();
};

