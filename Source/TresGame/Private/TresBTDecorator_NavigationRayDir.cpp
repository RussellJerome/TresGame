#include "TresBTDecorator_NavigationRayDir.h"

UTresBTDecorator_NavigationRayDir::UTresBTDecorator_NavigationRayDir() {
    this->FilterClass = NULL;
    this->m_Dir = ETresDecoratorNavigationRayDir::Forward;
    this->m_fAngle = 0.00f;
    this->m_fTestDepth = 0.00f;
}

