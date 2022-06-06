#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex325_Soloalcanam.generated.h"

class USoundBase;

UCLASS(HideDropdown)
class UTresAttack2_e_ex325_Soloalcanam : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_VoiceSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayVoiceRate;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_IsCoopAction;
    
public:
    UTresAttack2_e_ex325_Soloalcanam();
};

