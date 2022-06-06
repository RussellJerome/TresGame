#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresUIActorSetting.h"
#include "TresUIGameFlagData.h"
#include "TresUIGameFlagActor.generated.h"

class ATresUIActor;

USTRUCT(BlueprintType)
struct FTresUIGameFlagActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresUIActor> ActorAsset;
    
    UPROPERTY(EditDefaultsOnly)
    FTresUIActorSetting ActorSetting;
    
    UPROPERTY(EditDefaultsOnly)
    FTresUIGameFlagData GameFlag;
    
    TRESGAME_API FTresUIGameFlagActor();
};

