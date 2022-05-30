#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OneCollInfo_e_ex310.generated.h"

class ATresProjectile_e_ex310_Wave_OneCollision;

USTRUCT(BlueprintType)
struct FOneCollInfo_e_ex310 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 iNotifyParam;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_e_ex310_Wave_OneCollision> pOneCollision;
    
    TRESGAME_API FOneCollInfo_e_ex310();
};

