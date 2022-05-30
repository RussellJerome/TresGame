#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Talk.h"
#include "TresPlayerState_Talk.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS()
class UTresPlayerState_Talk : public UTresCharState_Talk {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    AActor* m_pTargetActor;
    
    UPROPERTY(Export, Transient)
    UPrimitiveComponent* m_pComponent;
    
    UTresPlayerState_Talk();
};

