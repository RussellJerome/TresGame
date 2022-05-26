#pragma once
#include "CoreMinimal.h"
#include "TresPlayerPawnBase.h"
#include "TresPlayerPawnKairi.generated.h"

class UTresUIDataAsset;

UCLASS()
class ATresPlayerPawnKairi : public ATresPlayerPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UTresUIDataAsset* m_UIDataShootFlow;
    
public:
    ATresPlayerPawnKairi();
};

