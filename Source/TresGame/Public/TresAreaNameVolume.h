#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresAreaNameVolume.generated.h"

UCLASS()
class ATresAreaNameVolume : public ATresVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FName m_DataTableKey;
    
    UPROPERTY(EditAnywhere)
    bool m_EnableAreaName;
    
    UPROPERTY(EditAnywhere)
    bool m_ShowAreaNameUI;
    
    UPROPERTY(EditAnywhere)
    bool m_EnableNavMap;
    
    UPROPERTY(EditAnywhere)
    float m_SwitchNavMapTime;
    
public:
    ATresAreaNameVolume();
};

