#pragma once
#include "CoreMinimal.h"
#include "EX359_LaserOnTimeInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX359_LaserOnTimeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fNotifyTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fModifySpawnTFTime;
    
    UPROPERTY()
    bool m_bModifySpawnTF;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iNotify;
    
    TRESGAME_API FEX359_LaserOnTimeInfo();
};

