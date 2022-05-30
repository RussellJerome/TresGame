#include "TresTreeWalkComponent_e_ex035.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

class UPrimitiveComponent;
class AActor;

void ATresTreeWalkComponent_e_ex035::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ATresTreeWalkComponent_e_ex035::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

ATresTreeWalkComponent_e_ex035::ATresTreeWalkComponent_e_ex035() {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent0"));
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent0"));
    this->OverlapBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent1"));
    this->LandBox = NULL;
    this->m_AIPointClass = NULL;
    this->m_fStickness = 30.00f;
    this->m_fCollOffsetZ = 0.00f;
    this->m_fMeshOffsetZ = -5.00f;
    this->m_fOverlapBoxSize = 20.00f;
    this->m_AIPointActor = NULL;
    this->m_ReserveActor = NULL;
    this->m_OwnerPawn = NULL;
    this->bRefreshNavLink = false;
}

