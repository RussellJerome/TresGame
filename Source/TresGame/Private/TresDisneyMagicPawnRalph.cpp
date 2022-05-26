#include "TresDisneyMagicPawnRalph.h"
#include "TresSkeletalMeshComponent.h"

class AActor;

void ATresDisneyMagicPawnRalph::SpawnFirstRalphBlock() {
}

void ATresDisneyMagicPawnRalph::ResetFinishBlockVisible() {
}

AActor* ATresDisneyMagicPawnRalph::GetExpBreakBlockOld() const {
    return NULL;
}

AActor* ATresDisneyMagicPawnRalph::GetExpBreakBlockNew() const {
    return NULL;
}

ATresDisneyMagicPawnRalph::ATresDisneyMagicPawnRalph() {
    this->m_RengaMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("TresDisneyMagicPawnRalphRengaMesh"));
    this->m_EffAssetFinishEnergy = NULL;
    this->m_SEAssetBlockCreateFail = NULL;
    this->m_Param_FinishEnableDistance = 5000.00f;
    this->m_Param_ScoreAttack = 30;
    this->m_Param_ScoreBlockExp = 100;
    this->m_Param_ScoreBlockOne = 10;
    this->m_Param_ScoreKill = 50;
    this->m_pBlockActor = NULL;
    this->m_pFinishTarget = NULL;
    this->m_pFinishPunchBlock = NULL;
    this->m_pExpAttacker = NULL;
    this->m_pExpBreakBlockNew = NULL;
    this->m_pExpBreakBlockOld = NULL;
    this->m_pExpBreakNote = NULL;
}

