#pragma once
#include "CoreMinimal.h"
#include "TresComNpcLookInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcLookInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> m_AnimTypes;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> m_LookAtAnims;
    
    TRESGAME_API FTresComNpcLookInfo();
};

