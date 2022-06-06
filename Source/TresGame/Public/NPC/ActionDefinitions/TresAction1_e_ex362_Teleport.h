#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex362_Teleport.generated.h"

class USoundBase;
class UEnvQuery;

UCLASS(HideDropdown)
class UTresAction1_e_ex362_Teleport : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_TeleportWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_WarpEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_OnlyInvisible;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_NotEffect;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_LockOnContinue;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_VoiceSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayVoiceRate;
    
    UTresAction1_e_ex362_Teleport();
};

