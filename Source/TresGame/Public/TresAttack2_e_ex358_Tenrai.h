#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack_e_ex358_Base.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack2_e_ex358_Tenrai.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack2_e_ex358_Tenrai : public UTresAttack_e_ex358_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_CenterProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableEveryFrameCalcRootMotionScale: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackEndTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval m_RootMotionScaleRangeXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RootMotionScaleZ;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsSpawnLandingProjectile: 1;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileDelayTime;
    
public:
    UTresAttack2_e_ex358_Tenrai();
};

