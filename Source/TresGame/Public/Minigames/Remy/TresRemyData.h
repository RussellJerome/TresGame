#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresRemyData.generated.h"

class UDataTable;
class UTextureRenderTarget2D;

UCLASS(BlueprintType)
class UTresRemyData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UDataTable* RestaurantRankDataRef;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UDataTable* UnlockDishLevelDataRef;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UDataTable* RewardDataRef;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UDataTable* RecipeDataRef;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<UDataTable*> CookingGameDataRef;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<UDataTable*> CookingGameCharismaticChefDataRef;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* AnimationDataRef;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ResultAnimationDataRef;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* CameraWorkDataRef;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* PawnDataRef;
    
    UPROPERTY(EditDefaultsOnly)
    UTextureRenderTarget2D* RemyModelRenderTargetTexture;
    
public:
    UTresRemyData();
};

