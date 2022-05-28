#pragma once
#include "CoreMinimal.h"
#include "EX359_BeamOnTimeInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX359_BeamOnTimeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fNotifyTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iNotify;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSetToTimeOnHit;
    
    TRESGAME_API FEX359_BeamOnTimeInfo();
};

