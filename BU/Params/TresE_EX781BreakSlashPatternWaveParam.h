#pragma once
#include "CoreMinimal.h"
#include "TresE_EX781BreakSlashPatternWaveParam.generated.h"

USTRUCT(BlueprintType)
struct FTresE_EX781BreakSlashPatternWaveParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_IntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SwordWaveRot;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LookAheadTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_BulletID;
    
    TRESGAME_API FTresE_EX781BreakSlashPatternWaveParam();
};

