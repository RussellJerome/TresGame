#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresParam_e_ex773_Eclipse13.generated.h"

class UCurveFloat;
class UTres_e_ex773_Eclipse13_WaveArrayAsset;

UCLASS()
class UTresParam_e_ex773_Eclipse13 : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UTres_e_ex773_Eclipse13_WaveArrayAsset* pShellMoveArrayAsset;
    
    UPROPERTY(EditDefaultsOnly)
    float Shell_SizeMin;
    
    UPROPERTY(EditDefaultsOnly)
    float Shell_SizeMax;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* Shell_SizeCurve;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UCurveFloat*> Exp_CurveFloatArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> Exp_ScaleArray;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Exp_MaxHitCount;
    
    UTresParam_e_ex773_Eclipse13();
};

