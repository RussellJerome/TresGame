#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex721_Darkbird.generated.h"

class UAnimSequenceBase;
class ATresProjectile_e_ex721_Darkbird;

UCLASS(HideDropdown)
class UTresAttack3_e_ex721_Darkbird : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsNearAttackDef: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GatherMinRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GatherMaxRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GatherMinHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GatherMaxHeight;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_GatherBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GatherOffsetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_DarkBirdAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_e_ex721_Darkbird> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ShotNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AimNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AllGatherDashTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotateSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotateAccelSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotateMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileAccelSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileMaxAngleYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileMinAnglePitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileMaxAnglePitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingAccelSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingOffsetDistMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingOffsetDistMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingEndDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingEndAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingAbsoluteTime;
    
public:
    UTresAttack3_e_ex721_Darkbird();
};

