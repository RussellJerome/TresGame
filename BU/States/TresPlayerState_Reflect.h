#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Reflect.h"
#include "TresPlayerState_Reflect.generated.h"

class AActor;

UCLASS()
class UTresPlayerState_Reflect : public UTresCharState_Reflect {
    GENERATED_BODY()
public:
    UPROPERTY(DuplicateTransient, Transient)
    AActor* m_pTargetActor;
    
    UTresPlayerState_Reflect();
};

