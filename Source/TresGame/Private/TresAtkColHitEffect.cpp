#include "TresAtkColHitEffect.h"

FTresAtkColHitEffect::FTresAtkColHitEffect() {
    this->m_PawnHitEffect = NULL;
    this->m_PawnHitSEAsset = NULL;
    this->m_PawnHitEffectPerAttr[0] = NULL;
    this->m_PawnHitEffectPerAttr[1] = NULL;
    this->m_PawnHitEffectPerAttr[2] = NULL;
    this->m_PawnHitEffectPerAttr[3] = NULL;
    this->m_PawnHitEffectPerAttr[4] = NULL;
    this->m_PawnHitEffectPerAttr[5] = NULL;
    this->m_PawnHitEffectPerAttr[6] = NULL;
    this->m_PawnHitEffectPerAttr[7] = NULL;
    this->m_PawnHitSEAssetPerAttr[0] = NULL;
    this->m_PawnHitSEAssetPerAttr[1] = NULL;
    this->m_PawnHitSEAssetPerAttr[2] = NULL;
    this->m_PawnHitSEAssetPerAttr[3] = NULL;
    this->m_PawnHitSEAssetPerAttr[4] = NULL;
    this->m_PawnHitSEAssetPerAttr[5] = NULL;
    this->m_PawnHitSEAssetPerAttr[6] = NULL;
    this->m_PawnHitSEAssetPerAttr[7] = NULL;
    this->m_DirectHitEffect = NULL;
    this->m_bChangeMapHit = false;
    this->m_MapHitEffect = NULL;
    this->m_bChangeSEMapHit = false;
    this->m_MapHitSEAsset = NULL;
    this->m_bEnableDecal = false;
}

