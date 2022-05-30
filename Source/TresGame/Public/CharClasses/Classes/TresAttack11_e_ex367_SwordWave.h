#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack11_e_ex367_SwordWave.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack11_e_ex367_SwordWave : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_WarpTime;
    
    UPROPERTY(EditAnywhere)
    float m_WarpRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(EditAnywhere)
    FVector m_SwordWaveOffset;
    
public:
    UTresAttack11_e_ex367_SwordWave();
};

