#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack6_e_ex047_CloudMagic.generated.h"

class UAnimSequenceBase;
class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack6_e_ex047_CloudMagic : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* m_AttackAnimData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_AttackProjectile;
    
    UPROPERTY(EditAnywhere)
    float m_VariationDegree;
    
    UPROPERTY(EditAnywhere)
    float m_shotInterval;
    
    UPROPERTY(EditAnywhere)
    float m_TurnInterval;
    
    UPROPERTY(EditAnywhere)
    float m_ShotDir;
    
    UTresAttack6_e_ex047_CloudMagic();
};

