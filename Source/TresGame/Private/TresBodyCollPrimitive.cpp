#include "TresBodyCollPrimitive.h"

class UPrimitiveComponent;
class AActor;

void UTresBodyCollPrimitive::OnBodyEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UTresBodyCollPrimitive::OnBodyBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UTresBodyCollPrimitive::UTresBodyCollPrimitive() {
    this->MyBodyName = TEXT("Body");
    this->MyIgnoreNameNoneGroup = false;
    this->MyShapeType = ETresBodyCollision::SPHERE;
    this->MyShapeMesh = NULL;
    this->m_BodyReactionType = ETresBodyCollReactionType::TRES_BODY_RT_DEFAULT;
    this->m_bFixedBodyReactionType = false;
    this->m_bEnableDamage = true;
    this->m_bEnablePush = true;
    this->m_bEnableCamera = false;
    this->m_bEnableBlockCamera = false;
    this->m_OverlapCameraFunction = TRES_BODY_OVERLAPCAMERA_FADE;
    this->m_bIsBodyCollBaseLocationDist3D = false;
    this->m_pBodySetup = NULL;
    this->m_pSrcBodySetup = NULL;
    this->m_DefaultBodyReactionType = ETresBodyCollReactionType::TRES_BODY_RT_DEFAULT;
}

