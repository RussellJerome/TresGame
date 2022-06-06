#include "TresGameModeBase.h"

class AActor;

void ATresGameModeBase::TresRequestDestroyActor(AActor* Actor) {
}

ATresGameModeBase::ATresGameModeBase() {
    this->m_pTresGameInstance = NULL;
    this->m_pTaskExecuter = NULL;
    this->m_pFieldVoiceManager = NULL;
}

