#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Check.h"
#include "TresPlayerState_Check.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS()
class UTresPlayerState_Check : public UTresCharState_Check {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    AActor* m_pTargetActor;
    
    UPROPERTY(Export, Transient)
    UPrimitiveComponent* m_pComponent;
    
    UTresPlayerState_Check();
};

