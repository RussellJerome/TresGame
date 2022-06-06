#include "MercunaNavTestingActor.h"
#include "Components/SphereComponent.h"

void AMercunaNavTestingActor::OnPathUpdate(TEnumAsByte<EMercunaPathEvent::Type> PathEvent) {
}

AMercunaNavTestingActor::AMercunaNavTestingActor() {
    this->Radius = 50.00f;
    this->bSearchStart = false;
    this->OtherActor = NULL;
    this->bPathExist = false;
    this->bPathIsPartial = false;
    this->bPathIsOutOfNodes = false;
    this->PathLength = 0.00f;
    this->PathSteps = 0;
    this->PathFindTime = 0.00f;
    this->PathNodesUsed = 0;
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->Path = NULL;
}

