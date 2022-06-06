#include "TresDisneyMagicPawnStitch.h"

FVector ATresDisneyMagicPawnStitch::GetNextFinishPoint(int32 InAddNext) {
    return FVector{};
}

ATresDisneyMagicPawnStitch::ATresDisneyMagicPawnStitch() {
    this->m_Proj = NULL;
    this->m_EffAssetLineParticle = NULL;
    this->m_EffAssetLineParticleFinish = NULL;
    this->m_EffAssetPolyParticle = NULL;
    this->m_EffAssetAreaAttack0 = NULL;
    this->m_EffAssetBeam0 = NULL;
    this->m_EffAssetBeam1 = NULL;
    this->m_EffAssetBeam2 = NULL;
    this->m_EffAssetPoint0 = NULL;
    this->m_EffAssetPointFinish = NULL;
    this->m_EffAssetPointAreaDecide = NULL;
    this->m_EffAssetFinishLightning = NULL;
    this->m_EffAssetFinishPointGouraud = NULL;
    this->m_EffAssetFinishAreaLast = NULL;
    this->m_EffAssetFinishPoleLast = NULL;
    this->m_EffDataAssetSora = NULL;
    this->m_EffDataAssetStitch = NULL;
    this->m_Param_Dist2DMax = 2000.00f;
    this->m_pEffLine = NULL;
    this->m_pEffPoly = NULL;
    this->m_pEffBeam0 = NULL;
    this->m_pEffBeam1 = NULL;
}

