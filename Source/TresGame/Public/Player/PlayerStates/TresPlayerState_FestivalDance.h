#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FestivalDance.h"
#include "TresRaDanceSplineInterface.h"
#include "EDancePerformType.h"
#include "TresPlayerState_FestivalDance.generated.h"

class ATresCameraFestivalDanceRapunzel;
class UTresPlayerState_FestivalDance;
class ATresRaFestivalDanceManager;
class ATresCameraFestivalDance;

UCLASS()
class UTresPlayerState_FestivalDance : public UTresCharState_FestivalDance, public ITresRaDanceSplineInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresOnPlayerPerformEnd, UTresPlayerState_FestivalDance*, PlayerState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresOnPlayerDancePerform, UTresPlayerState_FestivalDance*, PlayerState, EDancePerformType, Type, int32, performLv);
    
    UPROPERTY(BlueprintAssignable)
    FTresOnPlayerDancePerform OnPlayerDancePerform;
    
private:
    UPROPERTY()
    ATresCameraFestivalDance* m_pCamera;
    
    UPROPERTY()
    ATresCameraFestivalDanceRapunzel* m_pRapunzelCamera;
    
    UPROPERTY()
    ATresRaFestivalDanceManager* m_pDanceMng;
    
public:
    UTresPlayerState_FestivalDance();
    UFUNCTION()
    void OnDanceRhythmBeat();
    
    
    // Fix for true pure virtual functions not being implemented
};

