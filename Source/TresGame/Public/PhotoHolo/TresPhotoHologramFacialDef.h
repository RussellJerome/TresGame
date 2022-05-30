#pragma once
#include "CoreMinimal.h"
#include "TresPhotoHologramFacialDef.generated.h"

USTRUCT(BlueprintType)
struct FTresPhotoHologramFacialDef {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName FacialType;
    
    UPROPERTY(EditDefaultsOnly)
    FName EyeAnimName;
    
    UPROPERTY(EditDefaultsOnly)
    FName LipAnimName;
    
    UPROPERTY(EditDefaultsOnly)
    FString TextId;
    
    UPROPERTY(EditDefaultsOnly)
    int32 TextIndex;
    
    UPROPERTY(EditDefaultsOnly)
    FName PreEvent;
    
    UPROPERTY(EditDefaultsOnly)
    FName PostEvent;
    
    TRESGAME_API FTresPhotoHologramFacialDef();
};

