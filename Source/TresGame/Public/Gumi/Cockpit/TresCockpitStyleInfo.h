#pragma once
#include "CoreMinimal.h"
#include "ETresUIPadButtonType.h"
#include "TresCockpitStyleInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresCockpitStyleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FString> m_strBtnLocKeyAry;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TEnumAsByte<ETresUIPadButtonType>> m_eBtnTypeAry;
    
    TRESGAME_API FTresCockpitStyleInfo();
};

