#pragma once
#include "CoreMinimal.h"
#include "EEX359_CutDownYawType.h"
#include "EX359_BeamInfoSet.h"
#include "EX359_LaserInfoSet.h"
#include "EX359_CutDownTractionInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX359_CutDownTractionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxTractionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fYaw;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TEnumAsByte<EEX359_CutDownYawType> m_YawType;
    
    UPROPERTY(EditDefaultsOnly)
    FEX359_BeamInfoSet m_BeamInfoSet;
    
    UPROPERTY(EditDefaultsOnly)
    FEX359_LaserInfoSet m_LaserInfoSet;
    
    TRESGAME_API FEX359_CutDownTractionInfo();
};

