#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresFriendLinkPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresFriendLinkPawnGiantSoldier.generated.h"

class ATresCameraNormal;
class ATresProjectileBase;

UCLASS()
class ATresFriendLinkPawnGiantSoldier : public ATresFriendLinkPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fMaxWalkSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_fJumpPower;
    
    UPROPERTY(EditAnywhere)
    float m_fFallTimer;
    
    UPROPERTY(EditAnywhere)
    float m_fAttackMoveSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_fAttackTurnSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_fAttackVoiceWaitTimer;
    
    UPROPERTY(EditAnywhere)
    FVector m_vDetachPlayerOffset;
    
    UPROPERTY(EditAnywhere)
    float m_fDetachPlayerMeshRate;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_AtkCollProj;
    
    UPROPERTY(EditAnywhere)
    FVector m_Param_CamTargetOfsNormal;
    
    UPROPERTY(EditAnywhere)
    FRotator m_Param_CamRotationNormal;
    
    UPROPERTY(EditAnywhere)
    float m_Param_CamDistanceNormal;
    
    UPROPERTY(EditAnywhere)
    float m_Param_CamTurningPower;
    
    UPROPERTY(EditAnywhere)
    float m_Param_CamBlendTimeST;
    
    UPROPERTY(EditAnywhere)
    float m_Param_CamBlendTimeED;
    
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
    ATresCameraNormal* m_Camera;
    
    UPROPERTY()
    ATresProjectileBase* m_pProjectile;
    
public:
    ATresFriendLinkPawnGiantSoldier();
};

