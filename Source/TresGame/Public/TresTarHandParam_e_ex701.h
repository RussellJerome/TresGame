#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresTarHandParam_e_ex701.generated.h"

class UTresAttack_e_ex701_SpawnTarHandBase;

USTRUCT(BlueprintType)
struct FTresTarHandParam_e_ex701 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresAttack_e_ex701_SpawnTarHandBase> TarHandActionClass;
    
    UPROPERTY()
    uint8 bEnablelifeTimeOverride: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float OverrideLifeTime;
    
    TRESGAME_API FTresTarHandParam_e_ex701();
};

