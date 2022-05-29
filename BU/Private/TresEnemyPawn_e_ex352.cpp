#include "TresEnemyPawn_e_ex352.h"
#include "Components/SphereComponent.h"

class ATresProjectileBase;
class UPrimitiveComponent;
class AActor;

ATresProjectileBase* ATresEnemyPawn_e_ex352::SpawnDarkMatter(int32 Index) {
    return NULL;
}

void ATresEnemyPawn_e_ex352::RemoveDarkMatter() {
}

void ATresEnemyPawn_e_ex352::OnPullCollisionEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ATresEnemyPawn_e_ex352::OnPullCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ATresEnemyPawn_e_ex352::OnDtorStateEvent_e_ex352(TEnumAsByte<ETresStateID> inStateID) {
}

void ATresEnemyPawn_e_ex352::OnCtorStateEvent_e_ex352(TEnumAsByte<ETresStateID> inStateID) {
}

bool ATresEnemyPawn_e_ex352::IsExistDarkMatter() const {
    return false;
}

void ATresEnemyPawn_e_ex352::HideAnsem(bool bHide) {
}

int32 ATresEnemyPawn_e_ex352::GetReleaseDarkMineNum() const {
    return 0;
}

int32 ATresEnemyPawn_e_ex352::GetDarkMatterNum() const {
    return 0;
}

ATresEnemyPawn_e_ex352::ATresEnemyPawn_e_ex352() {
    this->MyPullCollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("PullCollisionComponent0"));
    this->m_EnvironmentalChangeEffect = NULL;
    this->m_VisibleTime = 0.20f;
    this->m_RevengeVoice = NULL;
    this->m_DarkMatter[0] = NULL;
    this->m_DarkMatter[1] = NULL;
    this->m_EnvironmentalChangeEffectCmp = NULL;
}

