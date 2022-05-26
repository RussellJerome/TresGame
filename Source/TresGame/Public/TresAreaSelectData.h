#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresWorldCode.h"
#include "TresUIGameFlagData.h"
#include "TresAreaSelectData.generated.h"

class UTexture;

USTRUCT()
struct FTresAreaSelectData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresWorldCode> WorldCode;
    
    UPROPERTY(EditDefaultsOnly)
    FName SavePointName;
    
    UPROPERTY(EditDefaultsOnly)
    FName MapName;
    
    UPROPERTY(EditDefaultsOnly)
    FString MapNameNamespaceKey;
    
    UPROPERTY(EditDefaultsOnly)
    FString AreaNameNamespaceKey;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture* IconAsset;
    
    UPROPERTY(EditDefaultsOnly)
    int32 UIPriority;
    
    UPROPERTY(EditDefaultsOnly)
    FTresUIGameFlagData EnableGameFlag;
    
    UPROPERTY(EditDefaultsOnly)
    FTresUIGameFlagData ForceOpenGameFlag;
    
    UPROPERTY(EditDefaultsOnly)
    FTresUIGameFlagData DisableGameFlag;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresUIGameFlagData> RestrictionStartGameFlag;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresUIGameFlagData> RestrictionEndGameFlag;
    
    UPROPERTY(EditDefaultsOnly)
    bool EnableLanding;
    
    TRESGAME_API FTresAreaSelectData();
};

