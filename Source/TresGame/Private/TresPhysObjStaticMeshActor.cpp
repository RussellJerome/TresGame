#include "TresPhysObjStaticMeshActor.h"

class AController;
class APhysicsVolume;
class UPrimitiveComponent;
class AActor;
class UDamageType;

void ATresPhysObjStaticMeshActor::StartDisappear(bool bImmediate) {
}



void ATresPhysObjStaticMeshActor::OnMeshPhysVolumeChange(APhysicsVolume* NewVolume) {
}

void ATresPhysObjStaticMeshActor::OnMeshComponentWake(UPrimitiveComponent* WakingComponent, FName BoneName) {
}

void ATresPhysObjStaticMeshActor::OnMeshComponentSleep(UPrimitiveComponent* SleepingComponent, FName BoneName) {
}

void ATresPhysObjStaticMeshActor::OnActorTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

ATresPhysObjStaticMeshActor::ATresPhysObjStaticMeshActor() {
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
    this->m_bWakeOnlyDamage = false;
}

