#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack_e_dw405_Base.h"
#include "TresE_dw405_AvatarStyleFinishVelocityParam.h"
#include "Base/TresAttack_e_dw405_Base.h"
#include "TresAttack6_e_dw405_AvatarStyleFinish.generated.h"

class UAnimSequenceBase;
class UTresStateBase;
class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack6_e_dw405_AvatarStyleFinish : public UTresAttack_e_dw405_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_StartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_LoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_EndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotationTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotationEndDistance;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresE_dw405_AvatarStyleFinishVelocityParam> m_VelocityParams;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CenterMoveDeceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CenterOffsetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackVecAddRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMinHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttachToAcceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttachToMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ViewTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_ActionDefClass;
    
public:
    UTresAttack6_e_dw405_AvatarStyleFinish();
};

