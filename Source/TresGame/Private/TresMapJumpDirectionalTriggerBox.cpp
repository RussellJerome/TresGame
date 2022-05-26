#include "TresMapJumpDirectionalTriggerBox.h"
#include "TresMapMarkerComponent.h"

void ATresMapJumpDirectionalTriggerBox::SetActiveMapMarker(bool Active) {
}

void ATresMapJumpDirectionalTriggerBox::InvokeMapJump() {
}


ATresMapJumpDirectionalTriggerBox::ATresMapJumpDirectionalTriggerBox() {
    this->m_FadeType = MAPJUMP_FADE_KIND_WIPEOUT;
    this->m_BlueprintMapJump = false;
    this->m_OverrideMarkerSize = 0.00f;
    this->MapMarkerComponent = CreateDefaultSubobject<UTresMapMarkerComponent>(TEXT("TresMapMarkerComponent"));
}

