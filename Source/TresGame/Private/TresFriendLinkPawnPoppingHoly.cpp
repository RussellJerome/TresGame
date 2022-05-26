#include "TresFriendLinkPawnPoppingHoly.h"

ATresFriendLinkPawnPoppingHoly::ATresFriendLinkPawnPoppingHoly() {
    this->m_HolyProjectileClass = NULL;
    this->m_FinishAttackHolyProjectileClass = NULL;
    this->m_pHolyBulletFiringEffectAsset = NULL;
    this->m_pKeyBladeAttachHolyEffectAsset = NULL;
    this->m_PoppingHolyCameraClass = NULL;
    this->m_fMoveDeceleration = 0.98f;
    this->m_fCameraStartInterpolationTime = 0.00f;
    this->m_fCameraEndInterpolationTime = 0.00f;
    this->m_eBodyCollisionPushPowerLevel = ETresBodyPushPowerLevel::PPL_80;
    this->m_fFriendLinkFinishInvincibleTime = 1.00f;
}

