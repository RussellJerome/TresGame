#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Hopping.h"
#include "TresNpcState_Hopping.generated.h"

class AActor;
class UTresHopComponent;

UCLASS()
class UTresNpcState_Hopping : public UTresCharState_Hopping {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* m_pHitActor;
    
    UPROPERTY(Export)
    UTresHopComponent* m_pHitComponent;
    
    UTresNpcState_Hopping();
};

