#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction12_e_ex781_ChangeAeroArmorMode.generated.h"

class USoundBase;

UCLASS()
class UTresAction12_e_ex781_ChangeAeroArmorMode : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_EndArmor;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_UseMotion;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_MotionName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SkipMotTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PlayRate;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_EffectId;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UTresAction12_e_ex781_ChangeAeroArmorMode();
};

