#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresLevelSettingData.generated.h"

UCLASS(BlueprintType)
class TRESGAME_API UTresLevelSettingData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AsyncLoadingTimeLimit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 AsyncLoadingUseFullTimeLimit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PriorityAsyncLoadingExtraTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LevelStreamingActorsUpdateTimeLimit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 LevelStreamingComponentsRegistrationGranularity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 LevelStreamingComponentsUnregistrationGranularity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LevelStreamingUnregisterComponentsTimeLimit;
    
public:
    UTresLevelSettingData();
};

