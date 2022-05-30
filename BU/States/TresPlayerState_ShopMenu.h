#pragma once
#include "CoreMinimal.h"
#include "TresCharState_ShopMenu.h"
#include "TresPlayerState_ShopMenu.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS()
class UTresPlayerState_ShopMenu : public UTresCharState_ShopMenu {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    AActor* m_pTargetActor;
    
    UPROPERTY(Export, Transient)
    UPrimitiveComponent* m_pComponent;
    
    UTresPlayerState_ShopMenu();
};

