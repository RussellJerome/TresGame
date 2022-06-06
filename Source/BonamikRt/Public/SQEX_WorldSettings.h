#pragma once
#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "SQEX_BonamikPresetWindSettings.h"
#include "SQEX_WorldSettings.generated.h"

UCLASS()
class BONAMIKRT_API ASQEX_WorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSQEX_BonamikPresetWindSettings m_BonamikPresetWindSettings[10];
    
    ASQEX_WorldSettings();
};

