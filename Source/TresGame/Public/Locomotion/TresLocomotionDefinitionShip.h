#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresLocomotionDefinitionShip.generated.h"

class UBTService;

UCLASS(Abstract, HideDropdown)
class UTresLocomotionDefinitionShip : public UTresLocomotionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_DecelerationAngle;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_TurningDirectionFixTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinSpeedDestroyedMast;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxSpeedDestroyedMast;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AccelerationDestroyedMast;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_MaxRotationSpeedDestroyedMast;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_MaxRotationSpeedMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxRotationSpeedTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxRotationSpeedAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinRotSpeedRateByVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinSpeedForRotSpeedRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartDeceleTimeToReachEnd;
    
public:
    UTresLocomotionDefinitionShip();
    UFUNCTION(BlueprintPure)
    float GetTurningDirectionScoringFactor() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetTurningDirection() const;
    
    UFUNCTION(BlueprintPure)
    float GetRootCollisionDiameterXY() const;
    
    UFUNCTION(BlueprintPure)
    float GetAvoidanceDistance(float InDeltaTime, UBTService* BTService) const;
    
};

