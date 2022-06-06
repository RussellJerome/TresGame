#pragma once
#include "CoreMinimal.h"
#include "ETresCoopColorSmokeKind.h"
#include "TresCoopSimultaneousRushInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresCoopSimultaneousRushInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_Distance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Yaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Pitch;
    
    UPROPERTY(EditDefaultsOnly)
    ETresCoopColorSmokeKind m_ColorKind;
    
    TRESGAME_API FTresCoopSimultaneousRushInfo();
};

