#include "TresAttack5_e_ex361_DarkHandKabutowari.h"

UTresAttack5_e_ex361_DarkHandKabutowari::UTresAttack5_e_ex361_DarkHandKabutowari() {
    this->m_bCancelStartMotion = false;
    this->m_pro_ThunderOmenTime = 0.50f;
    this->m_pro_TargetThunderNum = 5;
    this->m_pro_TargetThunderInterval = 1.00f;
    this->m_pro_TargetThunderStTime = 0.00f;
    this->m_ThunderKind = ETresEnemyEx361ThunderKind::HomingBaseTarget;
    this->m_pro_NotTargetThunderNum = 5;
    this->m_pro_NotTargetThunderContinuousNum = 1;
    this->m_pro_NotTargetThunderInterval = 0.30f;
    this->m_pro_NotTargetThunderStTime = 0.30f;
    this->m_pro_NotTargetThunderMinDist = 500.00f;
    this->m_pro_NotTargetThunderMaxDist = 1000.00f;
    this->m_pro_WarpOffsetHeight = 500.00f;
    this->m_pro_FallSpeed = 1500.00f;
    this->m_pro_WarpDelay = 0.20f;
    this->m_pro_FallDist = 200.00f;
    this->m_pro_FallMoveRate = 0.50f;
}

