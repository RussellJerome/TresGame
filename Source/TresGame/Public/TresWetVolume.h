#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresWetVolume.generated.h"

UCLASS()
class ATresWetVolume : public ATresVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_WetnessTimeParam;
    
public:
    ATresWetVolume();
};

