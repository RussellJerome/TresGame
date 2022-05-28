#pragma once
#include "CoreMinimal.h"
#include "TresEnemyBigDealMoveParam_e_ex356.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyBigDealMoveParam_e_ex356 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float CardRevolveAcceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float CardRevolveDeceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float CardRotationAcceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float CardRotationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float CardRotationDeceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float AllCardRotationDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float EndCardRevolveAcceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float EndCardRevolveAccelerationTime;
    
    UPROPERTY(EditDefaultsOnly)
    float EndCardRevolveMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float CardLocationInterpTime;
    
    TRESGAME_API FTresEnemyBigDealMoveParam_e_ex356();
};

