#pragma once
#include "CoreMinimal.h"
#include "TresDashParams_e_ex107.generated.h"

USTRUCT(BlueprintType)
struct FTresDashParams_e_ex107 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float MaxMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float Acceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float Decelaration;
    
    UPROPERTY(EditDefaultsOnly)
    float MinMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingAngleXY;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingAngleZ;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bDashLimit: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float LimitDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float LimitTime;
    
    TRESGAME_API FTresDashParams_e_ex107();
};

