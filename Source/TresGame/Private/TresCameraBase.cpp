#include "TresCameraBase.h"
#include "Templates/SubclassOf.h"
#include "Camera/CameraComponent.h"

class APlayerController;
class AActor;
class UObject;
class ATresCameraBase;

void ATresCameraBase::StartTresCamera(bool bTakeover, FViewTargetTransitionParamsEx TransitionParams) {
}

FViewTargetTransitionParamsEx ATresCameraBase::SetTresCameraTransitionParams(float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing, TEnumAsByte<EViewTargetBlendInterp> BlendInterp, TEnumAsByte<EViewTargetBlendInterpYaw> BlendInterpYaw, bool bBlendPostProcess) {
    return FViewTargetTransitionParamsEx{};
}

void ATresCameraBase::SetPriority(int32 Priority) {
}

void ATresCameraBase::SetNearClipPlane(float NearClipPlane, float Time) {
}

void ATresCameraBase::SetFieldOfView(float FieldOfView, float Time) {
}

void ATresCameraBase::SetFarCullingPlane(float FarCullingPlane, float Time) {
}

void ATresCameraBase::ResetCamera(bool bForce) {
}

float ATresCameraBase::GetNearClipPlane() const {
    return 0.0f;
}

float ATresCameraBase::GetFieldOfView() const {
    return 0.0f;
}

float ATresCameraBase::GetFarCullingPlane() const {
    return 0.0f;
}

float ATresCameraBase::GetDefaultNearClipPlane() const {
    return 0.0f;
}

float ATresCameraBase::GetDefaultFieldOfView() const {
    return 0.0f;
}

float ATresCameraBase::GetDefaultFarCullingPlane() const {
    return 0.0f;
}

UCameraComponent* ATresCameraBase::GetCameraComponent() const {
    return NULL;
}

void ATresCameraBase::EndTresCamera(bool bTakeover, FViewTargetTransitionParamsEx TransitionParams) {
}

void ATresCameraBase::BP_SettingTresCamera(AActor* TargetActor, APlayerController* PlayerController, UObject* WorldContextObject) {
}

void ATresCameraBase::BP_SetRotationLerpCoefficient(float Coefficient) {
}

void ATresCameraBase::BP_SetPostProcessBlendWeight(float Rate, float Time) {
}

void ATresCameraBase::BP_SetPositionLerpCoefficient(float Coefficient, float DistanceLimitter) {
}

void ATresCameraBase::BP_SetMotionBlur(float Intensity, float Max, float PerObjectSize) {
}

void ATresCameraBase::BP_SetLockonCameraClass(TSubclassOf<ATresCameraBase> pLockonCameraClass) {
}

void ATresCameraBase::BP_SetLerpCoefficient(float Coefficient) {
}

void ATresCameraBase::BP_SetDistanceLerpCoefficient(float Coefficient) {
}

void ATresCameraBase::BP_SetDepthOfField(TEnumAsByte<EDepthOfFieldMethod> Method, float FocalDistance, float Time0, float FocalRegion, float Time1, float NearTransitionRegion, float Time2, float FarTransitionRegion, float Time3, float Scale, float Time4, float MaxBokehSize, float Time5, float NearBlurSize, float Time6, float FarBlurSize, float Time7) {
}

void ATresCameraBase::BP_SetCameraName(const FName CameraName) {
}

void ATresCameraBase::BP_SetAmbientOcclusion(float Intensity, float TimeIntensity, float Radius, float TimeRadius) {
}

void ATresCameraBase::BP_SetActionPriority() {
}

void ATresCameraBase::BP_ResetRotationLerpCoefficient() {
}

void ATresCameraBase::BP_ResetPositionLerpCoefficient() {
}

void ATresCameraBase::BP_ResetDistanceLerpCoefficient() {
}

bool ATresCameraBase::BP_IsLockonCamera() {
    return false;
}

float ATresCameraBase::BP_GetCurrentDistance() {
    return 0.0f;
}

int32 ATresCameraBase::BP_GetActionPriority() {
    return 0;
}

void ATresCameraBase::BP_EnableMotionBlur(bool bEnable) {
}

void ATresCameraBase::BP_EnableKeepChangeRotation(bool bEnable, float KeepTime) {
}

void ATresCameraBase::BP_EnableInterpCollision(bool bEnable) {
}

void ATresCameraBase::BP_EnableDepthOfField(bool bEnable) {
}

void ATresCameraBase::BP_EnableControllerInput(bool bEnable) {
}

void ATresCameraBase::BP_EnableAmbientOcclusion(bool bEnable) {
}

ATresCameraBase::ATresCameraBase() {
    this->m_CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    this->m_CameraManager = NULL;
    this->m_PlayerController = NULL;
    this->m_SpawnCameraManager = NULL;
    this->m_LockonTargetCmp = NULL;
    this->m_CameraLocClass = NULL;
    this->m_CameraLoc = NULL;
    this->m_LockonParent = NULL;
    this->m_CurrentDistance = 100.00f;
    this->m_MoveSpeed = 1000.00f;
    this->m_RotationSpeedX = 120.00f;
    this->m_RotationSpeedY = 120.00f;
    this->m_AnalogStickPlayX = 0.10f;
    this->m_AnalogStickPlayY = 0.10f;
    this->m_fPositionLerpLimit = 100.00f;
    this->m_fPositionLerpPer = 8.00f;
    this->m_fRotationLerpPer = 8.00f;
}

