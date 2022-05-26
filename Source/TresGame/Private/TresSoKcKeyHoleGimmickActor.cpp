#include "TresSoKcKeyHoleGimmickActor.h"
#include "TresBodyCollPrimitive.h"
#include "Components/SceneComponent.h"
#include "TresBodyCollComponent.h"

ATresSoKcKeyHoleGimmickActor::ATresSoKcKeyHoleGimmickActor() {
    this->KeyHoleRoot = CreateDefaultSubobject<USceneComponent>(TEXT("KeyHoleRoot"));
    this->KeyHoleBeamAttachPoint = CreateDefaultSubobject<USceneComponent>(TEXT("BeamAttachPoint"));
    this->KeyHoleBodyCollision = CreateDefaultSubobject<UTresBodyCollPrimitive>(TEXT("KeyHoleBodyCollision"));
    this->ChanceMarkerBodyCollision = CreateDefaultSubobject<UTresBodyCollPrimitive>(TEXT("ChanceMarkerBodyCollision"));
    this->TresBodyCollisionComponent = CreateDefaultSubobject<UTresBodyCollComponent>(TEXT("TresBodyCollision"));
    this->m_pConnectBeamEffectAsset = NULL;
    this->m_pKeyHoleFocusEffectAsset = NULL;
    this->m_pKeyHoleConnectEffectAsset = NULL;
    this->m_pChanceMarkerConnectEffectAsset = NULL;
    this->m_ChanceMarkerEffectAssetList.AddDefaulted(3);
    this->m_pBigChanceMarkerEffectAsset = NULL;
    this->m_pBigChanceMarkerConnectEffectAsset = NULL;
    this->m_bExcludeChanceMarkerCandidate = false;
}

