#pragma once
#include "CoreMinimal.h"
#include "EEX355_RushAwayTurnType.h"
#include "EEX355_RushAwayTurnDir.h"
#include "EX355_RushAwayTurnInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX355_RushAwayTurnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 iNotifyID;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float fTurnVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TEnumAsByte<EEX355_RushAwayTurnType> m_TurnType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TEnumAsByte<EEX355_RushAwayTurnDir> m_TurnDir;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fTurnOffset;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fTurnDirDivideAngle;
    
    TRESGAME_API FEX355_RushAwayTurnInfo();
};

