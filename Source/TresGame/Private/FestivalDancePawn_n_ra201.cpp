#include "FestivalDancePawn_n_ra201.h"
#include "TresSkeletalMeshComponent.h"
#include "TresReactorComponent.h"

void AFestivalDancePawn_n_ra201::OnDanceRhythmBeat() {
}

AFestivalDancePawn_n_ra201::AFestivalDancePawn_n_ra201() {
    this->m_HairMesh1 = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("TresCharHairMesh1"));
    this->m_Reactor = CreateDefaultSubobject<UTresReactorComponent>(TEXT("TresReactor"));
    this->PerformChangeCount = 0;
    this->WalkSpeed = 0.00f;
    this->RotateSpeed = 0.00f;
    this->RhythmEffectGroupID = 5000;
    this->SpinEffectGroupID = 0;
    this->StepEffectGroupID = 0;
    this->TakeDistanceLength = 0.00f;
    this->TakeDistanceTime = 0.00f;
    this->DefaultSplineMoveMode = ETresRaDanceAreaType::RA_DANCE_NONE;
    this->TestSoundData = NULL;
    this->TestEffect_MarkerSpin = NULL;
    this->TestEffect_MarkerStep = NULL;
    this->m_pDanceMng = NULL;
}

