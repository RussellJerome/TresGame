#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack2_e_bx901_Drill.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack2_e_bx901_Drill : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AimBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vAimBoneOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDeviationRate_Max;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDeviationRate_Min;
    
    UTresAttack2_e_bx901_Drill();
};

