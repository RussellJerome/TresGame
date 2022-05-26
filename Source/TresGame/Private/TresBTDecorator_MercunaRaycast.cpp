#include "TresBTDecorator_MercunaRaycast.h"

UTresBTDecorator_MercunaRaycast::UTresBTDecorator_MercunaRaycast() {
    this->m_Dir = ETresDecoratorMercunaRaycast::Forward;
    this->m_fAngle = 0.00f;
    this->m_fTestDepth = 0.00f;
    this->m_bUnuseMercunaProject = false;
}

