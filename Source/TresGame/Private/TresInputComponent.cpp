#include "TresInputComponent.h"

void UTresInputComponent::UpdateInput(float Delta) {
}

bool UTresInputComponent::IsRepeatGameKey(TEnumAsByte<ETresGameKey::Type> Key, bool enableRepeat) {
    return false;
}

bool UTresInputComponent::IsRepeat(FKey Key, bool enableRepeat) {
    return false;
}

bool UTresInputComponent::IsReleaseGameKey(TEnumAsByte<ETresGameKey::Type> Key) {
    return false;
}

bool UTresInputComponent::IsRelease(FKey Key) {
    return false;
}

bool UTresInputComponent::IsPressGameKey(TEnumAsByte<ETresGameKey::Type> Key) {
    return false;
}

bool UTresInputComponent::IsPress(FKey Key) {
    return false;
}

bool UTresInputComponent::IsKeyDown(FKey Key) {
    return false;
}

bool UTresInputComponent::IsInputNone() {
    return false;
}

UTresInputComponent::UTresInputComponent() {
}

