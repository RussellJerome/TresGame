#include "TresProj_MagicBlizzard.h"

ATresProj_MagicBlizzard::ATresProj_MagicBlizzard() {
    this->m_GenerateRailHeight = 200.00f;
    this->m_GenerateRailLife = 3.00f;
    this->m_SplineMeshActorClass = NULL;
    this->m_bAutoFadeInOutOnShutdown = true;
    this->m_SplineMeshActor = NULL;
    this->m_PrevPutRailSlideActor = NULL;
}

