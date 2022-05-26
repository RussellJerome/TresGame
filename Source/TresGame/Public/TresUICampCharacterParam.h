#pragma once
#include "CoreMinimal.h"
#include "TresUICampCharacterParam.generated.h"

class UTresUIDataAssetStatus;
class ATresUIActor;

USTRUCT(BlueprintType)
struct FTresUICampCharacterParam {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    ATresUIActor* UIActor;
    
    UPROPERTY(Transient)
    UTresUIDataAssetStatus* UIStatusData;
    
    TRESGAME_API FTresUICampCharacterParam();
};

