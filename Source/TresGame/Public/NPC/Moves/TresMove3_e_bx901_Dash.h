#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionFlyCodeDriven.h"
#include "BX901_DarkCubeMineGroupSpawnInfo.h"
#include "TresMove3_e_bx901_Dash.generated.h"

class UCurveFloat;

UCLASS(HideDropdown)
class UTresMove3_e_bx901_Dash : public UTresLocomotionDefinitionFlyCodeDriven {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FBX901_DarkCubeMineGroupSpawnInfo m_GroupSpawnInfo;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_ShotWaitTimeScaleOnTargetDistanceCurve;
    
    UTresMove3_e_bx901_Dash();
};

