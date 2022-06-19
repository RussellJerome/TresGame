#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTService_WeaponAttack.generated.h"

class UTresAttackDefinitionWeaponBase;

UCLASS()
class UTresBTService_WeaponAttack : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_Target;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_Destination;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint32 m_bUseBBAttackDefinition: 1;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BBAttackDefinition;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresAttackDefinitionWeaponBase> m_AttackDefinition;
    
    UPROPERTY(EditAnywhere)
    uint32 m_bValidateLocation: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 m_bValidateOrientation: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 m_bValidateExecution: 1;
    
    UTresBTService_WeaponAttack();
};

