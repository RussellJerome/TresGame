#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex325_Teleport.generated.h"

class USoundBase;
class UEnvQuery;

UCLASS(HideDropdown)
class UTresAction1_e_ex325_Teleport : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_TeleportWaitTime;
    
    UPROPERTY(EditAnywhere)
    bool m_IsPopOnly;
    
    UPROPERTY(EditAnywhere)
    bool m_IsInvisibleOnly;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_WarpEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpEQSQueryMinRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpEQSQueryMaxRadius;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_IsLandWarp;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_IsDarkRushBeforeWarp;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_VoiceSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayVoiceRate;
    
public:
    UTresAction1_e_ex325_Teleport();
};

