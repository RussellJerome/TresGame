#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresNpcPawnBase.h"
#include "TresNpcPawn_n_mi202.generated.h"

class ATresAccompanyPawnBase;

UCLASS()
class ATresNpcPawn_n_mi202 : public ATresNpcPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresAccompanyPawnBase> m_FRMikeBowlingBP;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MikeMoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MikeMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MikeSpeedDownTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MikeTurnMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MikeTurnMinYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MikeAccelTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MikeAccelSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MikeStunTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MikeStraightTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_IntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetLockTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_AddNormalTarget: 1;
    
private:
    UPROPERTY()
    bool m_IsLinkMode;
    
public:
    ATresNpcPawn_n_mi202();
    UFUNCTION(BlueprintCallable)
    bool IsMikeAppealOn();
    
};

