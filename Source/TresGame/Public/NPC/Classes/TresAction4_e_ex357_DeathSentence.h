#pragma once
#include "CoreMinimal.h"
#include "TresAction_e_ex357_Base.h"
#include "TresDeathSentenceParam_e_ex357.h"
#include "TresAction4_e_ex357_DeathSentence.generated.h"

UCLASS(HideDropdown)
class UTresAction4_e_ex357_DeathSentence : public UTresAction_e_ex357_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresDeathSentenceParam_e_ex357> m_ParamList;
    
public:
    UTresAction4_e_ex357_DeathSentence();
};

