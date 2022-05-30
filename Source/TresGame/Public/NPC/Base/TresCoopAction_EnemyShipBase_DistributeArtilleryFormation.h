#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresCoopAction_EnemyShipBase_DistributeArtilleryFormation.generated.h"

UCLASS(HideDropdown)
class UTresCoopAction_EnemyShipBase_DistributeArtilleryFormation : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_DepthOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ArcLengthFirst;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ArcLengthSecond;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RadiusAddDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_YawDeclRate;
    
    UTresCoopAction_EnemyShipBase_DistributeArtilleryFormation();
};

