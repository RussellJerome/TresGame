#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "TresUIMobileDictionaryCharacterCategory.h"
#include "UObject/NoExportTypes.h"
#include "TresUIMobileDictionaryEnemyCategory.h"
#include "TresUIMobileDictionaryDataAsset.generated.h"

class UDataTable;
class UTextureRenderTarget2D;
class ATresUIActorBG;

UCLASS()
class UTresUIMobileDictionaryDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UTextureRenderTarget2D* RenderTargetTexture;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresUIActorBG> UIActorBG;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* CharacterDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresUIMobileDictionaryCharacterCategory> CharacterCategories;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor CharacterBGColor;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* EnemyDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresUIMobileDictionaryEnemyCategory> EnemyCategories;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor EnemyBGColor;
    
    UTresUIMobileDictionaryDataAsset();
};

