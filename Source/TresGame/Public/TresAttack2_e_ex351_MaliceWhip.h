#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex351_Base.h"
#include "TresAttack2_e_ex351_MaliceWhip.generated.h"

class USoundBase;

UCLASS(HideDropdown)
class UTresAttack2_e_ex351_MaliceWhip : public UTresAttack_e_ex351_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_StartVoiceList;
    
public:
    UTresAttack2_e_ex351_MaliceWhip();
};

