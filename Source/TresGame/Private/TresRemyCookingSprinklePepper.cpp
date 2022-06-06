#include "TresRemyCookingSprinklePepper.h"

void ATresRemyCookingSprinklePepper::PushState(TEnumAsByte<RemyCookingGameState> State) {
}

void ATresRemyCookingSprinklePepper::PopState() {
}

float ATresRemyCookingSprinklePepper::GetMaterialMaxAmount() const {
    return 0.0f;
}

SprinklePepperMainState ATresRemyCookingSprinklePepper::GetMainCurrentState() const {
    return SprinklePepperMainState::None;
}

float ATresRemyCookingSprinklePepper::GetGameDuration() const {
    return 0.0f;
}

void ATresRemyCookingSprinklePepper::ChangeState(TEnumAsByte<RemyCookingGameState> State) {
}

ATresRemyCookingSprinklePepper::ATresRemyCookingSprinklePepper() {
}

