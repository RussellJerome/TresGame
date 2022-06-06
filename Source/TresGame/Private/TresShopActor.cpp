#include "TresShopActor.h"
#include "TresBodyCollComponent.h"
#include "TresMapMarkerComponent.h"
#include "TresReactorComponent.h"

void ATresShopActor::OnChangeShopActorDispType(ETresSavePointDispType InDispType) {
}

void ATresShopActor::OnChangePlayerArtsMode(bool bIsArtsMode) {
}

void ATresShopActor::OnChangeCinematicMode(bool bIsCinematicMode) {
}

void ATresShopActor::OnChangeBattleMode(bool bIsBattleMode) {
}

ATresShopActor::ATresShopActor() {
    this->MyReactor = CreateDefaultSubobject<UTresReactorComponent>(TEXT("TresReactor0"));
    this->MyMapMarker = CreateDefaultSubobject<UTresMapMarkerComponent>(TEXT("TresMapMarker0"));
    this->MyBodyColl = CreateDefaultSubobject<UTresBodyCollComponent>(TEXT("TresBodyColl0"));
    this->m_ShopID = ETresShopID::COMMON;
    this->m_ShopChrID = ETresShopChrID::MOOGLE;
}

