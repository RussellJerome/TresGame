#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "TresEnemy_e_ex773_CrushingPattern.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_CrushingPattern {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_Comment;
    
    UPROPERTY(EditDefaultsOnly)
    FKey m_Keys;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<int32> m_pro_CrushingParamNoArray;
    
    TRESGAME_API FTresEnemy_e_ex773_CrushingPattern();
};

