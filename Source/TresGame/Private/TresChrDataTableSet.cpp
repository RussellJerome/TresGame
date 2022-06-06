#include "TresChrDataTableSet.h"

UTresChrDataTableSet::UTresChrDataTableSet() {
    this->m_DataType = ETresChrDataTableSetType::CDTS_TYPE_PLAYER;
    this->m_BaseParamData = NULL;
    this->m_LevelData = NULL;
    this->m_AttackData = NULL;
    this->m_VoiceData = NULL;
    this->m_SEData = NULL;
}

