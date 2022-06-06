#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGimmickActorBase.h"
#include "TresGumiShipTrackingGuide.generated.h"

class UTresGumiShipFSM;

UCLASS()
class ATresGumiShipTrackingGuide : public ATresGumiShipGimmickActorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float m_fTimeOfAddRailSlideActor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float m_fSpeedOfDefaultMove;
    
    UPROPERTY(Export)
    UTresGumiShipFSM* m_pFSM;
    
public:
    ATresGumiShipTrackingGuide();
    UFUNCTION()
    void GenerateRailSlideActor();
    
};

