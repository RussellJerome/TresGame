#pragma once
#include "CoreMinimal.h"
#include "TresComNpcFaceMotion.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcFaceMotion {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_EyeAnimName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fEyeBlendInTime;
    
    TRESGAME_API FTresComNpcFaceMotion();
};

