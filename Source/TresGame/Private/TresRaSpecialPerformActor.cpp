#include "TresRaSpecialPerformActor.h"
#include "TresStaticMeshComponent.h"

class ATresCharPawnBase;
class UTresReactorComponent;

void ATresRaSpecialPerformActor::OnReactorCommand(ATresCharPawnBase* CommandCauser, TEnumAsByte<ETresCommandKind> CommandID, UTresReactorComponent* ReactorComponent) {
}

void ATresRaSpecialPerformActor::OnPlayerPerformStart() {
}

void ATresRaSpecialPerformActor::OnPlayerPerformEnd() {
}

ATresRaSpecialPerformActor::ATresRaSpecialPerformActor() {
    this->MyStaticMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("MyStaticMesh"));
    this->TensionUpLevel = 0;
    this->ReactionRange = 0.00f;
    this->ReactionTime = 0.00f;
    this->ClapHandsDistance = 0.00f;
    this->PerformType = EDanceSpecialPerformType::BARREL;
    this->m_pReactor = NULL;
}

