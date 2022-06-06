#include "TresUIP_Theater.h"

int32 UTresUIP_Theater::OnCallback(int32 ID, int32 Param) {
    return 0;
}

UTresUIP_Theater::UTresUIP_Theater() {
    this->m_ButtonInfo = NULL;
    this->m_HelpText = NULL;
    this->m_SubtitleSwitchAnimation = NULL;
    this->m_ChapterTitleAnimation = NULL;
    this->m_ChapterTitleText = NULL;
    this->m_ChapterSceneListAnimation = NULL;
    this->m_ChapterSceneList = NULL;
    this->m_ThumbnailAnimation = NULL;
    this->m_ThumbnailIcon = NULL;
}

