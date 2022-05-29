#include "TresGimmick_EX_BattlePortal.h"
#include "Components/SceneComponent.h"
#include "TresReactorComponent.h"
#include "TresNavModifierComponent.h"

void ATresGimmick_EX_BattlePortal::OnChangeBattleMode(bool bIsBattleMode) {
}


void ATresGimmick_EX_BattlePortal::BP_BattlePortalMapjump() {
}

ATresGimmick_EX_BattlePortal::ATresGimmick_EX_BattlePortal() {
    this->m_EffectBodyComp = NULL;
    this->m_EffectEscapeComp = NULL;
    this->MyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Scene0"));
    this->MyReactor = CreateDefaultSubobject<UTresReactorComponent>(TEXT("TresReactor0"));
    this->NavModifier = CreateDefaultSubobject<UTresNavModifierComponent>(TEXT("TresNavModifier0"));
    this->m_PortalID = 0;
    this->m_AutoSavePlayerStart = NULL;
    this->m_Effect_Body = NULL;
    this->m_Effect_Escape = NULL;
}

