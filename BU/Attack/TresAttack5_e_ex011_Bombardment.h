#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresMotion_e_ex011_Bombardment.h"
#include "TresAttack_e_ex011_Base.h"
#include "TresAttack5_e_ex011_Bombardment.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack5_e_ex011_Bombardment : public UTresAttack_e_ex011_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FTresMotion_e_ex011_Bombardment m_AnimDataList[3];
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> m_ShotSocketNameList;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotationRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotLimitAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotHeightOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileSpeedRate[3];
    
public:
    UTresAttack5_e_ex011_Bombardment();
};

