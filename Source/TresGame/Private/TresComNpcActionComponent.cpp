#include "TresComNpcActionComponent.h"

class UObject;
class AActor;

void UTresComNpcActionComponent::TresComNpcSpecialPerformReaction(UObject* WorldContextObject, FName InReactionName, AActor* in_pActor, float in_fLength) {
}

void UTresComNpcActionComponent::TresComNpcSetGroupValue(UObject* WorldContextObject, FName InGroupName, int32 inValue) {
}

void UTresComNpcActionComponent::TresComNpcSetGroupActionSetAll(UObject* WorldContextObject) {
}

void UTresComNpcActionComponent::TresComNpcSetGroupActionSet(UObject* WorldContextObject, FName InGroupName, FName InSetName) {
}

void UTresComNpcActionComponent::TresComNpcSetDisplayNum(UObject* WorldContextObject, int32 InNum) {
}

void UTresComNpcActionComponent::TresComNpcForceOnActor(UObject* WorldContextObject, FName InTagName, bool InDispOn) {
}

void UTresComNpcActionComponent::TresComNpcForceOffActor(UObject* WorldContextObject, FName InTagName, bool InDispOff, bool InMoveOff) {
}

void UTresComNpcActionComponent::TresComNpcDisableFieldVoice(UObject* WorldContextObject, bool InSwitch) {
}

void UTresComNpcActionComponent::TresComNpcDisableCameraDir(UObject* WorldContextObject, bool InSwitch) {
}

UTresComNpcActionComponent::UTresComNpcActionComponent() {
    this->m_fFeelOutWorldZ = -500.00f;
    this->m_MaxControllerNum = 10;
    this->m_MaxDispActorNum = 60;
    this->m_fCameraOutDir = 0.00f;
    this->m_fCameraOutRange = 5000.00f;
    this->m_fCameraInFeadTime = 1.50f;
    this->m_fCameraOutFeadTime = 1.50f;
    this->m_fNearCameraOutFeadTime = 4.00f;
    this->m_AIControllerClass = NULL;
    this->m_fForceBlendRate = 2.00f;
    this->m_fPrioryRatePcMin = 1.00f;
    this->m_fPrioryRatePcMax = 3.00f;
    this->m_fPrioryRateNoTurnMin = 500.00f;
    this->m_fPrioryRateNoTurnMax = 1200.00f;
    this->m_fLookAtLimitDir = 60.00f;
    this->m_fLookAtBlendTime = 1.50f;
    this->m_fLookAtLodLimit = 2;
    this->m_fMinDegree = 10.00f;
    this->m_fInPushRange = 600.00f;
    this->m_fStaggerRange = 30.00f;
    this->m_fMoveLineRange = 200.00f;
    this->m_fMaxHeight = 15.00f;
    this->m_fVoiceTimer = 0.50f;
    this->m_OneFrameSpawnNum = 30;
    this->m_PrizeLivingTime = 3.00f;
    this->m_PrizeDropTimerMin = 4.00f;
    this->m_PrizeDropTimerMax = 6.00f;
}

