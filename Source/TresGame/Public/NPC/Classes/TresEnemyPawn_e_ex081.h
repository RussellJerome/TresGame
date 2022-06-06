#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex081.generated.h"

class UTresActionDefinitionBase;
class UEnvQuery;

UCLASS()
class ATresEnemyPawn_e_ex081 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresActionDefinitionBase> m_UpsideDownFallActionData;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EQ_TargetSelection;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_UpsideDownFallAppearID;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_UpsideDownFallDisappearID;
    
    ATresEnemyPawn_e_ex081();
};

