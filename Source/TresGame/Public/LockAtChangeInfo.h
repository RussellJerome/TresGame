#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "LockAtChangeInfo.generated.h"

USTRUCT(BlueprintType)
struct FLockAtChangeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fChangeDot;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TEnumAsByte<EViewTargetBlendFunction> m_eInterpFunction;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fInterpSec;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fInterpExp;
    
    TRESGAME_API FLockAtChangeInfo();
};

