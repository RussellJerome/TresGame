#pragma once
#include "CoreMinimal.h"
#include "TresShotParam_e_ex701_DarkCloud.generated.h"

USTRUCT(BlueprintType)
struct FTresShotParam_e_ex701_DarkCloud {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float Height;
    
    UPROPERTY(EditDefaultsOnly)
    float SideOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float FrontOffset;
    
    TRESGAME_API FTresShotParam_e_ex701_DarkCloud();
};

