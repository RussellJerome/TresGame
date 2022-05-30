#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataTable.h"
#include "EHologramActorCategory.h"
#include "TresPhotoHologramDataTable.generated.h"

class ATresPhotoHologramActor;
class UTexture;

USTRUCT()
struct FTresPhotoHologramDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_AssetName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_Index;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_Comment;
    
    UPROPERTY(EditDefaultsOnly)
    EHologramActorCategory m_Category;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_IdentifyName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_MaxCount;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_CharaNameNamespaceKey;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture* m_IconAsset;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_UIPriority;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_UICharaInfoPage;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_UICharaInfoSlotNo;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AreaCharaInfoMapSet;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NewMarkIndex;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RootCollisionSize;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_MapSetId;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FName m_UnlockGameFlagName;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FName m_UnlockGameFlagLabelName;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    int32 m_SaveIndex;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresPhotoHologramActor> m_HologramAsset;
    
    TRESGAME_API FTresPhotoHologramDataTable();
};

