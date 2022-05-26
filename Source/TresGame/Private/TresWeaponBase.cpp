#include "TresWeaponBase.h"
#include "TresWeaponMovementComponent.h"
#include "TresSkeletalMeshComponent.h"
#include "TresEffectAttachComponent.h"
#include "TresAtkCollComponent.h"

class USQEX_KBD_Component;
class ATresPawnBase;

ATresPawnBase* ATresWeaponBase::GetPawnOwner() const {
    return NULL;
}

USQEX_KBD_Component* ATresWeaponBase::GetKBDComponent() const {
    return NULL;
}

ATresWeaponBase::ATresWeaponBase() {
    this->MyMovement = CreateDefaultSubobject<UTresWeaponMovementComponent>(TEXT("TresWeaponMovement0"));
    this->MyMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("TresWeaponMesh0"));
    this->MyAtkColl = CreateDefaultSubobject<UTresAtkCollComponent>(TEXT("TresAtkColl0"));
    this->MyEffectAtt = CreateDefaultSubobject<UTresEffectAttachComponent>(TEXT("TresEffectAttach0"));
    this->MyPawn = NULL;
    this->m_AppearEffect = NULL;
    this->m_AppearVisibleDelayTime = 0.00f;
    this->m_bIsEnableAppearScaleAnim = false;
    this->m_bIsDelayAppearScaleAnim = false;
    this->m_AppearScaleAnimTime = 0.00f;
    this->m_AppearScaleAnimStartScale = 0.01f;
    this->m_bIsEnableAppearDitherAnim = false;
    this->m_bIsDelayAppearDitherAnim = false;
    this->m_AppearDitherAnimTime = 0.00f;
    this->m_AppearDitherAnimStartValue = 0.00f;
    this->m_DisappearEffect = NULL;
    this->m_DisappearVisibleDelayTime = 0.00f;
    this->m_bIsEnableDisappearScaleAnim = false;
    this->m_DisappearScaleAnimTime = 0.00f;
    this->m_DisappearScaleAnimEndScale = 0.01f;
    this->m_bIsEnableDisappearDitherAnim = false;
    this->m_DisappearDitherAnimTime = 0.00f;
    this->m_DisappearDitherAnimEndValue = 0.00f;
    this->m_DisappearWithScaleTime = 0.50f;
    this->m_DestroyScaleAnimEndScale = 0.01f;
    this->m_CmnMagicCastEffect = NULL;
    this->m_CmnBadStatesEffect = NULL;
    this->m_CmnChargeEffect = NULL;
    this->m_CmnStyleChangeChargeEffect = NULL;
    this->m_pDrainEffect = NULL;
    this->m_pShootFlowEffect = NULL;
    this->m_SoundAssets_Hit = NULL;
    this->m_SoundAssets_Swing = NULL;
    this->m_bEnableMapCollisionOnFreeMove = false;
    this->m_DisableOverwriteMeshOrgOverwriteDiscrenment = false;
    this->m_bIsNotifyOnlyVisible = false;
    this->m_EquipAttachParent = NULL;
    this->m_pOwnerDataTableSet = NULL;
    this->m_MeshOrgOverwriteDiscrenment = SQEX_OVERWRITE_DISCRENMENT_DEFAULT;
    this->m_MeshOrgShadowQuality = SQEX_SHADOW_QUALITY_DEFAULT;
    this->m_pDisappearEffect = NULL;
}

