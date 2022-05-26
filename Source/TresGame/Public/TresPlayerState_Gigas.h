#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresPlayerState_Gigas.generated.h"

class ATresVehiclePawnGigas;
class ATresCameraFirstPerson;

UCLASS()
class UTresPlayerState_Gigas : public UTresStateBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresVehiclePawnGigas* m_pObj;
    
protected:
    UPROPERTY()
    ATresCameraFirstPerson* m_Camera;
    
public:
    UTresPlayerState_Gigas();
};

