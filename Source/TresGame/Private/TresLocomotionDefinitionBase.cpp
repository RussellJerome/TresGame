#include "TresLocomotionDefinitionBase.h"
#include "TresNavigationQueryFilter.h"

UTresLocomotionDefinitionBase::UTresLocomotionDefinitionBase() {
    this->m_MinSpeed = 200.00f;
    this->m_MaxSpeed = 400.00f;
    this->m_Acceleration = 100.00f;
    this->m_bUseAngularAcceleration = false;
    this->m_AngularAcceleration = 50.00f;
    this->m_bRotInterpolation = true;
    this->m_RotInterpSpeed = 6.00f;
    this->m_Mode = ETresLocomotionMode::Forward;
    this->m_CorridorCheckInterval = 0.50f;
    this->m_SmoothSampleSize = 1;
    this->m_EntryMovementMode = MOVE_None;
    this->m_MovementMode = MOVE_None;
    this->m_ExitMovementMode = MOVE_None;
    this->m_StateMachineNumber = 0;
    this->m_FilterClass = UTresNavigationQueryFilter::StaticClass();
}

