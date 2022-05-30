#pragma once
#include "CoreMinimal.h"
#include "EX359_BeamOnCircleInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX359_BeamOnCircleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fAngle;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iNotify;
    
    TRESGAME_API FEX359_BeamOnCircleInfo();
};

