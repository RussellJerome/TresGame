#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyEx353ThornBeamProjectileInfo.h"
#include "TresEnemyEx353ThornBeamBeforeHitInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx353ThornBeamBeforeHitInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString Comment;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bIsSpawnThornSpaceEffect: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bIsBaseCamera: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bIsKeepDistance: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float LifeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float BaseCameraRotateYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float TargetDistXY;
    
    UPROPERTY(EditDefaultsOnly)
    float TargetDistZ;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bIsAttach: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FName AttachBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    FVector Offset;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemyEx353ThornBeamProjectileInfo> ThornBeamProjectileInfo;
    
    TRESGAME_API FTresEnemyEx353ThornBeamBeforeHitInfo();
};

