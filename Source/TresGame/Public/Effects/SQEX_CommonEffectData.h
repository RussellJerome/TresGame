#pragma once
#include "CoreMinimal.h"
#include "SQEX_CommonEffectData.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FSQEX_CommonEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName CommonKey;
    
    UPROPERTY(EditAnywhere)
    int32 GroupID;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* CommonEffect;
    
    TRESGAME_API FSQEX_CommonEffectData();
};

