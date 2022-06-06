#pragma once
#include "CoreMinimal.h"
#include "TresCoopDefinitionBase.h"
#include "TresCoop1_e_ex006_Dash.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresCoop1_e_ex006_Dash : public UTresCoopDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_SideNum;
    
    UPROPERTY(EditAnywhere)
    float m_ForwardOffset;
    
    UPROPERTY(EditAnywhere)
    float m_SpaceBetween;
    
    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(EditAnywhere)
    float m_QueryIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxTackleMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TackleMoveDistance;
    
    UTresCoop1_e_ex006_Dash();
};

