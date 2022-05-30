#include "TresProjectile_e_ex773_ReverseFlarePillarOmen.h"

void ATresProjectile_e_ex773_ReverseFlarePillarOmen::CreateUpdraft() {
}

void ATresProjectile_e_ex773_ReverseFlarePillarOmen::CreateSurfacingEffect() {
}

void ATresProjectile_e_ex773_ReverseFlarePillarOmen::CreateFlarePillarOmenEff() {
}




ATresProjectile_e_ex773_ReverseFlarePillarOmen::ATresProjectile_e_ex773_ReverseFlarePillarOmen() {
    this->m_FlarePillarOmenEff = NULL;
    this->m_pro_FlarePillarOmenEffData = NULL;
    this->m_pro_Omen1Time = 0.20f;
    this->m_pro_Omen2Time = 0.50f;
    this->m_pro_HeightOffset = 100.00f;
    this->m_pro_UpdraftClass = NULL;
    this->m_pro_FixedHeight = -1.00f;
    this->m_UpdraftForceRateCurve = NULL;
}

