#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresFieldVoiceCommonParam.generated.h"

UCLASS()
class UTresFieldVoiceCommonParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_GroupName;
    
    UPROPERTY(EditAnywhere)
    int32 m_ExecuteNum;
    
    UTresFieldVoiceCommonParam();
};

