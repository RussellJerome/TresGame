#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "TresStaticEQSItemActorSettings.generated.h"

UCLASS(Config=EditorPerProjectUserSettings)
class TRESGAME_API UTresStaticEQSItemActorSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FStringAssetReference QueryTemplate;
    
    UPROPERTY(Config, EditAnywhere)
    float VoxelSize;
    
    UPROPERTY(Config, EditAnywhere)
    FName TagName;
    
    UPROPERTY(Config, EditAnywhere)
    FString SpawnLevelName;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAllRebuild;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float MinimumVoxelizeSize;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float ItemTraceSize;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float ItemOverlapSize;
    
    UTresStaticEQSItemActorSettings();
};

