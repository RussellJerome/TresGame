#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_he903_Vacuum.generated.h"

class ATresHitPawnsManager_e_he903;
class UCurveFloat;
class AActor;

UCLASS(HideDropdown)
class UTresAction1_e_he903_Vacuum : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fLoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPullForce;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_SuctionVelCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_EatVelCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpitWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxFloatingTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLaunchHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLaunchTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> m_DummyActorClass;
    
    UPROPERTY()
    AActor* m_pDummyActor;
    
protected:
    UPROPERTY()
    ATresHitPawnsManager_e_he903* pHitPawnsManager;
    
public:
    UTresAction1_e_he903_Vacuum();
};

