#include "OnlineSubsystemEOS_TresSettings.h"

UOnlineSubsystemEOS_TresSettings::UOnlineSubsystemEOS_TresSettings() {
    this->m_ProductName = TEXT("KINGDOM HEARTS III");
    this->m_ProductVersion = TEXT("1.0.0.0");
    this->m_ProductID = TEXT("e4f9d3e8280c49a99df32c2777a1f41e");
    this->m_SandboxID = TEXT("0712176b5e3e49bfa8866c0ee1359f2d");
    this->m_DeploymentID = TEXT("c3e5b03055b648b49278d3a46d37212d");
    this->m_DiableOverlay = false;
    this->m_DiableSocialOverlay = false;
    this->m_Artifacts.AddDefaulted(7);
}

