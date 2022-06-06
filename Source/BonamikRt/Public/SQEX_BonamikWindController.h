#pragma once
#include "CoreMinimal.h"
#include "SQEX_BonamikPresetWindInstance.h"
#include "UObject/NoExportTypes.h"
#include "SQEX_BonamikWindController.generated.h"

class USQEX_BonamikWind;
class UWorld;

USTRUCT()
struct BONAMIKRT_API FSQEX_BonamikWindController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FSQEX_BonamikPresetWindInstance m_PresetWind[10];
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<USQEX_BonamikWind>> m_WindSources;
    
    UPROPERTY(Transient)
    FVector m_CurrentGlobalWindForce;
    
    UPROPERTY()
    float m_GlobalWindScale;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UWorld> RefWorld;
    
public:
    FSQEX_BonamikWindController();
};

