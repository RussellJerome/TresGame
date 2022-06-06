#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresE_EX781_GunShotMarkerPatternParam.generated.h"

USTRUCT(BlueprintType)
struct FTresE_EX781_GunShotMarkerPatternParam {
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
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_IsChaseTarget: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_IsTargetPos: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetDist;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D m_TargetDir;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_UseEXMode;
    
    TRESGAME_API FTresE_EX781_GunShotMarkerPatternParam();
};

