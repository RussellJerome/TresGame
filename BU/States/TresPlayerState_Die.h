#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Die.h"
#include "TresPlayerState_Die.generated.h"

class AActor;
class ATresCameraAnim;

UCLASS()
class UTresPlayerState_Die : public UTresCharState_Die {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    AActor* m_pDefeatActor;
    
protected:
    UPROPERTY(Transient)
    ATresCameraAnim* m_Camera;
    
public:
    UTresPlayerState_Die();
};

