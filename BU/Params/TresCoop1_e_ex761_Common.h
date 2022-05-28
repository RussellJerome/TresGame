#pragma once
#include "CoreMinimal.h"
#include "TresCoopDefinitionBase.h"
#include "TresCoopDefinitionParamBP.h"
#include "TresCoop1_e_ex761_Common.generated.h"

UCLASS(HideDropdown)
class UTresCoop1_e_ex761_Common : public UTresCoopDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsIgnoreTargetNonePawn: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsIgnoreAttackPawn: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsIgnoreDamageReactionPawn: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableDamageOnAbort: 1;
    
public:
    UTresCoop1_e_ex761_Common();
    UFUNCTION()
    void OnLeaderAttackHit(const FTresCoopDefinitionParamBP& Param);
    
    UFUNCTION()
    bool IsLeaderAttackHit(const FTresCoopDefinitionParamBP& Param);
    
};

