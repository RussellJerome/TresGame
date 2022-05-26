#include "TresPrizeCrab.h"
#include "TresStaticMeshComponent.h"

ATresPrizeCrab::ATresPrizeCrab() {
    this->MyMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("TresPrizeCrab_StaticMesh"));
    this->m_GetTime = 0.67f;
    this->m_MinScaleOnGet = 0.30f;
    this->m_GetRotSpeed = 500.00f;
    this->m_MaxGetRotSpeed = 800.00f;
    this->m_DrawDistance = 200.00f;
    this->m_DrawDistanceInAttraction = 3000.00f;
    this->m_BeginDrawTime = 0.40f;
    this->m_BounceDampingRate = 0.50f;
    this->m_BounceMaxNum = 4;
}

