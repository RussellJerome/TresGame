#pragma once
#include "CoreMinimal.h"
#include "SQEX_DesignatedAttachData.generated.h"

class USQEX_ParticleAttachDataAsset;

USTRUCT(BlueprintType)
struct FSQEX_DesignatedAttachData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Key;
    
    UPROPERTY(EditAnywhere)
    USQEX_ParticleAttachDataAsset* DesignatedAttachData;
    
    TRESGAME_API FSQEX_DesignatedAttachData();
};

