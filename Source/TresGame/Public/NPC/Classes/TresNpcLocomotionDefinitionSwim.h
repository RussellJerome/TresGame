#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionMercunaBase.h"
#include "TresNpcLocomotionDefinitionSwim.generated.h"

UCLASS()
class UTresNpcLocomotionDefinitionSwim : public UTresLocomotionDefinitionMercunaBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_MinWaterSurfaceSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxWaterSurfaceSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinUnderWaterSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxUnderWaterSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bOnlyWaterSurface;
    
    UPROPERTY(EditDefaultsOnly)
    float m_InViewportSpeedRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OutViewportSpeedRate;
    
public:
    UTresNpcLocomotionDefinitionSwim();
};

