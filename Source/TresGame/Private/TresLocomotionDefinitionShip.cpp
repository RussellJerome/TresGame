#include "TresLocomotionDefinitionShip.h"

class UBTService;

float UTresLocomotionDefinitionShip::GetTurningDirectionScoringFactor() const {
    return 0.0f;
}

FRotator UTresLocomotionDefinitionShip::GetTurningDirection() const {
    return FRotator{};
}

float UTresLocomotionDefinitionShip::GetRootCollisionDiameterXY() const {
    return 0.0f;
}

float UTresLocomotionDefinitionShip::GetAvoidanceDistance(float InDeltaTime, UBTService* BTService) const {
    return 0.0f;
}

UTresLocomotionDefinitionShip::UTresLocomotionDefinitionShip() {
    this->m_DecelerationAngle = 5.00f;
    this->m_TurningDirectionFixTime = 1.00f;
    this->m_MinSpeedDestroyedMast = 400.00f;
    this->m_MaxSpeedDestroyedMast = 500.00f;
    this->m_AccelerationDestroyedMast = 250.00f;
    this->m_MaxRotationSpeedTime = 1.00f;
    this->m_MaxRotationSpeedAngle = 5.00f;
    this->m_MinRotSpeedRateByVelocity = 0.20f;
    this->m_MinSpeedForRotSpeedRate = 0.00f;
    this->m_StartDeceleTimeToReachEnd = 1.00f;
}

