#include "TresAttack3_e_dw407b_BigRoarLaser.h"

UTresAttack3_e_dw407b_BigRoarLaser::UTresAttack3_e_dw407b_BigRoarLaser() {
    this->m_BigRoarLasarLoopTime = 10.00f;
    this->m_InitialSpawnProjectileTime = 0.10f;
    this->m_PillarLightWaitTime = 0.90f;
    this->m_SplineMoveWaitTime = 0.30f;
    this->m_VariabilityMinTime = 0.10f;
    this->m_VariabilityMaxTime = 1.00f;
    this->m_SpawnProjectileTime = 10.00f;
    this->m_SpawnProjectileInterval = 0.10f;
    this->m_InitSpeed = 1000.00f;
    this->m_Acceleration = 1000.00f;
    this->m_MaxSpeed = 3000.00f;
    this->m_DecelerationStartParcentage = 50;
    this->m_LoopEndStartParcentage = 80;
    this->m_Deceleration = 2500.00f;
    this->m_MinSpeed = 1000.00f;
}

