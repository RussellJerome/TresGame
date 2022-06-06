#include "TresPlayerMagicAssetUnit.h"

FTresPlayerMagicAssetUnit::FTresPlayerMagicAssetUnit() {
    this->m_Command = TRES_CMD_KIND_NONE;
    this->m_bIsCastType = false;
    this->m_bIsTurnType = false;
    this->m_bIsDirectPos = false;
    this->m_EffectGroup = 0;
    this->m_VoiceGroup = 0;
    this->m_VoiceGroupFinish = 0;
    this->m_AssetData00 = NULL;
    this->m_AssetData01 = NULL;
}

