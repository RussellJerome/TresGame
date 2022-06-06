#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack8_e_ex301_ContinuousSlash.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack8_e_ex301_ContinuousSlash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveZSpeed;
    
    UPROPERTY(EditAnywhere)
    FVector m_SwordWaveOffset;
    
    UPROPERTY(EditAnywhere)
    bool m_CanbeEndAttackCancel;
    
    UTresAttack8_e_ex301_ContinuousSlash();
};

