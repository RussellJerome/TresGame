#include "TresNpcAttackDefinitionRanged.h"

UTresNpcAttackDefinitionRanged::UTresNpcAttackDefinitionRanged() {
    this->m_bPitch = true;
    this->m_PitchToleranceUp = 45.00f;
    this->m_PitchToleranceDown = 0.00f;
    this->m_ShotPitchMax = 45.00f;
    this->m_ShotPitchMin = 0.00f;
    this->m_ShotYawMinMax = 30.00f;
}

