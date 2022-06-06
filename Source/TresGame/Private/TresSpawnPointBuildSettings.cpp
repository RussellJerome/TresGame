#include "TresSpawnPointBuildSettings.h"

FTresSpawnPointBuildSettings::FTresSpawnPointBuildSettings() {
    this->m_Size = ETresSpawnPointSize::Small;
    this->m_Radius = 0.00f;
    this->m_Height = 0.00f;
    this->m_Method = ETresSpawnPointBuildMethod::Simple;
}

