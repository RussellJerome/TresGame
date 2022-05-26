#include "TresRestrictActionVolume.h"

ATresRestrictActionVolume::ATresRestrictActionVolume() {
    this->m_TownArea = false;
    this->m_RestrictATTACK = false;
    this->m_RestrictMAGIC = false;
    this->m_RestrictITEM = false;
    this->m_RestrictSITUATION = false;
    this->m_RestrictLINK = false;
    this->m_RestrictATTRACTIONFLOW = false;
    this->m_RestrictSTYLE = false;
    this->m_RestrictFRIENDLINK = false;
    this->m_RestrictGUARD = false;
    this->m_RestrictJUMP = false;
    this->m_RestrictSHOOTLOCK = false;
    this->m_RestrictRUN = false;
    this->m_RestrictDIVEFALL = false;
    this->m_RestrictDeepDiving = false;
    this->m_RestrictCancelSituation = false;
    this->m_RestrictAlwaysUseSpawnPoint = false;
    this->m_RestrictPhotoMode = false;
}

