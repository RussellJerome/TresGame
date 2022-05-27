#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionRanged.h"
#include "TresAttack2_e_ex106_WeaponExpansionShot.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_e_ex106_WeaponExpansionShot : public UTresAttackDefinitionRanged {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_FirstProjectileSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SecondProjectileSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FirstProjectileHomingXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FirstProjectileHomingZ;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_SecondProjectileHomingXY;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_SecondProjectileHomingZ;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_SecondProjectileMinDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotTimer;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_ChildProjectileTimer;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_StopDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_LazerPointerScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_YawRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PitchRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Inertia;
    
    UTresAttack2_e_ex106_WeaponExpansionShot();
};

