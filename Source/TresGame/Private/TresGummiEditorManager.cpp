#include "TresGummiEditorManager.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "TresCreateGummiShipActor.h"

class ATresHudGummiMenu;
class UTresGummiEditorDataTableSet;

ATresHudGummiMenu* ATresGummiEditorManager::GetHUD() const {
    return NULL;
}

UTresGummiEditorDataTableSet* ATresGummiEditorManager::GetGummiEditorData() const {
    return NULL;
}

void ATresGummiEditorManager::DelegateSpecialWeaponHelpOut(int32 InParam) {
}

void ATresGummiEditorManager::DelegateGummiAbilityHelpOut(int32 InParam) {
}

ATresGummiEditorManager::ATresGummiEditorManager() {
    this->m_pSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("GummiEditorManagerScene"));
    this->m_pRootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GummiEditorManagerRoot"));
    this->GummiShipActorRef = ATresCreateGummiShipActor::StaticClass();
    this->GummiEditorActorRef = NULL;
    this->WorldMapCameraActorRef = NULL;
    this->m_pGummiEditorActor = NULL;
    this->m_pGummiShipActor = NULL;
    this->m_pDepatureShipActor[0] = NULL;
    this->m_pDepatureShipActor[1] = NULL;
    this->m_pDepatureShipActor[2] = NULL;
    this->m_pWorldMapCameraActor = NULL;
    this->m_pController = NULL;
    this->m_pUIManager = NULL;
}

