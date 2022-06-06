#include "TresPrizeBase.h"
#include "TresRootComponent.h"
#include "TresPrizeMovementComponent.h"

void ATresPrizeBase::OnProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity) {
}

ATresPrizeBase::ATresPrizeBase() {
    this->m_SoundBound = NULL;
    this->m_SoundGet = NULL;
    this->MyRoot = CreateDefaultSubobject<UTresRootComponent>(TEXT("TresRoot"));
    this->MyMovement = CreateDefaultSubobject<UTresPrizeMovementComponent>(TEXT("PrizeComp"));
    this->m_FrameRate = 0.00f;
    this->m_Timer = 0.00f;
    this->m_Kind = 0;
    this->m_fLivingTime = 15.00f;
    this->m_bCanGetFlag = false;
    this->m_bGetSeEndFlag = false;
    this->m_pGetter = NULL;
    this->m_fLen = 0.00f;
}

