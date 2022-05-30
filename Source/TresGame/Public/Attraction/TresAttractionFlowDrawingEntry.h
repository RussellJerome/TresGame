#pragma once
#include "CoreMinimal.h"
#include "ETresCommandKind.h"
#include "TresAttractionFlowDrawingEntry.generated.h"

USTRUCT(BlueprintType)
struct FTresAttractionFlowDrawingEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresCommandKind> m_Command;
    
    UPROPERTY(EditAnywhere)
    float m_Weight;
    
    TRESGAME_API FTresAttractionFlowDrawingEntry();
};

