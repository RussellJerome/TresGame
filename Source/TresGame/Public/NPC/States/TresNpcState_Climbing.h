#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Climbing.h"
#include "TresNpcState_Climbing.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS()
class UTresNpcState_Climbing : public UTresCharState_Climbing {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* m_pAttachActor;
    
    UPROPERTY(Export)
    UPrimitiveComponent* m_pAttachComponent;
    
    UTresNpcState_Climbing();
};

