#include "TresGimmickLauncher.h"
#include "Particles/ParticleSystemComponent.h"

class USceneComponent;
class ATresCharPawnBase;
class AActor;
class UPrimitiveComponent;

void ATresGimmickLauncher::SetTickEnableBP(bool bTickEnableBP, int32 bit) {
}

void ATresGimmickLauncher::SetLaunchHeight(float inHeight) {
}

void ATresGimmickLauncher::SetJumpMode(TEnumAsByte<ETresPlayerJumpModes> eMode) {
}

void ATresGimmickLauncher::SetFadeParam_Implementation(float Param) {
}

void ATresGimmickLauncher::SetEnableLauncher(bool bEnable) {
}

void ATresGimmickLauncher::SetCancelLocation(FVector Location) {
}

void ATresGimmickLauncher::SetCancelComp(USceneComponent* pCancelComp) {
}

void ATresGimmickLauncher::SetAnimTickEnableBP(bool bTickEnableBP) {
}

void ATresGimmickLauncher::RemovePawn(ATresCharPawnBase* pPawn) {
}

void ATresGimmickLauncher::LuancherActorEndSetBase_Implementation(AActor* inActor, UPrimitiveComponent* InComponent, const FName InBoneName) {
}

void ATresGimmickLauncher::LuancherActorEndLaunchAnim_Implementation() {
}

void ATresGimmickLauncher::LuancherActorBeginSetBase_Implementation(AActor* inActor, UPrimitiveComponent* InComponent, const FName InBoneName) {
}

void ATresGimmickLauncher::LuancherActorBeginLaunchAnim_Implementation() {
}

void ATresGimmickLauncher::LauncherChangeGimmickAction_Implementation(bool bShow) {
}


void ATresGimmickLauncher::EntryPawn(ATresCharPawnBase* pPawn, USceneComponent* pAttachComp, bool UseRemove) {
}

void ATresGimmickLauncher::CancelLaunch() {
}

void ATresGimmickLauncher::CallTakeDamageForLauncher() {
}

ATresGimmickLauncher::ATresGimmickLauncher() {
    this->SignEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SignEffectComp"));
    this->m_LaunchHeight = 2000.00f;
    this->m_DisableIdleAnim = false;
    this->m_LandAnimPose = TRES_LANDANIMPOSE_NONE;
    this->m_FlyingMotion = false;
    this->m_LandAnimDelayTime = 0.00f;
    this->MaxParticleScale = 0.50f;
    this->DisableIK = false;
}

