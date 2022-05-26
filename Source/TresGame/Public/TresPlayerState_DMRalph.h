#pragma once
#include "CoreMinimal.h"
#include "TresCharState_DMRalph.h"
#include "TresPlayerState_DMRalph.generated.h"

class ATresCameraNormal;
class ATresDisneyMagicPawnRalph;

UCLASS()
class UTresPlayerState_DMRalph : public UTresCharState_DMRalph {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresDisneyMagicPawnRalph* m_pObj;
    
    UPROPERTY()
    ATresCameraNormal* m_Camera;
    
    UTresPlayerState_DMRalph();
};

