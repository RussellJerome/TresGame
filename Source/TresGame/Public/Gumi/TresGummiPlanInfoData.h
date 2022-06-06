#pragma once
#include "CoreMinimal.h"
#include "TresGummiPlanInfoData.generated.h"

USTRUCT()
struct FTresGummiPlanInfoData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString m_PlanName;
    
    UPROPERTY()
    int32 m_nNowCost;
    
    UPROPERTY()
    int32 m_nMaxCost;
    
    UPROPERTY()
    int32 m_nNowHP;
    
    UPROPERTY()
    int32 m_nMaxHP;
    
    UPROPERTY()
    int32 m_nNowAttack;
    
    UPROPERTY()
    int32 m_nMaxAttack;
    
    UPROPERTY()
    int32 m_nNowPower;
    
    UPROPERTY()
    int32 m_nMaxPower;
    
    UPROPERTY()
    int32 m_nNowTurn;
    
    UPROPERTY()
    int32 m_nMaxTurn;
    
    UPROPERTY()
    int32 m_nNowRoll;
    
    UPROPERTY()
    int32 m_nMaxRoll;
    
    UPROPERTY()
    int32 m_nNowSpeed;
    
    UPROPERTY()
    int32 m_nMaxSpeed;
    
    UPROPERTY()
    int32 m_nNowAbility;
    
    UPROPERTY()
    int32 m_nMaxAbility;
    
    TRESGAME_API FTresGummiPlanInfoData();
};

