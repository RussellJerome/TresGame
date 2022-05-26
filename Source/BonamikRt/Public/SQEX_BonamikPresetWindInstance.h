#pragma once
#include "CoreMinimal.h"
#include "SQEX_BonamikPresetWindInstance.generated.h"

class USQEX_BonamikWind;

USTRUCT(BlueprintType)
struct BONAMIKRT_API FSQEX_BonamikPresetWindInstance {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FName m_PresetName;
    
    UPROPERTY(Transient)
    USQEX_BonamikWind* m_Wind;
    
    UPROPERTY(Transient)
    TArray<FName> m_TargetGroups;
    
    FSQEX_BonamikPresetWindInstance();
};

