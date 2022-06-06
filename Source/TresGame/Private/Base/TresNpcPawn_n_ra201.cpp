#include "TresNpcPawn_n_ra201.h"
#include "TresReactorComponent.h"
#include "TresSkeletalMeshComponent.h"
#include "TresAtkCollComponent.h"

float ATresNpcPawn_n_ra201::GetAimOffsetAlpha() const {
    return 0.0f;
}

FRotator ATresNpcPawn_n_ra201::GetAimOffset() const {
    return FRotator{};
}

bool ATresNpcPawn_n_ra201::CanSetHairSwingPoint() const {
    return false;
}

bool ATresNpcPawn_n_ra201::CanSetHairRotationPoint() const {
    return false;
}

void ATresNpcPawn_n_ra201::BP_SetInWaterWarp(FVector WarpLocation, FRotator WarpRotate) {
}

ATresNpcPawn_n_ra201::ATresNpcPawn_n_ra201() {
    this->HairActionReactor = CreateDefaultSubobject<UTresReactorComponent>(TEXT("TresNpcReactorHairAction"));
    this->m_HairMesh1 = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("TresCharHairMesh1"));
    this->m_HairAtkColl1 = CreateDefaultSubobject<UTresAtkCollComponent>(TEXT("TresAtkColl1"));
    this->m_FRSpinningHoldBP = NULL;
    this->m_fHairUnderVecterOffset3 = 0.00f;
    this->m_fHairUnderVecterOffset4 = 0.00f;
    this->m_fHairUnderVecterOffset5 = 0.00f;
    this->m_fHairUnderVecterOffset0 = -3.00f;
    this->m_fHairUnderVecterOffset1 = -6.00f;
    this->m_fHairUnderVecterOffset2 = -12.00f;
    this->m_PawnHairBP = NULL;
    this->m_pPawnHair = NULL;
    this->m_fInWaterWarpDepth = 0.85f;
}

