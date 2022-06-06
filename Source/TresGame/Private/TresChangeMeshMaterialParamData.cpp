#include "TresChangeMeshMaterialParamData.h"

FTresChangeMeshMaterialParamData::FTresChangeMeshMaterialParamData() {
    this->m_MaterialParamSetType = ESqEX_BonePoseToMaterialSetParamType::SQEX_BPMPT_SCALAR;
    this->m_StartScalarParam = 0.00f;
    this->m_EndScalarParam = 0.00f;
}

