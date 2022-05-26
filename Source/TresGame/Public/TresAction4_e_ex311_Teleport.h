#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction4_e_ex311_Teleport.generated.h"

class USoundBase;
class UEnvQuery;

UCLASS(HideDropdown)
class UTresAction4_e_ex311_Teleport : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_WarpEQSQuery;
    
    UPROPERTY(EditAnywhere)
    float m_WarpTime;
    
    UPROPERTY(EditAnywhere)
    bool m_IsPopOnly;
    
    UPROPERTY(EditAnywhere)
    bool m_IsInvisibleOnly;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_VoiceSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayVoiceRate;
    
public:
    UTresAction4_e_ex311_Teleport();
};

