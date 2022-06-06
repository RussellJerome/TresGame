#include "TresWorldMapObject.h"
#include "Components/SceneComponent.h"
#include "Particles/ParticleSystemComponent.h"

bool ATresWorldMapObject::IsTreasureSphiaState() {
    return false;
}

bool ATresWorldMapObject::IsTreasureSphia() {
    return false;
}

bool ATresWorldMapObject::IsTravelPointState() {
    return false;
}

bool ATresWorldMapObject::IsTravelPoint() {
    return false;
}

bool ATresWorldMapObject::IsJumpPoint() {
    return false;
}

ATresWorldMapObject::ATresWorldMapObject() {
    this->m_nWmPlaceD = ETresWoldPlaceID::WM_PLACE_ID00;
    this->m_nWmObjID = ETresWoldMapObjID::WM_OBJ_ID00;
    this->m_nWorldSymbleID = ETresGumiShipWorldSymbolID::E_GM01_WS_HE;
    this->bWorldSymbol = false;
    this->m_nTravelPointID = ETresGumiShipTravelPointID::E_GM01_TP_01;
    this->bTravelPoint = false;
    this->m_nTreasureSphereID = ETresGumiShipTreasureSphereID::E_GM01_TR_01;
    this->bTreasureSphere = false;
    this->m_nTerritoryID = ETresGumiShipEnemyTerritoryID::E_GM01_TE_01;
    this->bTerritory = false;
    this->m_nJumpPointID = ETresGumiShipJumpPointID::E_GM01_JP_01;
    this->bJumpPoint = false;
    this->m_isSortie = false;
    this->m_pSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->m_pEffect1 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("CursorEffect1"));
    this->m_pEffect2 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("CursorEffect2"));
    this->m_pEffect3 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("CursorEffect3"));
    this->m_pMarkerEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MarkerEffect"));
}

