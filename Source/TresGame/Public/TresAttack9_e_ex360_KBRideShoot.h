#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack9_e_ex360_KBRideShoot.generated.h"

class USoundBase;

UCLASS(HideDropdown)
class UTresAttack9_e_ex360_KBRideShoot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_ShotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingTimeMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_KBParamSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_PlayVoiceRate;
    
    UTresAttack9_e_ex360_KBRideShoot();
};

