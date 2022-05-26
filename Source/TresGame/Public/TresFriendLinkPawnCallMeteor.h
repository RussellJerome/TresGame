#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresFriendLinkPawnBase.h"
#include "TresFriendLinkPawnCallMeteorData.h"
#include "TresFriendLinkPawnCallMeteor.generated.h"

class ATresProjectileBase;
class UCurveVector;
class UParticleSystem;
class AActor;

UCLASS()
class ATresFriendLinkPawnCallMeteor : public ATresFriendLinkPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresFriendLinkPawnCallMeteorData> m_MeteorInfos;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBaseSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fWhiteOutTimer;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fWhiteInTimer;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDisappearFade;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAppearFade;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAppearScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAppearRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAppearHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bAppearNoHitWall: 1;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bUseHopeRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishHopeRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishMaxRange;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_MeteorProj;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_MeteorExpProj;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveVector* m_ShakeCurveData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_FireEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_FadeEffect;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAppearCameraHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAppearCameraRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAppearCameraOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishCameraHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishCameraRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishCameraOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishCameraYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLandCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bDispCollisionError: 1;
    
private:
    UPROPERTY()
    AActor* m_pDummyTarget;
    
    UPROPERTY()
    ATresProjectileBase* m_pProjectileExp;
    
public:
    ATresFriendLinkPawnCallMeteor();
};

