#include "TresFaceAnimationTrackKey.h"

FTresFaceAnimationTrackKey::FTresFaceAnimationTrackKey() {
    this->Time = 0.00f;
    this->AnimAsset = NULL;
    this->BlendInTime = 0.00f;
    this->Loop = false;
    this->PlayRate = 0.00f;
    this->AnimStartOffset = 0.00f;
    this->AnimEndOffset = 0.00f;
    this->SimulateMotionBuilderClip = false;
    this->MotionBuilderClipFirstLoop = 0.00f;
    this->MotionBuilderClipStop = 0.00f;
}

