#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "TresAreaEffectCurveData.h"
#include "TresAreaEffectData.h"
#include "TresVFXAreaCustomTableData.generated.h"

USTRUCT()
struct FTresVFXAreaCustomTableData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Description;
    
    UPROPERTY(EditAnywhere)
    FLinearColor AreaBaseColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor AreaBrightColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor AreaDarkColor;
    
    UPROPERTY(EditAnywhere)
    float AreaColorSynthesis;
    
    UPROPERTY(EditAnywhere)
    FTresAreaEffectCurveData CurveDatas;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresAreaEffectData> AreaEffectData;
    
    TRESGAME_API FTresVFXAreaCustomTableData();
};

