#include "TresUIActor.h"
#include "TresSkeletalMeshComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "TresEffectAttachComponent.h"

void ATresUIActor::SetLinkMeshComponent(UTresSkeletalMeshComponent* LinkMeshComponent) {
}


void ATresUIActor::NotifyEventBP(const FName& EventName) {
}

ATresUIActor::ATresUIActor() {
    this->m_BonamikPreRollNum = 16;
    this->MeshComponent = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("MeshComponent"));
    this->SceneCaptureComponent2D = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCaptureComponent2D"));
    this->MyEffectAtt = CreateDefaultSubobject<UTresEffectAttachComponent>(TEXT("MyEffAtt"));
    this->effectGroupID = 0;
}

