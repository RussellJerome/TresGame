#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresDarkHomingAttackParam_e_dw407.h"
#include "TresAttack2_e_dw407_DarkHoming.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack2_e_dw407_DarkHoming : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_DarkHomingProjectileAsset;
    
    UPROPERTY(EditDefaultsOnly)
    FTresDarkHomingAttackParam_e_dw407 m_DarkHomingAttackParam;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HeadReflectOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HandReflectOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ReflectHomingAccelSpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ReflectHomingMaxSpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ReflectHomingAccelSpeedZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ReflectHomingMaxSpeedZ;
    
public:
    UTresAttack2_e_dw407_DarkHoming();
};

