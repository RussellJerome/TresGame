#include "TresAttack12_e_ex367_SwordThrow.h"

UTresAttack12_e_ex367_SwordThrow::UTresAttack12_e_ex367_SwordThrow() {
    this->m_WarpOffsetDist = 0.00f;
    this->m_WarpTime = 0.00f;
    this->m_WarpRange = 0.00f;
    this->m_VelValue = 0.50f;
    this->m_BrakeDistance = 0.00f;
    this->m_InitSpeed = 0.00f;
    this->m_AccelSpeed = 0.00f;
    this->m_MaxSpeed = 0.00f;
    this->m_BlizzaganStartWaitTime = 0.50f;
    this->m_FIraganStartWaitTime = 1.00f;
    this->m_ThundaganStartWaitTime = 2.00f;
    this->m_ThundaganStartTime = 1.50f;
    this->m_ThundaganChildShotNum = 0;
    this->m_ThundaganChildStartTime = 0.00f;
    this->m_ThundaganChildSIntervalTime = 0.00f;
    this->m_ThundaganChildSafeRange = 0.00f;
    this->m_ThundaganChildRandomRange = 0.00f;
    this->m_BulletProjectile = NULL;
    this->m_CalamityBlizProjectile = NULL;
    this->m_CalamityFireProjectile = NULL;
    this->m_CalamityThdProjectile = NULL;
    this->m_CalamityThdChildProjectile = NULL;
    this->m_CalamityFireRange = 1000.00f;
    this->m_CalamityFireHigh = 200.00f;
    this->PlayVoiceRate = 0;
    this->m_ReflectVoiceSEAsset = NULL;
    this->m_WarpEQSQuery = NULL;
    this->m_bInvisibleMode = false;
    this->m_KeyBladeProjectile = NULL;
}

