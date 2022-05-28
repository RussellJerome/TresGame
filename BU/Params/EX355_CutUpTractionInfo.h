#pragma once
#include "CoreMinimal.h"
#include "EEX355_MoveVelocityType.h"
#include "UObject/NoExportTypes.h"
#include "EX355_CutUpTractionInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX355_CutUpTractionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 iNotifyID;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector vTractionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float fMaxTractionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TEnumAsByte<EEX355_MoveVelocityType> m_HorizontalVelocityType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fHorizontalVelocityExp;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TEnumAsByte<EEX355_MoveVelocityType> m_VerticalVelocityType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fVerticalVelocityExp;
    
    TRESGAME_API FEX355_CutUpTractionInfo();
};

