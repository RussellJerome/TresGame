#pragma once
#include "CoreMinimal.h"
#include "ETresDebugMenuBlendMode.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ETresDebugMenuResourceType.h"
#include "TresDebugMenuElement.generated.h"

USTRUCT(BlueprintType)
struct FTresDebugMenuElement {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName m_ElementName;
    
    UPROPERTY()
    float m_X;
    
    UPROPERTY()
    float m_Y;
    
    UPROPERTY()
    float m_Width;
    
    UPROPERTY()
    float m_Height;
    
    UPROPERTY()
    TEnumAsByte<ETresDebugMenuBlendMode> m_BlendMode;
    
    UPROPERTY()
    FLinearColor m_ColorMultiplier;
    
    UPROPERTY()
    FLinearColor m_ColorOffset;
    
    UPROPERTY()
    TEnumAsByte<ETresDebugMenuResourceType> m_ResourceType;
    
    UPROPERTY()
    int32 m_ResourceIndex;
    
    UPROPERTY()
    FVector2D m_LayoutFactor;
    
    TRESGAME_API FTresDebugMenuElement();
};

