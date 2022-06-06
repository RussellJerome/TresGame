#include "TresAttack2_e_ex781_AirSlash.h"

UTresAttack2_e_ex781_AirSlash::UTresAttack2_e_ex781_AirSlash() {
    this->m_ToTargetTime = 0.50f;
    this->m_MoveSubDist = 200.00f;
    this->m_ToTargetSpeed = 2000.00f;
    this->m_IsClimaxSceneMode = false;
    this->m_ClimaxSceneCutOffsetZ = -100.00f;
    this->m_ClimaxSlashParticleData = NULL;
    this->m_GravityParticleData = NULL;
    this->m_ClimaxSceneMotStartTime = 0.00f;
    this->m_TestClimaxSceneAction = false;
    this->m_BulletProjectile = NULL;
    this->PlayVoiceRate = 0;
    this->m_PlayerPawn = NULL;
    this->m_GravityParticle = NULL;
}

