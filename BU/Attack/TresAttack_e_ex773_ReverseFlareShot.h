#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack_e_ex773_ReverseFlareShot.generated.h"

class ATres_e_ex773_ReverseFlareShotMan;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack_e_ex773_ReverseFlareShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BackMoveDist;
    
    UPROPERTY(EditDefaultsOnly)
    float AimingRateXY;
    
    UPROPERTY(EditDefaultsOnly)
    float AimingRateZ;
    
    UPROPERTY(EditDefaultsOnly)
    int32 CreateNum;
    
    UPROPERTY(EditDefaultsOnly)
    float StartExplosionFront;
    
    UPROPERTY(EditDefaultsOnly)
    float StartExplosionUp;
    
    UPROPERTY(EditDefaultsOnly)
    float MinLocationZ;
    
    UPROPERTY(EditDefaultsOnly)
    float SpawnInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float StartExplosionTime;
    
    UPROPERTY(EditDefaultsOnly)
    float ExplosionTimeOffset;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATres_e_ex773_ReverseFlareShotMan> ManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    FVector SpawnOffsetMaxValue;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FVector> SpawnOffsetArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> SpawnOffsetAngleArray;
    
    UTresAttack_e_ex773_ReverseFlareShot();
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_IsUseBackMove();
    
    UFUNCTION(BlueprintImplementableEvent)
    FVector BPE_GetBackMoveVector(float Delta, const FVector& diff, const FVector& Dir);
    
};

