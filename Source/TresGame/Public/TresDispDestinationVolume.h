#pragma once
#include "CoreMinimal.h"
#include "TresDirectionalVolumeTickBase.h"
#include "TresDispDestinationVolume.generated.h"

UCLASS(Abstract)
class ATresDispDestinationVolume : public ATresDirectionalVolumeTickBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString m_Namespace;
    
    UPROPERTY(EditAnywhere)
    FString m_Key;
    
    ATresDispDestinationVolume();
};

