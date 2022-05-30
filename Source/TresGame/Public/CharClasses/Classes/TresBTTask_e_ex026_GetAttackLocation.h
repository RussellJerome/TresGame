#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTTask_e_ex026_GetAttackLocation.generated.h"

class UTresAttack_e_ex026_WeaponAttackBase;

UCLASS()
class UTresBTTask_e_ex026_GetAttackLocation : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresAttack_e_ex026_WeaponAttackBase> m_ActionDefinition;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_Target;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardKey;
    
    UTresBTTask_e_ex026_GetAttackLocation();
};

