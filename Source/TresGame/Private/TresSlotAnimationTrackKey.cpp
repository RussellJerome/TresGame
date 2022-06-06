#include "TresSlotAnimationTrackKey.h"

FTresSlotAnimationTrackKey::FTresSlotAnimationTrackKey() {
    this->Time = 0.00f;
    this->AnimAsset = NULL;
    this->BlendInTime = 0.00f;
    this->BlendOutTime = 0.00f;
    this->AnimStartOffset = 0.00f;
    this->AnimEndOffset = 0.00f;
    this->PlayRate = 0.00f;
    this->Loop = false;
    this->EffectGroup = 0;
    this->Reverse = false;
    this->RootTrans = false;
    this->RootRotate = false;
    this->DisableRootTransExtract = false;
    this->RootMoveScaleXY = 0.00f;
    this->RootMoveScaleZ = 0.00f;
    this->MeshScale = 0.00f;
    this->BonamikReset = false;
    this->BonamikPreRoll = 0;
    this->BonamikPreRollForAttachment = 0;
    this->SimulateMotionBuilderClip = false;
    this->MotionBuilderClipFirstLoop = 0.00f;
    this->MotionBuilderClipStop = 0.00f;
    this->ForcedLOD = 0;
}

