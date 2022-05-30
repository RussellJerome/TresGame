#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttackDefinitionRanged.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttackDefinitionRanged : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    class UAnimSequenceBase* m_AttackAnimData;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_NumberOfAttacks;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<class ATresProjectileBase> m_Projectile;
};

