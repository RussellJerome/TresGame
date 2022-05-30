#pragma once
#include "CoreMinimal.h"
#include "BX901_RailSlideProjectileInfo.h"
#include "BX901_DarkCubeMineInfo.h"
#include "BX901_DarkCubeMineProjInfo.generated.h"

USTRUCT(BlueprintType)
struct FBX901_DarkCubeMineProjInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool m_bNormal;
    
    UPROPERTY(EditDefaultsOnly)
    FBX901_RailSlideProjectileInfo m_RailSlideProjInfo;
    
    UPROPERTY(EditDefaultsOnly)
    FBX901_DarkCubeMineInfo m_ProjInfo;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSpawnDelayTime;
    
    TRESGAME_API FBX901_DarkCubeMineProjInfo();
};

