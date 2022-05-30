#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHologramActorCategory.h"
#include "TresPhotoHologramCameraEffectTable.generated.h"

class UTexture;

USTRUCT()
struct FTresPhotoHologramCameraEffectTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString m_Comment;
    
    UPROPERTY(EditDefaultsOnly)
    EHologramActorCategory m_Category;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_EffectNameNamespaceKey;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture* m_IconAsset;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_UIPriority;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_MapSetId;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NewMarkIndex;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_EffectGroupID;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_IsSepiaType;
    
    TRESGAME_API FTresPhotoHologramCameraEffectTable();
};

