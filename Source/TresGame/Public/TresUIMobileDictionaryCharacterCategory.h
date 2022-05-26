#pragma once
#include "CoreMinimal.h"
#include "ETresWorldCode.h"
#include "ETresUIDataVersion.h"
#include "TresUIMobileDictionaryCharacterCategory.generated.h"

USTRUCT(BlueprintType)
struct FTresUIMobileDictionaryCharacterCategory {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresWorldCode> WorldCode;
    
    UPROPERTY(EditDefaultsOnly)
    FString TextId;
    
    UPROPERTY(EditDefaultsOnly)
    ETresUIDataVersion Version;
    
    TRESGAME_API FTresUIMobileDictionaryCharacterCategory();
};

