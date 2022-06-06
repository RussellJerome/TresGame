#include "TresCameraManager.h"
#include "Templates/SubclassOf.h"

class UCameraShake;
class ATresCameraNormal;
class AActor;
class ATresCameraBase;

void ATresCameraManager::SetTresCameraRollOffset(float RollOffset) {
}

void ATresCameraManager::SetLockonNearLimit(float fLimit) {
}

ATresCameraNormal* ATresCameraManager::GetTresCameraNormal() const {
    return NULL;
}

AActor* ATresCameraManager::GetActiveViewCamera() const {
    return NULL;
}

ATresCameraBase* ATresCameraManager::GetActiveCamera() const {
    return NULL;
}

void ATresCameraManager::EnableAllCameraPathRoute(bool bEnable, int32 Priority) {
}

void ATresCameraManager::DestroyAllBluprintCamera() {
}

void ATresCameraManager::DebugShowOverlapTresCameraLocation(bool bEnable) {
}

void ATresCameraManager::DebugShowCameraPathLine() {
}

void ATresCameraManager::DebugShowCameraOutsideWallCheck(bool bEnable) {
}

void ATresCameraManager::DebugShowCameraManager() {
}

void ATresCameraManager::DebugShowCameraLookPos() {
}

void ATresCameraManager::DebugShowCameraGeneral(bool bEneble) {
}

void ATresCameraManager::DebugShowCameraDistanceAdjust2T() {
}

void ATresCameraManager::DebugSetCameraSlideScale(float Scale) {
}

void ATresCameraManager::DebugSetCameraSize(float Size) {
}

void ATresCameraManager::DebugSetCameraShutOutFadeTime(float FadeTime) {
}

void ATresCameraManager::DebugSetCameraShutOutFadeAlpha(float FadeAlpha) {
}

void ATresCameraManager::DebugSetCameraLockonFixInFront(bool bEnable) {
}

void ATresCameraManager::DebugSelectCameraDebugOrthoTopView(bool bEnable) {
}

void ATresCameraManager::DebugPatrolCameraTarget(bool bOn) {
}

void ATresCameraManager::DebugNoCameraShutOut(bool bEnable) {
}

void ATresCameraManager::DebugNoCameraShake() {
}

void ATresCameraManager::DebugCameraSelectDamageBeatType(bool bOn) {
}

void ATresCameraManager::BP_SetTresCameraNormalDefault(ATresCameraNormal* Camera) {
}

void ATresCameraManager::BP_SetTresCameraHe02WallParam(FRotator WorldBaseRot, float U_Distance, FRotator U_Rotation, FVector U_TargetOffset, FVector U_TargetLocalOffset, FVector U_CameraLocalOffset, float U_LerpTime, float L_Distance, FRotator L_Rotation, FVector L_TargetOffset, FVector L_TargetLocalOffset, FVector L_CameraLocalOffset, float L_LerpTime, float R_Distance, FRotator R_Rotation, FVector R_TargetOffset, FVector R_TargetLocalOffset, FVector R_CameraLocalOffset, float R_LerpTime, float D_Distance, FRotator D_Rotation, FVector D_TargetOffset, FVector D_TargetLocalOffset, FVector D_CameraLocalOffset, float D_LerpTime, float D_RollMin, float D_RollMax, float D_TimeMin, float D_TimeMax, TSubclassOf<UCameraShake> CameraShake) {
}

void ATresCameraManager::BP_SetTresCameraHe02WallDistance(float Distance, float Time) {
}

void ATresCameraManager::BP_SetOverrideCameraSize(float Size) {
}

bool ATresCameraManager::BP_IsInViewport(ATresCameraBase* Camera, FVector TargetPos, float TargetSize) {
    return false;
}

bool ATresCameraManager::BP_IsCameraSwitchingInterpolation() {
    return false;
}

bool ATresCameraManager::BP_IsCameraDamageBeatDirection() {
    return false;
}

ATresCameraBase* ATresCameraManager::BP_GetOldCamera() const {
    return NULL;
}

void ATresCameraManager::BP_GetInputCameraViewPoint(FVector& OutLocation, FRotator& OutRotation) {
}

void ATresCameraManager::BP_GetCameraViewPoint(FVector& OutCamLoc, FRotator& OutCamRot) const {
}

void ATresCameraManager::BP_EnableTresCameraWall(bool bEnable) {
}

void ATresCameraManager::BP_EnableTresCameraHe02Wall(bool bEnable) {
}

void ATresCameraManager::BP_EnableCameraDamageBeatDirection(bool bEnable) {
}

void ATresCameraManager::BP_CancelCameraInterpolation() {
}

ATresCameraManager::ATresCameraManager() {
    this->m_PlayerController = NULL;
    this->m_LockonCamera = NULL;
    this->m_LockonTarget = NULL;
    this->m_DummyLockonTargetComp = NULL;
    this->m_CameraConfig = NULL;
    this->m_CameraNormal1st = NULL;
    this->m_CameraNormal2nd = NULL;
    this->m_DebugCameraTarget = NULL;
    this->m_DebugOrgCameraTarget = NULL;
    this->m_DebugPatrolCamera = NULL;
}

