#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Hopping.h"
#include "TresAICharState_NavLinkHopping.generated.h"

class AActor;
class UTresHopComponent;

UCLASS()
class UTresAICharState_NavLinkHopping : public UTresCharState_Hopping {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* m_pHitActor;
    
    UPROPERTY(Export)
    UTresHopComponent* m_pHitComponent;
    
    UTresAICharState_NavLinkHopping();
};

