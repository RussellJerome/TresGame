#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "TresEnemyPawn_e_ca901_JointParam.h"
#include "TresEnemyJointActor_e_ca901.generated.h"

UCLASS()
class ATresEnemyJointActor_e_ca901 : public ATresCharPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemyPawn_e_ca901_JointParam> m_JointParam;
    
public:
    ATresEnemyJointActor_e_ca901();
};

