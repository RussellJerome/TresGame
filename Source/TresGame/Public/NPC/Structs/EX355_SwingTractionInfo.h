#pragma once
#include "CoreMinimal.h"
#include "EEX355_SwingTractionHorizontalDir.h"
#include "EEX355_MoveVelocityType.h"
#include "UObject/NoExportTypes.h"
#include "EX355_SwingTractionInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX355_SwingTractionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 iNotifyID;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TEnumAsByte<EEX355_SwingTractionHorizontalDir> TractionDir;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector vTractionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bPawnRotAsDir;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float fMaxHorizontalTractionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TEnumAsByte<EEX355_MoveVelocityType> TractionVelocityType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float fTractionInterpExp;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bNoTractionOnLand;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float fHeightFromLand;
    
    TRESGAME_API FEX355_SwingTractionInfo();
};

