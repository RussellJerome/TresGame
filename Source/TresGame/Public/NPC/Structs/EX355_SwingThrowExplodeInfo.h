#pragma once
#include "CoreMinimal.h"
#include "EX355_SwingThrowExplodeInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX355_SwingThrowExplodeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bExplodeOnHeight;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float fExplodeHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bExplodeOnHorizontalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float fExplodeHorizontalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bExplodeOnTime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float fExplodeTime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float fExplodeMinTime;
    
    UPROPERTY()
    bool bExplodeMinTime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float fExplodeMinDistance;
    
    UPROPERTY()
    bool bExplodeMinDistance;
    
    TRESGAME_API FEX355_SwingThrowExplodeInfo();
};

