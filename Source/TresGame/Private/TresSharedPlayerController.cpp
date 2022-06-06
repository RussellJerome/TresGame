#include "TresSharedPlayerController.h"

float ATresSharedPlayerController::GetRightStickSlopeVectorLength() const {
    return 0.0f;
}

FVector ATresSharedPlayerController::GetRightStickSlopeVector() const {
    return FVector{};
}

float ATresSharedPlayerController::GetRightStickSlopeDegrees() const {
    return 0.0f;
}

float ATresSharedPlayerController::GetLeftStickSlopeVectorLength() const {
    return 0.0f;
}

FVector ATresSharedPlayerController::GetLeftStickSlopeVector() const {
    return FVector{};
}

float ATresSharedPlayerController::GetLeftStickSlopeDegrees() const {
    return 0.0f;
}

ATresSharedPlayerController::ATresSharedPlayerController() {
}

