#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresFriendLinkPawnBase.h"
#include "TresFriendLinkPawnFlareForceData.h"
#include "UObject/NoExportTypes.h"
#include "TresFriendLinkPawnFlareForce.generated.h"

class AActor;
class ATresProjectileBase;
class UCurveVector;

UCLASS()
class ATresFriendLinkPawnFlareForce : public ATresFriendLinkPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresFriendLinkPawnFlareForceData> m_MissileInfos;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bUseHopeRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishHopeRange;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_nLockOnMaxNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLifeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingUpdateRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDisappearCameraTimer;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDisappearCameraInterpolate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAppearPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAppearScale;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vAppearOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vUpOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTargetHeight_3;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTargetHeight_2;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_MissileProj;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_MissileExpProj;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveVector* m_AppearCurveData;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveVector* m_FireCurveData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAppearCameraHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAppearCameraRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAppearCameraOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLandCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bDispCollisionError: 1;
    
private:
    UPROPERTY()
    AActor* m_pDummyTarget;
    
public:
    ATresFriendLinkPawnFlareForce();
};

