#include "TresAttack7_e_ex360_KBRideTackle.h"

UTresAttack7_e_ex360_KBRideTackle::UTresAttack7_e_ex360_KBRideTackle() {
    this->m_TackleParticleData = NULL;
    this->m_SpawnTailIntervalTime = 0.00f;
    this->m_KBTailAttackPawnData = NULL;
    this->m_TargetHighOffset = 0.00f;
    this->m_SubSpeed = 0.00f;
    this->m_InitSpeed = 500.00f;
    this->m_AddSpeed = 2000.00f;
    this->m_Speed = 0.00f;
    this->m_RotationSpeed = 0.00f;
    this->m_HomingSpeed = 0.00f;
    this->m_HomingTimeMax = 5.00f;
    this->m_HomingEndDist = 500.00f;
    this->m_HomingEndTime = 1.00f;
    this->m_MoveLandOffsetHigh = 400.00f;
    this->m_AttackEndMoveHigh = 500.00f;
    this->m_AttackCollisionIntervalTime = 0.00f;
    this->PlayVoiceRate = 100;
    this->m_TackleParticle = NULL;
}

