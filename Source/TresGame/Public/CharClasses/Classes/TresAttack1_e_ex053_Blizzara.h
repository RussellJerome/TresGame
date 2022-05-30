#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex053_Blizzara.generated.h"

class UAnimSequenceBase;
class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack1_e_ex053_Blizzara : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OffsetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OffsetDistanceZ;
    
public:
    UTresAttack1_e_ex053_Blizzara();
};

