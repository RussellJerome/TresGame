#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Swaying.h"
#include "TresPlayerState_Swaying.generated.h"

class ATresCharPawnBase;

UCLASS()
class UTresPlayerState_Swaying : public UTresCharState_Swaying {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresCharPawnBase* m_pSwayPawn;
    
    UTresPlayerState_Swaying();
};

