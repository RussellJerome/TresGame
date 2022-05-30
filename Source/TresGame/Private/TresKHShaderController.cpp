#include "TresKHShaderController.h"

class UMaterialInterface;



void ATresKHShaderController::SetCurrentPostProcessMaterial(UMaterialInterface* inMaterial) {
}

ATresKHShaderController::ATresKHShaderController() {
    this->m_CurrentPostProcessMaterial = NULL;
}

