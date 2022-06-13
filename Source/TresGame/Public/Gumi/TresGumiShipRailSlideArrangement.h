#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActorBase.h"
#include "TresGumiShipRailSwitchInfos.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESQEX_RAIL_SLIDE_DIR -FallbackName=ESQEX_RAIL_SLIDE_DIR
#include "ESQEX_Enums.h"
#include "ESQEX_RAIL_SLIDE_DIR.h"
#include "FTresGumiShipRailSlideRailType.h"
#include "TresGumiShipRailSlideArrangement.generated.h"

class ATresRailSlideActor;

UCLASS(Abstract)
class ATresGumiShipRailSlideArrangement : public ATresGumiShipActorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRailSlideEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipRailSlideRailType m_eOverrideRailType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESQEX_RAIL_SLIDE_DIR m_eOverrideRailDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresGumiShipRailSwitchInfos> m_RailSwitchInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ATresRailSlideActor> m_pBeginRailTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIgnoreParentRotation;
    
public:
    ATresGumiShipRailSlideArrangement();
    UFUNCTION(BlueprintCallable)
    void BP_SwitchRailSwitchState(FName RailSwitchName);
    
    UFUNCTION(BlueprintCallable)
    void BP_ResetRailSwitchStateAll();
    
};

