#include "TresEnvQueryGenerator_OnRing.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UTresEnvQueryGenerator_OnRing::UTresEnvQueryGenerator_OnRing() {
    this->MaxRadiusItemSpacingRatio = 1.00f;
    this->bArcDirection3D = false;
    this->CircleCenter = UEnvQueryContext_Querier::StaticClass();
    this->RadiusMode = EEnvGeneratorOnRingRadiusMode::ContextCenter;
    this->bDefineArc = false;
    this->bDefineMaxRadius = false;
    this->bDefineMaxRadiusItemSpacing = false;
}

