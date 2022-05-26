#include "TresRaFollowActor.h"
#include "Components/SplineComponent.h"

class ATresRaFollowActor;

void ATresRaFollowActor::SetActorState(EFollowActorState State) {
}


void ATresRaFollowActor::InitGroup(TArray<ATresRaFollowActor*> groupActors) {
}

void ATresRaFollowActor::_OnGroupActorTouched(int32 groupNumber) {
}

ATresRaFollowActor::ATresRaFollowActor() {
    this->m_GroupNumber = 0;
    this->m_ReactDistance = 100.00f;
    this->m_MaxSpeed = 680.00f;
    this->m_MaxAngularSpeed = 1080.00f;
    this->m_bFollowYawLock = false;
    this->m_bFollowRotationLock = false;
    this->m_FollowtDistance = 50.00f;
    this->m_AccelerateDistance = 150.00f;
    this->m_StopDistance = 5.00f;
    this->m_RotationAdjustDistance = 0.00f;
    this->EditorInfoComp = NULL;
    this->m_Spline = CreateDefaultSubobject<USplineComponent>(TEXT("spline"));
}

