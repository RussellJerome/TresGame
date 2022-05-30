#pragma once
#include "CoreMinimal.h"
#include "EEX355_SwingTractionDir.h"
#include "EEX355_MoveVelocityType.h"
#include "UObject/NoExportTypes.h"
#include "EX355_SwingTractionVerticalInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX355_SwingTractionVerticalInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 iNotifyID;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TEnumAsByte<EEX355_SwingTractionDir> TractionDir;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector vTractionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float fMaxVerticalTractionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TEnumAsByte<EEX355_MoveVelocityType> TractionVelocityType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float fTractionInterpExp;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bNoTractionOnLand;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float fHeightFromLand;
    
    TRESGAME_API FEX355_SwingTractionVerticalInfo();
};

