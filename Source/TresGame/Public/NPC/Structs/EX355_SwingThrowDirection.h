#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EX355_SwingThrowExplodeInfo.h"
#include "EX355_SwingThrowDirection.generated.h"

USTRUCT(BlueprintType)
struct FEX355_SwingThrowDirection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bAimTarget;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector vAimTargetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float fMaxPitch;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float fMinPitch;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FRotator rAimRot;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FEX355_SwingThrowExplodeInfo SwingThrowExplodeLandInfo;
    
    TRESGAME_API FEX355_SwingThrowDirection();
};

