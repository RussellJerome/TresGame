#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresItemDefWeapon.h"
#include "TresPhotoHologramWeaponTable.generated.h"

class UTexture;
class UTresPhotoHologramWeaponAsset;

USTRUCT()
struct FTresPhotoHologramWeaponTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString m_Comment;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_Index;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefWeapon m_WeaponItemID;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_WeaponNameNamespaceKey;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture* m_IconAsset;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_UIPriority;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_MapSetId;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NewMarkIndex;
    
    UPROPERTY(EditDefaultsOnly)
    UTresPhotoHologramWeaponAsset* m_WeaponAsset;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UTresPhotoHologramWeaponAsset*> m_WeaponAssetList;
    
    TRESGAME_API FTresPhotoHologramWeaponTable();
};

