#pragma once
#include "CoreMinimal.h"
#include "TresCoopDefinitionBase.h"
#include "TresCoopDefinitionParamBP.h"
#include "TresCoop1_e_ex006_Scrum.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresCoop1_e_ex006_Scrum : public UTresCoopDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_VerticalNum;
    
    UPROPERTY(EditAnywhere)
    float m_VertiacalDeviationOffset;
    
    UPROPERTY(EditAnywhere)
    float m_SideDeviationOffset;
    
    UPROPERTY(EditAnywhere)
    float m_SideSpaceBetween;
    
    UPROPERTY(EditAnywhere)
    float m_VerticalSpaceBetween;
    
    UPROPERTY(EditAnywhere)
    float m_DesiredMoveToDistance;
    
    UPROPERTY(EditAnywhere)
    float m_ExcludedDistance;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_IncludedNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_IncludedDistance;
    
    UPROPERTY(EditAnywhere)
    UEnvQuery* m_QueryTemplateWarp;
    
    UPROPERTY(EditAnywhere)
    UEnvQuery* m_QueryTemplateScrum;
    
    UPROPERTY(EditAnywhere)
    float m_ForwardOffset;
    
    UPROPERTY(EditAnywhere)
    float m_QueryIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TackleMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DisableLockOnAngle;
    
    UTresCoop1_e_ex006_Scrum();
    UFUNCTION()
    void CoopDashStart(const FTresCoopDefinitionParamBP& Param);
    
    UFUNCTION()
    void CoopDashEnd(const FTresCoopDefinitionParamBP& Param);
    
};

