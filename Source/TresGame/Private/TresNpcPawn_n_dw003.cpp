#include "TresNpcPawn_n_dw003.h"

bool ATresNpcPawn_n_dw003::IsDevilWaveSlowMove() const {
    return false;
}

bool ATresNpcPawn_n_dw003::IsDevilWaveCycloneMode() const {
    return false;
}

bool ATresNpcPawn_n_dw003::IsDevilWaveCoreOpen() const {
    return false;
}

bool ATresNpcPawn_n_dw003::IsDevilEyeColorRed() const {
    return false;
}

bool ATresNpcPawn_n_dw003::IsAITargetDevilWave() const {
    return false;
}

bool ATresNpcPawn_n_dw003::IsAITargetDevilTower() const {
    return false;
}

bool ATresNpcPawn_n_dw003::IsAITargetDarkSide() const {
    return false;
}

ATresNpcPawn_n_dw003::ATresNpcPawn_n_dw003() {
    this->m_EffDevilWave = NULL;
    this->m_PawnID = TEXT("n_dw003");
    this->m_AppendCure = 160;
    this->m_FR_PopppingHolyPawnClass = NULL;
    this->m_FR_UltimateEndPawnClass = NULL;
    this->m_IsAquaLinkMode = false;
    this->m_AquaLinkTimer = 0.00f;
}

