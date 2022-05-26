#pragma once
#include "CoreMinimal.h"
#include "TresCharState_AFRollerCoaster.h"
#include "TresPlayerState_AFRollerCoaster.generated.h"

class ATresCharPawnBase;
class ATresRailSlideActor;
class ATresAttractionPawnRollerCoaster;
class ATresAttractionPawnBase;
class ATresCameraBase;
class ATresPawnBase;

UCLASS()
class UTresPlayerState_AFRollerCoaster : public UTresCharState_AFRollerCoaster {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    ATresCharPawnBase* m_TargetPawn;
    
    UPROPERTY(Transient)
    ATresRailSlideActor* m_StartRailActor;
    
    UPROPERTY(Transient)
    ATresAttractionPawnRollerCoaster* m_pLeadCar;
    
    UPROPERTY(Transient)
    ATresAttractionPawnBase* m_pTailCar;
    
    UPROPERTY(Transient)
    ATresAttractionPawnBase* m_pRideCar;
    
    UPROPERTY(Transient)
    ATresCharPawnBase* m_pRailEffect;
    
    UPROPERTY(Transient)
    ATresCharPawnBase* m_pMarker;
    
    UPROPERTY(Transient)
    ATresPawnBase* m_pGateEffect;
    
    UPROPERTY(Transient)
    TArray<ATresAttractionPawnBase*> m_Cars;
    
    UPROPERTY(Transient)
    ATresCameraBase* m_Camera;
    
    UTresPlayerState_AFRollerCoaster();
};

