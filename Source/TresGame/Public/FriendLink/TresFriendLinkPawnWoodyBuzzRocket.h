#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresFriendLinkPawnBase.h"
#include "TresFriendLinkPawnWoodyBuzzRocket.generated.h"

class ATresCameraNormal;
class AActor;
class ATresProjectileBase;
class UCurveVector;
class ATresCameraAirplane;

UCLASS()
class ATresFriendLinkPawnWoodyBuzzRocket : public ATresFriendLinkPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    ATresCameraNormal* m_Camera;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> m_pTargetPawn;
    
    UPROPERTY()
    ATresProjectileBase* m_pRocket;
    
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_WoodyBuzzRocketProj;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSpawnRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHorizonHeight;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveVector* m_ScaleCurveData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fStartLocZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fStartRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRoofDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLoopLocZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishLocZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishLocBossZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMoveSpeedMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMovePitchMaxUp;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMovePitchMaxDown;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMovePitchMaxDownLand;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMovePitchLocZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fInputPower;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bAutoHorizon: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackBrake;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackEndBrake;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackLimitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackStopDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackStopLimitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTurnToTargetSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackTurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackHomingDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackDistanceMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Param_CamBlendTimeST;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Param_CamBlendTimeED;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Param_CamDistanceLerpPer;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bInputReverseX: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bInputReverseY: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableBaseCamera: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bDispDebugInfoMoji: 1;
    
protected:
    UPROPERTY()
    ATresCameraAirplane* m_BaseCamera;
    
public:
    ATresFriendLinkPawnWoodyBuzzRocket();
};

