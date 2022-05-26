#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex822_Wind.generated.h"

class ATresWaterCurrentSplineActor;

UCLASS(HideDropdown)
class UTresAttack1_e_ex822_Wind : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWaterCurrentSplineActor> m_WaterSplineClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WindForce;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackCollisionGroupName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackCollisionAttackDataID;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackCollisionIntervalTime;
    
public:
    UTresAttack1_e_ex822_Wind();
};

