#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "DarkRushTypes_e_ex325.h"
#include "TresAttack6_e_ex325_DarkRush.generated.h"

class UTresStateBase;

UCLASS(HideDropdown)
class UTresAttack6_e_ex325_DarkRush : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<DarkRushTypes_e_ex325> m_DarkRushType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_BuddyState;
    
    UPROPERTY(EditAnywhere)
    bool m_IsDoTeleport;
    
    UPROPERTY(EditAnywhere)
    float m_RotSpeed;
    
public:
    UTresAttack6_e_ex325_DarkRush();
};

