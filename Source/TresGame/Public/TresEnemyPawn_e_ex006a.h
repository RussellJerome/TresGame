#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex006a.generated.h"

UCLASS()
class ATresEnemyPawn_e_ex006a : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_MasterPoseNum;
    
    ATresEnemyPawn_e_ex006a();
};

