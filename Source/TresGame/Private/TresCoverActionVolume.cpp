#include "TresCoverActionVolume.h"
#include "TresDebugArrowComponent.h"

ATresCoverActionVolume::ATresCoverActionVolume() {
    this->MyDirArrow = CreateDefaultSubobject<UTresDebugArrowComponent>(TEXT("DirArrow0"));
    this->m_IdlingDir = ETresCoverIdlingDirID::TRES_CID_ID_NONE;
    this->m_bEnableCoverDir = true;
    this->m_CoverCameraID = 0;
}

