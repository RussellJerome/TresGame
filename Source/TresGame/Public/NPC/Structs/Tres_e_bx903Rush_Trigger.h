#pragma once
#include "CoreMinimal.h"
#include "Tres_e_bx903Rush_Trigger.generated.h"

USTRUCT(BlueprintType)
struct FTres_e_bx903Rush_Trigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_triggerTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_attachBoneName;
    
    TRESGAME_API FTres_e_bx903Rush_Trigger();
};

