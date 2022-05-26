#include "TresGimmick_HologramVolumn.h"

class UObject;

void ATresGimmick_HologramVolumn::StartHologramModeUI() {
}







void ATresGimmick_HologramVolumn::OnLocationResetEnd() {
}

void ATresGimmick_HologramVolumn::OnLoadHologramProjectEnd() {
}

void ATresGimmick_HologramVolumn::ApplyLoadProject(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void ATresGimmick_HologramVolumn::ApplyHologramLocationReset() {
}

ATresGimmick_HologramVolumn::ATresGimmick_HologramVolumn() {
    this->HologramDataTable = NULL;
    this->HologramWeaponTable = NULL;
    this->HologramMapDataTable = NULL;
    this->MapSetDataTable = NULL;
    this->CameraEffectDataTable = NULL;
    this->CameraEffectNumMax = 3;
    this->SpawnMarkerEffectData = NULL;
    this->SpawnMarkerWaitTime = 0.20f;
    this->EnableMarkerChangeColor = false;
    this->CameraEffectData = NULL;
    this->PoseEditTimeScale = 3;
    this->FacialEditTimeScale = 3;
    this->WeaponEditTimeScale = 3;
    this->SpaceCheck_PlayerHeight = 100.00f;
    this->SpaceCheck_CollisionZAdjust = 5.00f;
    this->PlayerLocationResetDistance = 300.00f;
    this->KeepReactorHeightToMesh = true;
    this->KeepFocusCameraInWeaponEdit = false;
    this->EnableInputPoseOffsetSupport = false;
}

