#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "FestivalDancePawn_friend.generated.h"

class ATresRaFestivalDanceManager;

UCLASS()
class AFestivalDancePawn_friend : public ATresCharPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Idle_MotionName;
    
private:
    UPROPERTY()
    ATresRaFestivalDanceManager* m_pDanceMng;
    
public:
    AFestivalDancePawn_friend();
};

