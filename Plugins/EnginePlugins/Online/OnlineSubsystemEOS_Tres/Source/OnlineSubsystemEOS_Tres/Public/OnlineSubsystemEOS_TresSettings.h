#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "OnlineSubsystemEOS_TresArtifact.h"
#include "Engine/DeveloperSettings.h"
#include "OnlineSubsystemEOS_TresSettings.generated.h"

UCLASS(DefaultConfig, Config=EOS_Tres)
class UOnlineSubsystemEOS_TresSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FString m_ProductName;
    
    UPROPERTY(Config, EditAnywhere)
    FString m_ProductVersion;
    
    UPROPERTY(Config, EditAnywhere)
    FName m_ProductID;
    
    UPROPERTY(Config, EditAnywhere)
    FName m_SandboxID;
    
    UPROPERTY(Config, EditAnywhere)
    FName m_DeploymentID;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_DiableOverlay;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_DiableSocialOverlay;
    
    UPROPERTY(Config, EditAnywhere)
    FString m_DevAuthHost;
    
    UPROPERTY(Config, EditAnywhere)
    FString m_DevAuthCredentials;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FOnlineSubsystemEOS_TresArtifact> m_Artifacts;
    
    UOnlineSubsystemEOS_TresSettings();
};

