#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex016_ShadowOut.generated.h"

class UParticleSystem;
class UEnvQuery;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class UTresAttack3_e_ex016_ShadowOut : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DarkPuddleDisappearEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DarkPuddleAppearEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EQ_AppearLocation;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxDistanceToTarget;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinDistanceToTarget;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CameraAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnEffectTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Height;
    
    UPROPERTY(EditDefaultsOnly)
    float m_UpMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DownMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DownMoveSpeedMaxTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxSpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpeedXYMaxTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingAngleXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMinDistXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DownSpeedRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PlayDownMotionTime;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_DarkPuddleAppearEff;
    
public:
    UTresAttack3_e_ex016_ShadowOut();
};

