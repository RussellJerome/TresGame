#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack1_e_ex358_JinraiBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack1_e_ex358_JinraiThird.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack1_e_ex358_JinraiThird : public UTresAttack1_e_ex358_JinraiBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> m_ShotSocketNameList;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval m_ProjectileCenterHomingDistanceRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileCenterHomingMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileCenterAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileOffsetDistance;
    
public:
    UTresAttack1_e_ex358_JinraiThird();
};

