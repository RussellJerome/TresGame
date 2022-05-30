#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex307_ScareCard.generated.h"

class UAnimSequenceBase;
class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack1_e_ex307_ScareCard : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetDistance2D;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetDistanceHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShakeHeightRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OneShakeTime;
    
public:
    UTresAttack1_e_ex307_ScareCard();
};

