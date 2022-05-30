#include "TresProjectile_e_ex038_AeroStorm.h"

ATresProjectile_e_ex038_AeroStorm::ATresProjectile_e_ex038_AeroStorm() {
    this->m_pAeroCutter[0] = NULL;
    this->m_pAeroCutter[1] = NULL;
    this->m_pAeroCutter[2] = NULL;
    this->m_AeroStormStartEffData = NULL;
    this->m_pro_CutterInitRotSpeed = 300.00f;
    this->m_pro_CutterMaxRotSpeed = 600.00f;
    this->m_pro_CutterMaxRotSpeedTime = 0.50f;
}

