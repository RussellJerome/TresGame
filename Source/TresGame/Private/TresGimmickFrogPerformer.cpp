#include "TresGimmickFrogPerformer.h"
#include "TresSkeletalMeshComponent.h"

class ATresGimmickFrogPerformer;

void ATresGimmickFrogPerformer::SetSpeedRate(float Rate) {
}

void ATresGimmickFrogPerformer::SetMasterFrog(ATresGimmickFrogPerformer* pFrog) {
}

void ATresGimmickFrogPerformer::SetBroken(bool _Broken) {
}

void ATresGimmickFrogPerformer::ChangeSpeedRate_Implementation(float Rate) {
}

ATresGimmickFrogPerformer::ATresGimmickFrogPerformer() {
    this->MyMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("TresGimmickMesh0"));
    this->Broken = false;
    this->PlaySound = NULL;
    this->PlayBrokenSound = NULL;
    this->AttachedSoundActor = NULL;
    this->m_PerformAnim = NULL;
    this->m_IdleAnim = NULL;
    this->m_BrokenAnim = NULL;
}

