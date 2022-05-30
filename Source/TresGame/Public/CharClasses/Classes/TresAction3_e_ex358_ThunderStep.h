#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresAction_e_ex358_Base.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "TresAction3_e_ex358_ThunderStep.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAction3_e_ex358_ThunderStep : public UTresAction_e_ex358_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableMoveTime: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Speed;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_TurnNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShakeWidth;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EffectColorChangeInterpTime;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_EffectColorChangeStartColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_EffectColorChangeEndColor;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EnvQuery;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEnvQueryRunMode::Type> m_EnvQueryRunMode;
    
public:
    UTresAction3_e_ex358_ThunderStep();
};

