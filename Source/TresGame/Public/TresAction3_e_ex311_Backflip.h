#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction3_e_ex311_Backflip.generated.h"

class USoundBase;

UCLASS(HideDropdown)
class UTresAction3_e_ex311_Backflip : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RiseSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_VoiceSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayVoiceRate;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_IsRevengeAction;
    
    UTresAction3_e_ex311_Backflip();
};

