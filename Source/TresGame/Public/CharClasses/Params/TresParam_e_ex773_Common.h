#pragma once
#include "CoreMinimal.h"
#include "TresParam_e_ex773_SpawnParam.h"
#include "Engine/DataAsset.h"
#include "TresParam_e_ex773_ParamReverseFlareShot.h"
#include "TresParam_e_ex773_Common.generated.h"

UCLASS()
class UTresParam_e_ex773_Common : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresParam_e_ex773_SpawnParam> ReverseFlareSpawnArray;
    
    UPROPERTY(EditDefaultsOnly)
    float FlareSpawnPosRate;
    
    UPROPERTY(EditDefaultsOnly)
    float BombTime;
    
    UPROPERTY(EditDefaultsOnly)
    float SpawnOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    float WallHitHoseiRange;
    
    UPROPERTY(EditDefaultsOnly)
    bool bZDirHoming;
    
    UPROPERTY(EditDefaultsOnly)
    float AttractTime;
    
    UPROPERTY(EditDefaultsOnly)
    float AttractRange;
    
    UPROPERTY(EditDefaultsOnly)
    float AttractForce;
    
    UPROPERTY(EditDefaultsOnly)
    FTresParam_e_ex773_ParamReverseFlareShot ReverseFlareShotParameter;
    
    UTresParam_e_ex773_Common();
};

