#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTTask_WeaponAttack.generated.h"

class UTresAttackDefinitionWeaponBase;

UCLASS()
class UTresBTTask_WeaponAttack : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_Target;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_Destination;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint32 m_bUseBBAttackDefinitionWeapon: 1;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BBAttackDefinitionWeapon;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresAttackDefinitionWeaponBase> m_AttackDefinitionWeapon;
    
    UTresBTTask_WeaponAttack();
};

