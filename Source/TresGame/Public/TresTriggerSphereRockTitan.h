#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerSphere.h"
#include "TresTriggerSphereRockTitan.generated.h"

class ATresPawnBase;

UCLASS(Config=Game)
class ATresTriggerSphereRockTitan : public ATriggerSphere {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ATresPawnBase* m_LinkPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_DetectTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_TimerInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_SendParam1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SendParam2;
    
    ATresTriggerSphereRockTitan();
};

