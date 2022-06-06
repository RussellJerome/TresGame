#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Rescue.h"
#include "TresPlayerState_Rescue.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS()
class UTresPlayerState_Rescue : public UTresCharState_Rescue {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    AActor* m_pTargetActor;
    
    UPROPERTY(Export, Transient)
    UPrimitiveComponent* m_pComponent;
    
    UTresPlayerState_Rescue();
};

