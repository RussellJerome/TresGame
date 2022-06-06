#include "TresUIP_MultiItemGet.h"

int32 UTresUIP_MultiItemGet::OnCallback(int32 ID, int32 Param) {
    return 0;
}

UTresUIP_MultiItemGet::UTresUIP_MultiItemGet() {
    this->m_RootMain = NULL;
    this->m_Window = NULL;
    this->m_TextArea = NULL;
    this->m_Icon = NULL;
}

