#include "TresBattleAreaVolume_e_ex761.h"
#include "Components/SceneComponent.h"

ATresBattleAreaVolume_e_ex761::ATresBattleAreaVolume_e_ex761() {
    this->MyRotationCenterComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MyRotationCenterComponent"));
    this->m_BattleAreaAppearType = ETresEnemy_e_ex761_BattleAreaAppear::A;
    this->m_BattleAreaAppearTimingType = ETresEnemy_e_ex761_BattleAreaAppearTiming::BeginOverlap;
    this->m_bEnableCameraEvent = true;
    this->m_bEnablePenetrationVec = false;
    this->m_PenetrationRangeAngle = 0.00f;
    this->m_bEnableResetPenetration = true;
    this->m_bEnableAttachHeight = false;
}

