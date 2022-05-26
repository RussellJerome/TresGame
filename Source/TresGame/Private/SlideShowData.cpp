#include "SlideShowData.h"

FSlideShowData::FSlideShowData() {
    this->m_SwfAssetSequence = NULL;
    this->m_NumPhotos = 0;
    this->m_Duration = 0;
    this->m_MaxFrame = 0;
    this->m_DataType = ETresUISlideShowDataType::Simple;
    this->m_BGM = NULL;
}

