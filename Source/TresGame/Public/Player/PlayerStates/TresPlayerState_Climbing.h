#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Climbing.h"
#include "TresPlayerState_Climbing.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS()
class UTresPlayerState_Climbing : public UTresCharState_Climbing {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* m_pAttachActor;
    
    UPROPERTY(Export)
    UPrimitiveComponent* m_pAttachComponent;
    
    UTresPlayerState_Climbing();
};

