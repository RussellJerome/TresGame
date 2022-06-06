#pragma once
#include "CoreMinimal.h"
#include "TressEnemyEx021BlurParamater.generated.h"

USTRUCT(BlueprintType)
struct FTressEnemyEx021BlurParamater {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_ParamName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NormalParam;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AccelParam;
    
    TRESGAME_API FTressEnemyEx021BlurParamater();
};

