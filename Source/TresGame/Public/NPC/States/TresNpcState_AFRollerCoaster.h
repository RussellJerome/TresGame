#pragma once
#include "CoreMinimal.h"
#include "TresCharState_AFRollerCoaster.h"
#include "TresNpcState_AFRollerCoaster.generated.h"

class AActor;

UCLASS()
class UTresNpcState_AFRollerCoaster : public UTresCharState_AFRollerCoaster {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* m_pAttachActor;
    
    UTresNpcState_AFRollerCoaster();
};

