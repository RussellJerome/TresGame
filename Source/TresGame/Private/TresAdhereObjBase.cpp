#include "TresAdhereObjBase.h"
#include "TresRootComponent.h"

ATresAdhereObjBase::ATresAdhereObjBase() {
    this->MyRoot = CreateDefaultSubobject<UTresRootComponent>(TEXT("TresRoot"));
    this->m_pAttachPawn = NULL;
    this->m_pCauserActor = NULL;
    this->m_pCauserOwner = NULL;
    this->m_pCauserBaseParam = NULL;
    this->m_pCauserDataTableSet = NULL;
}

