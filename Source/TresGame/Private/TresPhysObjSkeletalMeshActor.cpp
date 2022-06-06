#include "TresPhysObjSkeletalMeshActor.h"

class AController;
class APhysicsVolume;
class UPrimitiveComponent;
class AActor;
class UDamageType;

void ATresPhysObjSkeletalMeshActor::StartDisappear(bool bImmediate) {
}



void ATresPhysObjSkeletalMeshActor::OnMeshPhysVolumeChange(APhysicsVolume* NewVolume) {
}

void ATresPhysObjSkeletalMeshActor::OnMeshComponentWake(UPrimitiveComponent* WakingComponent, FName BoneName) {
}

void ATresPhysObjSkeletalMeshActor::OnMeshComponentSleep(UPrimitiveComponent* SleepingComponent, FName BoneName) {
}

void ATresPhysObjSkeletalMeshActor::OnActorTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

ATresPhysObjSkeletalMeshActor::ATresPhysObjSkeletalMeshActor() {
    this->m_bDisappearAfterWake = false;
    this->m_bDisappearLeaveInitLoc = false;
    this->m_bDisappearLeaveInitPhysVolume = false;
    this->m_bDisappearInnerWaterPhysVolume = false;
    this->m_bDisappearInnerOceanPhysVolume = false;
    this->m_bDisappearOnTakeDamage = false;
    this->m_DisappearAfterWakeTimeSetting = 5.00f;
    this->m_DisappearLeaveDistanceSetting = 1000.00f;
    this->m_DisappearOnTakeDamageSetting = 1;
    this->m_bAutoDisappearEffectProc = true;
    this->m_DisappearFadeSetting = 3.00f;
    this->m_DisappearFadeParamName = TEXT("Fade");
}

