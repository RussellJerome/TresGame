#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresOverridePhysMaterialVolume.generated.h"

UCLASS()
class ATresOverridePhysMaterialVolume : public ATresVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_DetectPriority;
    
    ATresOverridePhysMaterialVolume();
};

