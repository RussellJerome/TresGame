#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex308_TornadoCut.generated.h"

class UAnimSequenceBase;
class ATresWaterCurrentSplineActor;

UCLASS(HideDropdown)
class UTresAttack2_e_ex308_TornadoCut : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AbsorptionAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AttackAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RootMotionScaleXY;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWaterCurrentSplineActor> m_WaterSplineClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WindForce;
    
public:
    UTresAttack2_e_ex308_TornadoCut();
};

