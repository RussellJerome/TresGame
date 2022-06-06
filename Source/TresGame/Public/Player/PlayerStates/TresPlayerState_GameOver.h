#pragma once
#include "CoreMinimal.h"
#include "TresCharState_GameOver.h"
#include "TresPlayerState_GameOver.generated.h"

class ATresCameraAnim;

UCLASS()
class UTresPlayerState_GameOver : public UTresCharState_GameOver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ATresCameraAnim* m_Camera;
    
public:
    UTresPlayerState_GameOver();
};

