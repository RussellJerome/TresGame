#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "TresWeaponAttack_e_ex367_PillarPatternAttack.generated.h"

class USoundBase;

UCLASS(HideDropdown)
class UTresWeaponAttack_e_ex367_PillarPatternAttack : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_patternID;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_VoiceSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayVoiceRate;
    
    UTresWeaponAttack_e_ex367_PillarPatternAttack();
};

