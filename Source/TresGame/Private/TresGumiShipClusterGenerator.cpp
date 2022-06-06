#include "TresGumiShipClusterGenerator.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include "Components/BoxComponent.h"

class UPrimitiveComponent;
class AActor;

void ATresGumiShipClusterGenerator::OnOverlapBegin(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 dOtherBodyIndex, bool bFromSweep, const FHitResult& rSweepResult) {
}

void ATresGumiShipClusterGenerator::OnHit(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector vNormalImpulse, const FHitResult& rHit) {
}

ATresGumiShipClusterGenerator::ATresGumiShipClusterGenerator() {
    this->GenShape = ETresGumiShipClusterGeneratorShape::BOX;
    this->Hollow = true;
    this->HollowShape = ETresGumiShipClusterGeneratorShape::BOX;
    this->Interval = 2500.00f;
    this->RandomDistributionRate = 0.00f;
    this->ClusterScale = 1.00f;
    this->RandomScaleOffset = 0.00f;
    this->ClusterRadius = 0.00f;
    this->ClusterMax = 10000;
    this->RandomPitch = false;
    this->RandomYaw = false;
    this->RandomRoll = false;
    this->ResetTime = -1.00f;
    this->EnableCulling = true;
    this->StartCullDistance = 10000.00f;
    this->EndCullDistance = 20000.00f;
    this->DataTable = NULL;
    this->LotteryDataTable = NULL;
    this->LotteryMinCount = 1;
    this->LotteryMaxCount = 5;
    this->GenBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("GENBOX"));
    this->HollowBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("HOLLOWBOX"));
    this->GenSphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("GENSPHERE"));
    this->HollowSphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("HOLLOWSPHERE"));
    this->GenCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("GENCAPSULE"));
    this->HollowCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("HOLLOWCAPSULE"));
    this->HISMComponents.AddDefaulted(4);
}

