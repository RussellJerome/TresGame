#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "EX355_ThrowHomingInfo.generated.h"

class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FEX355_ThrowHomingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fInitVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinHomingDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxHomingAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fInitHomingRotateVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxHomingRotateVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingRotateAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxHomingAngleIgnoreTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bEnableGrabityOnDisablingHomingToLandTarget;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fGravityScale;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSpawnNextProjectileOnHomingEnd;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vSpawnNextProjLocationOffset;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxRespawnCount;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fNextRespawnWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjectileClass;
    
    TRESGAME_API FEX355_ThrowHomingInfo();
};

