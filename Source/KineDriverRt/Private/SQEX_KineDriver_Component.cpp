#include "SQEX_KineDriver_Component.h"

void USQEX_KineDriver_Component::CopyFromSkeletalMeshAssetUserData() {
}

USQEX_KineDriver_Component::USQEX_KineDriver_Component() {
    this->KineDriverIndex = -1;
    this->EnableScaleOpChildSSC = false;
    this->TickGroup = TG_Early;
    this->Enabled = true;
    this->EnableLOD = false;
    this->MinScreenSize = 0.01f;
    this->EnableFrustumCulling = false;
    this->EnableCheckDrawn = false;
    this->SkeletalMeshComponent = NULL;
}

