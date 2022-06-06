#include "TresAttack23_e_ex781_ClimaxSceneSlash.h"

UTresAttack23_e_ex781_ClimaxSceneSlash::UTresAttack23_e_ex781_ClimaxSceneSlash() {
    this->m_CameraLockonCenter = false;
    this->m_CameraLockonCenterTime = 0.00f;
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
    this->m_GravitySpherePosOffsetZ = 0.00f;
    this->m_CrimaxSceneGravityPower = 0.00f;
    this->m_CrimaxSceneRateCurve = NULL;
    this->PlayVoiceRate = 0;
    this->m_CrimaxSceneAnimWaitTime = 0.50f;
    this->m_PlayerPawn = NULL;
    this->m_GravityParticle = NULL;
}

