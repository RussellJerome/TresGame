#include "TresLinkComponent_e_ex035.h"
#include "Components/BoxComponent.h"

class UPrimitiveComponent;
class AActor;

void UTresLinkComponent_e_ex035::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UTresLinkComponent_e_ex035::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool UTresLinkComponent_e_ex035::IsOccupied() const {
    return false;
}

UTresLinkComponent_e_ex035::UTresLinkComponent_e_ex035() {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->m_AIPointClass = NULL;
    this->m_fStickness = 20.00f;
    this->m_fJumpDistance2D = 500.00f;
    this->m_bUseJumpAttack = false;
    this->m_fJumpAttackTargetRadius = 0.00f;
    this->m_AIPointActor = NULL;
    this->OverlapBox = CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapBox"));
    this->OverlapBox_Root = CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapBox_Root"));
    this->LandBox = CreateDefaultSubobject<UBoxComponent>(TEXT("LandBox"));
    this->m_ReserveActor = NULL;
    this->m_OwnerPawn = NULL;
    this->m_E_EX011Pawn = NULL;
}

