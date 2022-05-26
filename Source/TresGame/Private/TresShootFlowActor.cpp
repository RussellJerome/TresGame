#include "TresShootFlowActor.h"
#include "TresShootFlowComponent.h"

ATresShootFlowActor::ATresShootFlowActor() {
    this->m_Root = CreateDefaultSubobject<UTresShootFlowComponent>(TEXT("TresRoot0"));
}

