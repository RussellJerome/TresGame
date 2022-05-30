#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ETresDebugMenuTextAlignment.h"
#include "ETresDebugMenuTextVAlignment.h"
#include "DrawTextFilterParam.h"
#include "TresDebugMenuTextResource.generated.h"

USTRUCT(BlueprintType)
struct FTresDebugMenuTextResource {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString m_FontFace;
    
    UPROPERTY()
    float m_FontSize;
    
    UPROPERTY()
    FColor m_Color;
    
    UPROPERTY()
    float m_Width;
    
    UPROPERTY()
    float m_Height;
    
    UPROPERTY()
    TEnumAsByte<ETresDebugMenuTextAlignment> m_Alignment;
    
    UPROPERTY()
    TEnumAsByte<ETresDebugMenuTextVAlignment> m_VAlignment;
    
    UPROPERTY()
    TArray<FDrawTextFilterParam> m_Filters;
    
    UPROPERTY()
    FString m_TextString;
    
    TRESGAME_API FTresDebugMenuTextResource();
};

