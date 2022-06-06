#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction4_e_ex360_Teleport.generated.h"

class USoundBase;
class UEnvQuery;

UCLASS(HideDropdown)
class UTresAction4_e_ex360_Teleport : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_TeleportWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_WarpEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_IsAirMode;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_VoiceSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_PlayVoiceRate;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_UseLandingMotion;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_Invisible;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_DisableLockOn;
    
    UTresAction4_e_ex360_Teleport();
};

