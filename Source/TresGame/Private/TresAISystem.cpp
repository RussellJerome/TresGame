#include "TresAISystem.h"

UTresAISystem::UTresAISystem(const FObjectInitializer& ObjectInitializer) : UAISystem(ObjectInitializer) {
    this->m_InfluenceMapManager = NULL;
    this->m_StaticEQSItemManager = NULL;
}

