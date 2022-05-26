#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "TresVFXSceneColorTableData.generated.h"

USTRUCT(BlueprintType)
struct FTresVFXSceneColorTableData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor SceneBaseColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor SceneBrightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor SceneDarkColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SceneColorSynthesis;
    
    TRESGAME_API FTresVFXSceneColorTableData();
};

