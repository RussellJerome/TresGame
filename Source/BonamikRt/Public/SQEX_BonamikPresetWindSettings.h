#pragma once
#include "CoreMinimal.h"
#include "SQEX_BonamikPresetWindSettings.generated.h"

class USQEX_BonamikWindDesc;

USTRUCT(BlueprintType)
struct BONAMIKRT_API FSQEX_BonamikPresetWindSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_PresetName;
    
    UPROPERTY(EditAnywhere)
    USQEX_BonamikWindDesc* m_WindDesc;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> m_TargetGroups;
    
    FSQEX_BonamikPresetWindSettings();
};

