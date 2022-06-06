#include "TresEnemyToyComponent.h"

bool UTresEnemyToyComponent::CanUse() const {
    return false;
}

UTresEnemyToyComponent::UTresEnemyToyComponent() {
    this->m_ToyKind = TRES_ENEMY_TOY_KIND_UNKNOWN;
}

