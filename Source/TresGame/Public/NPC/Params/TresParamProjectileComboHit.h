#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "TresParamProjectileComboHitSoloParam.h"
#include "TresParamProjectileComboHit.generated.h"

class ATresProjectile_e_ex773_ComboHit;

USTRUCT(BlueprintType)
struct FTresParamProjectileComboHit {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<ATresProjectile_e_ex773_ComboHit> GeneratedClass;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresParamProjectileComboHitSoloParam> SpawnParam;
    
    UPROPERTY(EditAnywhere)
    FVector SpawnOffset;
    
    UPROPERTY(EditAnywhere)
    FName BaseAtkId;
    
    UPROPERTY(EditAnywhere)
    FName LastAtkId;
    
    TRESGAME_API FTresParamProjectileComboHit();
};

