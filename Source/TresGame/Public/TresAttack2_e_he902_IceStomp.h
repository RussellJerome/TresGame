#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack2_e_he902_IceStomp.generated.h"

class ATresProjectile_e_he902_IceStomp;
class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack2_e_he902_IceStomp : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_e_he902_IceStomp> m_ProjectileManager;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vAttackStartRelativeLocation_R;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTargetableCenterYaw_R;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTargetableWidthYaw_R;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackLinesAngleMargin_R;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vAttackStartRelativeLocation_L;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTargetableCenterYaw_L;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTargetableWidthYaw_L;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackLinesAngleMargin_L;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackInterval;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxAttackCount;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackMargin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackSideDeviation;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fProjectileScale_Begin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fProjectileScale_End;
    
    UTresAttack2_e_he902_IceStomp();
};

