#pragma once
#include "CoreMinimal.h"
#include "TresNpcLocomotionDefinitionLand.h"
#include "TresNpcLocomotionDefinitionLand_FollowPlayer.generated.h"

UCLASS()
class UTresNpcLocomotionDefinitionLand_FollowPlayer : public UTresNpcLocomotionDefinitionLand {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_InViewportSpeedRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OutViewportSpeedRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpStartDistance;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_DecelerationTime;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_RangeSamePlayerSpeed;
    
public:
    UTresNpcLocomotionDefinitionLand_FollowPlayer();
};

