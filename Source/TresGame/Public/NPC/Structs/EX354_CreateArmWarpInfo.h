#pragma once
#include "CoreMinimal.h"
#include "ETresEnemy_e_ex354_ArmWarpPos.h"
#include "ETresEnemy_e_ex354_ArmWarpType.h"
#include "EEX354_ArmAimDirType.h"
#include "EEX354_ArmSpawnDirType.h"
#include "EEX354_ArmSpawnPosAdjustType.h"
#include "EX354_CreateArmWarpInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX354_CreateArmWarpInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresEnemy_e_ex354_ArmWarpType m_ArmWarpType;
    
    UPROPERTY(EditDefaultsOnly)
    ETresEnemy_e_ex354_ArmWarpPos m_PosType;
    
    UPROPERTY(EditDefaultsOnly)
    EEX354_ArmSpawnDirType m_DirType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fYaw;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bPitchAdjustToCamera;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPitchAdjustToCamera_MaxPitchDiff;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bReverseCameraPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPitchAdjustToCamera_MaxPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPitchAdjustToCamera_MinPitch;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bPitchAdjustToCamera_DebugDisp;
    
    UPROPERTY(EditDefaultsOnly)
    EEX354_ArmSpawnPosAdjustType m_SpawnPosAdjustType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnPosAdjustMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTargetVelocityAdjust_MaxVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTargetVelocityAdjustRate;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bTargetVelocityAdjustDirectional;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTargetVelocityAdjustDirectionalYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTargetVelocityAdjustDirectionalYawWidth;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTargetVelocityAdjustDirectionalScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinHeight;
    
    UPROPERTY(EditDefaultsOnly)
    EEX354_ArmAimDirType m_AimDirType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTargetVelocityRotAdjust_MaxVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTargetVelocityRotAdjustRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTargetVelocityRotAdjust_MaxPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTargetVelocityRotAdjust_MaxYaw;
    
    TRESGAME_API FEX354_CreateArmWarpInfo();
};

