#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActorCompoBase.h"
#include "TresGumiShipGumiMissionManager.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipGumiMissionManager : public UTresGumiShipActorCompoBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGumiShipGumiMissionClearDispather);
    
    UPROPERTY(BlueprintAssignable)
    FGumiShipGumiMissionClearDispather OnClearGumiMission;
    
    UTresGumiShipGumiMissionManager();
private:
    UFUNCTION()
    void OnStartMissionCheck();
    
public:
    UFUNCTION(Exec)
    void GumiShip_Debug_SetGumiMissionProgressNum(int32 dIndex, int32 dParam);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_ClearGumiMission(int32 dIndex);
    
};

