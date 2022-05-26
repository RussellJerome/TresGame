#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "TresSceneColorCsvData.generated.h"

USTRUCT()
struct FTresSceneColorCsvData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    float KHSSceneEmmisive;
    
    UPROPERTY(VisibleAnywhere)
    float LightIntensity;
    
    UPROPERTY(VisibleAnywhere)
    float InDirectIntensity;
    
    UPROPERTY(VisibleAnywhere)
    float AmbientIntensity;
    
    UPROPERTY(VisibleAnywhere)
    FLinearColor TintColor;
    
    TRESGAME_API FTresSceneColorCsvData();
};

