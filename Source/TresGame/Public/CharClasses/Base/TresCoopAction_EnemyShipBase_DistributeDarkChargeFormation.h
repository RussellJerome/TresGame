#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresCoopAction_EnemyShipBase_DistributeDarkChargeFormation.generated.h"

UCLASS(HideDropdown)
class UTresCoopAction_EnemyShipBase_DistributeDarkChargeFormation : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector m_OffsetPos;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_OffsetPos2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetPredictionOffsetTime;
    
    UTresCoopAction_EnemyShipBase_DistributeDarkChargeFormation();
};

