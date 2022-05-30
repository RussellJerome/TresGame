#pragma once
#include "CoreMinimal.h"
#include "TresComNpcMaterialInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcMaterialInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_MaterialName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ParamName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fValue;
    
    TRESGAME_API FTresComNpcMaterialInfo();
};

