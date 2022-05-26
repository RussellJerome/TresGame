#include "ManaTexture.h"

UManaTexture::UManaTexture() {
    this->NumSubtitleChannels = 0;
    this->bRenderToTexture = false;
    this->AddressX = TA_Wrap;
    this->AddressY = TA_Wrap;
    this->TargetGamma = 0.00f;
    this->OverrideFormat = PF_Unknown;
    this->bHDR = false;
}

