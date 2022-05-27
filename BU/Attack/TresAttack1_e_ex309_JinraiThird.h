#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack1_e_ex309_JinraiBase.h"
#include "TresAttack1_e_ex309_JinraiThird.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack1_e_ex309_JinraiThird : public UTresAttack1_e_ex309_JinraiBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> m_ShotSocketNameList;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetCenterDistance2D;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileCenterAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileOffsetDistance;
    
public:
    UTresAttack1_e_ex309_JinraiThird();
};

