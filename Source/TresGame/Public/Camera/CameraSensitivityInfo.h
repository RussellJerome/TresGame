#pragma once
#include "CoreMinimal.h"
#include "CameraSensitivityInfo.generated.h"

USTRUCT(BlueprintType)
struct FCameraSensitivityInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fMin;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fMax;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fSensitivity;
    
    TRESGAME_API FCameraSensitivityInfo();
};

