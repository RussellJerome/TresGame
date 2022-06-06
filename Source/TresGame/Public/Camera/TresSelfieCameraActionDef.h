#pragma once
#include "CoreMinimal.h"
#include "TresSelfieCameraActionDef.generated.h"

USTRUCT(BlueprintType)
struct FTresSelfieCameraActionDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RewardIndex;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BattlePortalClearCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 LoopActionFlag: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 DefaultActionFlag: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName MotionName_In;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName MotionName_Loop;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName MotionName_Out;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName MotionNameUnderwater_In;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName MotionNameUnderwater_Loop;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName MotionNameUnderwater_Out;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString RewardStr;
    
    TRESGAME_API FTresSelfieCameraActionDef();
};

