#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresDarkBarrageParam_e_ex352.generated.h"

class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FTresDarkBarrageParam_e_ex352 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bAimTarget;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_DarkBarrageProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> AttackIntervals;
    
    UPROPERTY(EditDefaultsOnly)
    float StartAttackAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float EndAttackAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float InitialSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float Acceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxSpeed;
    
    TRESGAME_API FTresDarkBarrageParam_e_ex352();
};

