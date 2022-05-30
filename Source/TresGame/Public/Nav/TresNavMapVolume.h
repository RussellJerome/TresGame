#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresNavMapVolume.generated.h"

UCLASS()
class ATresNavMapVolume : public ATresVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FName m_DataTableKey;
    
    UPROPERTY(EditAnywhere)
    bool m_EnableNavMap;
    
    UPROPERTY(EditAnywhere)
    float m_SwitchNavMapTime;
    
public:
    ATresNavMapVolume();
};

