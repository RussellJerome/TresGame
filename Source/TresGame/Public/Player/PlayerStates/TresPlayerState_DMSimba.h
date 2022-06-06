#pragma once
#include "CoreMinimal.h"
#include "TresCharState_DMSimba.h"
#include "TresPlayerState_DMSimba.generated.h"

class ATresDisneyMagicPawnSimba;
class ATresCameraDMSimba;

UCLASS()
class UTresPlayerState_DMSimba : public UTresCharState_DMSimba {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresDisneyMagicPawnSimba* m_pObj;
    
    UPROPERTY()
    ATresCameraDMSimba* m_Camera;
    
    UTresPlayerState_DMSimba();
};

