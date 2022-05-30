#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresMBModelElement.generated.h"

USTRUCT(BlueprintType)
struct FTresMBModelElement {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName m_ModelName;
    
    UPROPERTY()
    int32 m_ParentIndex;
    
    UPROPERTY()
    FVector m_Scaling;
    
    UPROPERTY()
    FVector m_Rotation;
    
    UPROPERTY()
    FVector m_Translation;
    
    UPROPERTY()
    int32 m_CurveIndex[9];
    
    TRESGAME_API FTresMBModelElement();
};

