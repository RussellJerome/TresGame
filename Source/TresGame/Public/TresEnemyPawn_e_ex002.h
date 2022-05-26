#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex002.generated.h"

UCLASS()
class ATresEnemyPawn_e_ex002 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bIsHakkou: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_GuardAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_AnticipateTurnOffsetAngle;
    
    ATresEnemyPawn_e_ex002();
};

