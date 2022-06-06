#pragma once
#include "CoreMinimal.h"
#include "EX359_ComboAttackIDModifySet.generated.h"

USTRUCT(BlueprintType)
struct FEX359_ComboAttackIDModifySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName m_OldAttackID;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName m_NewAttackID;
    
    TRESGAME_API FEX359_ComboAttackIDModifySet();
};

