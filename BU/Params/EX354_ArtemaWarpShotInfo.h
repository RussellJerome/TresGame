#pragma once
#include "CoreMinimal.h"
#include "EX354_ArtemaWarpShotProjInfo.h"
#include "EX354_ArtemaWarpShotGridSet.h"
#include "UObject/NoExportTypes.h"
#include "EX354_ArtemaWarpShotInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX354_ArtemaWarpShotInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxShotTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fShotInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    FEX354_ArtemaWarpShotProjInfo m_ProjInfo;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSpawnInRectangle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSpawnLocDeviationXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSpawnLocDeviationX;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSpawnLocDeviationY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSpawnLocDeviationZ;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bAimInRectangle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAimLocDeviationRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAimLocDeviationX;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAimLocDeviationY;
    
    UPROPERTY(EditDefaultsOnly)
    FEX354_ArtemaWarpShotGridSet m_GridSet;
    
    UPROPERTY()
    bool m_bUseGrid;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_rAimLocOffsetRot;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAimLocMaxTargetVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAimLocTargetVelocityRate;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bAimLocTargetVelocity2D;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bAimLocEachShot;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_EqsIndex;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bRefreshEQS;
    
    TRESGAME_API FEX354_ArtemaWarpShotInfo();
};

