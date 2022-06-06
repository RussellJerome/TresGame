#include "TresEnemyPawn_e_ex313.h"

bool ATresEnemyPawn_e_ex313::IsThunderGenerator() {
    return false;
}

bool ATresEnemyPawn_e_ex313::IsPartnerDead() {
    return false;
}

bool ATresEnemyPawn_e_ex313::IsDuringDarkMineCooldown() {
    return false;
}

bool ATresEnemyPawn_e_ex313::IsDuringDarkAuraKabutowariCooldown() {
    return false;
}

bool ATresEnemyPawn_e_ex313::CanUseDarkAuraKabutowari() {
    return false;
}

ATresEnemyPawn_e_ex313::ATresEnemyPawn_e_ex313() {
    this->m_bAura = false;
    this->m_pro_DarkMineGeneratorClass = NULL;
    this->m_pro_DarkHand_ThunderGeneratorClass = NULL;
    this->m_pro_PartnerDead = false;
    this->m_pro_TestPartnerDead = false;
    this->m_DarkMineManager = NULL;
    this->m_pro_KabutowariDecalEffData = NULL;
    this->m_KabutowariDecalEff = NULL;
    this->m_pro_XIIIAManagerClass = NULL;
    this->m_XIIIAManager = NULL;
}

