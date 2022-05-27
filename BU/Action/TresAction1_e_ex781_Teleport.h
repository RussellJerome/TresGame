#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex781_Teleport.generated.h"

class USoundBase;

UCLASS()
class UTresAction1_e_ex781_Teleport : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_PlayVoiceRate;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_IsAirWarp;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_InvisibleLockOnMarker;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_Invisible;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_IsWarpAnimStop;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpWaitTime;
    
    UTresAction1_e_ex781_Teleport();
};

