#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresFriendLinkPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "ETresEnemyUniqueID.h"
#include "UObject/NoExportTypes.h"
#include "TresFriendLinkPawnPowerStrike.generated.h"

class ATresProjectileBase;
class UCurveVector;
class ATresCameraFRPowerStrike;
class ATresCameraFixTarget;

UCLASS()
class ATresFriendLinkPawnPowerStrike : public ATresFriendLinkPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_SwingSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_SwingUpSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_SwingDownSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_JumpRange;
    
    UPROPERTY(EditAnywhere)
    float m_MinJumpPower;
    
    UPROPERTY(EditAnywhere)
    float m_MaxJumpPower;
    
    UPROPERTY(EditAnywhere)
    float m_DefaultJumpPower;
    
    UPROPERTY(EditAnywhere)
    float m_fFallTimer;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_PowerStrikeProjExp;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveVector* m_ScaleCurveData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishMoveAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishMinRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishMinMoveRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishFallLimitTimer;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishCheckCollision;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishMeshRotateRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishMeshRotatePitch;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bFinishWarpCheck;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresEnemyUniqueID> m_FinishEnemyIds;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_vPlayerUpMoveDir;
    
    UPROPERTY(EditDefaultsOnly)
    float m_vPlayerUpMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_vPlayerUpMoveMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_vPlayerUpMoveAccelTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bDisableOverlappedForce: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bHe904DisableCollsion: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHe904CollRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHe904CollHeight;
    
    UPROPERTY(EditAnywhere)
    FVector m_Param_CamTargetOfsFinish;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Param_CamDistanceFinish;
    
    UPROPERTY(EditAnywhere)
    float m_Param_CamBlendTimeST;
    
    UPROPERTY(EditAnywhere)
    float m_Param_CamBlendTimeED;
    
private:
    UPROPERTY()
    ATresCameraFRPowerStrike* m_Camera;
    
    UPROPERTY()
    ATresCameraFixTarget* m_FinishCamera;
    
    UPROPERTY()
    ATresProjectileBase* m_pProjectileExp;
    
public:
    ATresFriendLinkPawnPowerStrike();
};

