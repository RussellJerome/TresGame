#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresItemSynthesisDataTableBase.generated.h"

USTRUCT()
struct FTresItemSynthesisDataTableBase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_Material0;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_MatNum0;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_Material1;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_MatNum1;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_Material2;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_MatNum2;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_Material3;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_MatNum3;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_Material4;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_MatNum4;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_Material5;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_MatNum5;
    
    TRESGAME_API FTresItemSynthesisDataTableBase();
};

