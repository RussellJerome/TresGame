#pragma once
#include "CoreMinimal.h"
#include "TresDieParam_e_ex020.generated.h"

USTRUCT(BlueprintType)
struct FTresDieParam_e_ex020 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float InitSpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    float InitSpeedZ;
    
    UPROPERTY(EditDefaultsOnly)
    float GravityStartSpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    float Brake;
    
    UPROPERTY(EditDefaultsOnly)
    float Time;
    
    TRESGAME_API FTresDieParam_e_ex020();
};

