#include "TresAttack13_e_ex781_TetraCircle.h"

UTresAttack13_e_ex781_TetraCircle::UTresAttack13_e_ex781_TetraCircle() {
    this->m_TetraCircleStartDist = 200.00f;
    this->m_TetraChaseEndTime = 0.70f;
    this->m_TetraBindTime = 0.30f;
    this->m_BindDataIDName = TEXT("Attack13_TetraCircle_Bind");
    this->m_BindAttackDataIDName = TEXT("Attack13_TetraCircle_Attack");
    this->m_BindAttackTime = 0.00f;
    this->m_BindFinishAttack = TEXT("Attack13_TetraCircle_Fnish");
    this->m_BindFailedDestroyBit = true;
    this->m_AttackWaitTime = 0.00f;
    this->m_TriangleCenterOffsetZ = 75.00f;
    this->m_TriangleCenterMoveTime = 0.10f;
    this->m_SlipDamageTime = 0.00f;
    this->m_BodyPushTime = 0.00f;
}

