#pragma once
#include "CoreMinimal.h"
#include "CameraSensitivityInfo.h"
#include "CameraSensitivityInfoSet.generated.h"

USTRUCT(BlueprintType)
struct FCameraSensitivityInfoSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FCameraSensitivityInfo m_RotationSpeedPitch;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FCameraSensitivityInfo m_RotationSpeedYaw;
    
    TRESGAME_API FCameraSensitivityInfoSet();
};

