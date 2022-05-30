#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresWorldCode.h"
#include "TresPhotoHologramMapData.generated.h"

class UTexture;

USTRUCT()
struct FTresPhotoHologramMapData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString m_Comment;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Index;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresWorldCode> WorldCode;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture* WorldIconAsset;
    
    UPROPERTY(EditDefaultsOnly)
    FName PlayerStartLabelName;
    
    UPROPERTY(EditDefaultsOnly)
    FName MapName;
    
    UPROPERTY(EditDefaultsOnly)
    FString MapNameNamespaceKey;
    
    UPROPERTY(EditDefaultsOnly)
    FString AreaNameNamespaceKey;
    
    UPROPERTY(EditDefaultsOnly)
    int32 AreaIndex;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture* IconAsset;
    
    UPROPERTY(EditDefaultsOnly)
    int32 UIPriority;
    
    UPROPERTY(EditDefaultsOnly)
    FName ExtraLoadingScreenDataName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NewMarkIndex;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FName m_UnlockGameFlagName;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FName m_UnlockGameFlagLabelName;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    int32 m_SaveIndex;
    
    UPROPERTY(EditDefaultsOnly)
    int32 CharaNumMax;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ObjectNumMax;
    
    UPROPERTY(EditDefaultsOnly)
    bool IsBonamikIgnoreGroundCollision;
    
    TRESGAME_API FTresPhotoHologramMapData();
};

