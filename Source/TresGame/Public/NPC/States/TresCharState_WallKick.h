#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresCharState_WallKick.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS()
class UTresCharState_WallKick : public UTresStateBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* m_pHitActor;
    
    UPROPERTY(Export)
    UPrimitiveComponent* m_pHitComponent;
    
    UTresCharState_WallKick();
};

