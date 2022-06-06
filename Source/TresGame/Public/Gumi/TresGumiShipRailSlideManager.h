#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActorCompoBase.h"
#include "ETresGumiShipRailSlideType.h"
#include "TresGumiShipEnemyGroupWipeOutData.h"
#include "TresGMInputResult.h"
#include "TresGumiShipRailSlideManager.generated.h"

class ATresGumiShipPlayerControllerBase;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipRailSlideManager : public UTresGumiShipActorCompoBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresGumiShipFinishedRailSlide, const ETresGumiShipRailSlideType, eRailSlideType);
    
    UTresGumiShipRailSlideManager();
    UFUNCTION(BlueprintPure)
    bool IsTracking() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSpTracking() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRouteRailSliding() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRailSliding() const;
    
private:
    UFUNCTION()
    void _OnReraisePlayer();
    
    UFUNCTION()
    void _OnFinishedRailSlideSub();
    
    UFUNCTION()
    void _OnFinishedRailSlideCoolDown();
    
    UFUNCTION()
    void _OnFinishedRailSlideByEnemyGroupWipeOut(const FTresGumiShipEnemyGroupWipeOutData& rEnemyGroupWipeOutData);
    
    UFUNCTION()
    void _OnDeadPlayer();
    
    UFUNCTION()
    void _OnCheckCancelRailSlide(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController);
    
};

