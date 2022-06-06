#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_PatchworkAnimalsBase_Tackle.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_PatchworkAnimalsBase_Tackle : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_LoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Speed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HitWallEndAngle;
    
public:
    UTresAttack1_PatchworkAnimalsBase_Tackle();
};

