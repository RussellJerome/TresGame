#include "TresAtkCollPrimitive.h"

UTresAtkCollPrimitive::UTresAtkCollPrimitive() {
    this->m_CollisionMesh = NULL;
    this->m_SizeVectorCurve = NULL;
    this->m_ScaleVectorCurve = NULL;
    this->m_HitSE = NULL;
    this->m_DefaultHitSE = NULL;
    this->m_pBodySetup = NULL;
}

