#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresCharState_Dangle.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS()
class UTresCharState_Dangle : public UTresStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    AActor* m_pAttachActor;
    
    UPROPERTY(Export, Transient)
    UPrimitiveComponent* m_pAttachComponent;
    
    UTresCharState_Dangle();
};

