#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresUIShopVoice.h"
#include "TresUIShopInfo.generated.h"

class ATresUIActor;

USTRUCT(BlueprintType)
struct FTresUIShopInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString NameTextID;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresUIActor> Staff;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresUIShopVoice> TalkWelcome;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresUIShopVoice> TalkNewArrival;
    
    TRESGAME_API FTresUIShopInfo();
};

