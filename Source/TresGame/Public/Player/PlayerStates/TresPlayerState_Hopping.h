#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Hopping.h"
#include "TresPlayerState_Hopping.generated.h"

class AActor;
class UTresHopComponent;

UCLASS()
class UTresPlayerState_Hopping : public UTresCharState_Hopping {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* m_pHitActor;
    
    UPROPERTY(Export)
    UTresHopComponent* m_pHitComponent;
    
    UTresPlayerState_Hopping();
};

