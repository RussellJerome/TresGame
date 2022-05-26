#include "TresMapJumpVolume.h"

void ATresMapJumpVolume::InvokeMapJump() {
}

ATresMapJumpVolume::ATresMapJumpVolume() {
    this->m_FadeType = MAPJUMP_FADE_KIND_WIPEOUT;
    this->m_BlueprintMapJump = false;
}

