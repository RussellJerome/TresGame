#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionFlyCodeDriven.h"
#include "ETresBodyCollReactionType.h"
#include "EX731_DashEffectInfo.h"
#include "TresMove2_e_ex731_Dash.generated.h"

UCLASS(HideDropdown)
class UTresMove2_e_ex731_Dash : public UTresLocomotionDefinitionFlyCodeDriven {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fPitchResetSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bInvincible;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ETresBodyCollReactionType m_BodyReactionType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBodyReactionResetTime;
    
    UPROPERTY(EditDefaultsOnly)
    FEX731_DashEffectInfo m_DashEffectInfoArray[2];
    
    UTresMove2_e_ex731_Dash();
};

