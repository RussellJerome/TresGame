#include "TresUIP_NowLoading.h"

int32 UTresUIP_NowLoading::OnCallback(int32 ID, int32 Param) {
    return 0;
}

UTresUIP_NowLoading::UTresUIP_NowLoading() {
    this->m_gfxObj_nowLoading = NULL;
    this->m_gfxObj_nowStreaming = NULL;
    this->m_gfxObj_extraLoading = NULL;
    this->m_gfxObj_stageBg = NULL;
    this->m_gfxObj_mcExtraCharaIcon = NULL;
    this->m_gfxObj_mcExtraGuage = NULL;
    this->m_gfxObj_mcExtraGuageSet = NULL;
    this->m_gfxObj_mcExtraStart = NULL;
    this->m_gfxObj_mcExtraImage = NULL;
    this->m_gfxObj_txtCharaName = NULL;
    this->m_gfxObj_txtExtraComment = NULL;
    this->m_asProxyIcon_ExtraImage = NULL;
    this->m_extraLoadTexture = NULL;
}

