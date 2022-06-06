#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresActionDefinitionBase.h"
#include "TresAction_e_bx901_Test.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAction_e_bx901_Test : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UTresAction_e_bx901_Test();
};

