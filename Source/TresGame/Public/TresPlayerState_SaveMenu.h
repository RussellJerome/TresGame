#pragma once
#include "CoreMinimal.h"
#include "TresCharState_SaveMenu.h"
#include "TresPlayerState_SaveMenu.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS()
class UTresPlayerState_SaveMenu : public UTresCharState_SaveMenu {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    AActor* m_pTargetActor;
    
    UPROPERTY(Export, Transient)
    UPrimitiveComponent* m_pComponent;
    
    UTresPlayerState_SaveMenu();
};

