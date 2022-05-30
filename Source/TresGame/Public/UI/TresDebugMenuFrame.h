#pragma once
#include "CoreMinimal.h"
#include "TresDebugMenuFrame.generated.h"

USTRUCT(BlueprintType)
struct FTresDebugMenuFrame {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 m_Start;
    
    UPROPERTY()
    int32 m_End;
    
    UPROPERTY()
    int32 m_TweenIndex;
    
    UPROPERTY()
    FName m_Script;
    
    UPROPERTY()
    TArray<int32> m_Elements;
    
    TRESGAME_API FTresDebugMenuFrame();
};

