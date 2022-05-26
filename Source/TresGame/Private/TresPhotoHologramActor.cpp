#include "TresPhotoHologramActor.h"

class ATresCharPawnBase;
class UTresReactorComponent;

void ATresPhotoHologramActor::SetPose(int32 Index, bool bInit, int32 PresetFacialIndex, int32 PresetWeaponVisibleFlag) {
}

void ATresPhotoHologramActor::RequestRemoveHologram() {
}



void ATresPhotoHologramActor::OnReactorCommand(ATresCharPawnBase* CommandCauser, TEnumAsByte<ETresCommandKind> CommandID, UTresReactorComponent* ReactorComponent) {
}

ATresPhotoHologramActor::ATresPhotoHologramActor() {
    this->StartWalkSpeed = 0.00f;
    this->MaxWalkSpeed = 0.00f;
    this->StartWalkSpeedKeepTime = 0.00f;
    this->WalkSpeedAccelerateTime = 0.00f;
    this->StartRotateSpeed = 0.00f;
    this->MaxRotateSpeed = 0.00f;
    this->StartRotateSpeedKeepTime = 0.00f;
    this->RotateSpeedAccelerateTime = 0.00f;
    this->CameraDistance = 200.00f;
    this->FacialCameraDistance = 0.00f;
    this->IsFixLOD = false;
    this->AfterAppearWaitTime = 0.50f;
    this->PoseChangeTime = 0.00f;
    this->MoveJudgementDistance = 0.01f;
    this->MoveJudgementRotateYaw = 0.01f;
    this->EffectRespawnTime = 0.00f;
    this->MyMeshBonamikPreRoll = 6;
    this->MyMeshStopBonamik = false;
    this->MyMeshStopBonamikTime = 0.00f;
    this->MyMeshReturnBonamikInEdit = false;
    this->MyMeshReturnBonamikBlendTime = 0.00f;
    this->MyMeshResetBonamikOnEditMode = false;
    this->VfxGroupId_Appear = 0;
    this->VfxGroupId_Disappear = 0;
    this->VfxGroupId_PoseChange = 0;
    this->EditMarkerEffectData = NULL;
    this->ResetCameraOnDeleteTotalTime = 0.50f;
    this->PoseDataTable = NULL;
    this->AntiFormEffect = NULL;
    this->MeshInvisibleInPhoto = false;
    this->MeshHeightAdjustable = false;
    this->HeightAdjustMax = 0.00f;
    this->HeightAdjustTotalTime = 0.00f;
    this->MeshPitchAdjustable = false;
    this->PitchAdjustMax = 0.00f;
    this->PitchAdjustMin = 0.00f;
    this->PitchAdjustTotalTime = 0.00f;
    this->MeshRollAdjustable = false;
    this->RollAdjustMax = 0.00f;
    this->RollAdjustMin = 0.00f;
    this->RollAdjustTotalTime = 0.00f;
    this->RotateAroundFocus = false;
    this->AddExtraRootCollision = true;
    this->ExtraRootCollisionLowestHeight = 0.00f;
    this->IsAdjustMeshHeightAfterPoseChange = true;
    this->IsCheckLocTrembling = false;
    this->m_pReactor = NULL;
    this->m_pFocusTarget = NULL;
    this->m_pFacialFocusTarget = NULL;
}

