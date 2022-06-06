#include "TresEnemy_e_bx901_ActionTriggerVolume.h"

class UPrimitiveComponent;
class AActor;

void ATresEnemy_e_bx901_ActionTriggerVolume::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ATresEnemy_e_bx901_ActionTriggerVolume::OnBeginOverlap(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

ATresEnemy_e_bx901_ActionTriggerVolume::ATresEnemy_e_bx901_ActionTriggerVolume() {
    this->m_TriggerType = EBX901_ActionTriggerType_DarkBaymax;
}

