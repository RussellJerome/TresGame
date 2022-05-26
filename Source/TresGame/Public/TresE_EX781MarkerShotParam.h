#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresE_EX781MarkerShotParam.generated.h"

USTRUCT(BlueprintType)
struct FTresE_EX781MarkerShotParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_MarkerWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ShotNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_Offset;
    
    TRESGAME_API FTresE_EX781MarkerShotParam();
};

