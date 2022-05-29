#include "TresAttack3_e_ex325_DarkVolley.h"

UTresAttack3_e_ex325_DarkVolley::UTresAttack3_e_ex325_DarkVolley() {
    this->m_DarkVolleyNumType = TRES_ENEMY_EX047_DARKVOLLEYNUM1;
    this->m_BulletProjectile = NULL;
    this->m_BulletNumMax = 0;
    this->m_shotInterval = 0.00f;
    this->m_VariationDegree = 0.00f;
    this->m_VoiceSocketName = TEXT("center");
    this->PlayVoiceRate = 100;
}

