#include "TresActor_e_ex773_Point.h"
#include "Components/SceneComponent.h"

ATresActor_e_ex773_Point::ATresActor_e_ex773_Point() {
    this->m_PointKind = ETresEnemyEEX773_POINT_KIND::POINT_KIND_NONE;
    this->m_PointNo = 0;
    this->MyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MyRoot"));
}

