#pragma once
#include "CoreMinimal.h"
#include "TresUIGameFlagText.h"
#include "Engine/DataTable.h"
#include "ETresWorldCode.h"
#include "ETresUIDataVersion.h"
#include "TresUIGameFlagActor.h"
#include "ESqexCPPKHSWorldType.h"
#include "ETresItemDefKeyItem.h"
#include "TresDictionaryCharacterData.generated.h"

USTRUCT()
struct FTresDictionaryCharacterData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresWorldCode> WorldCode;
    
    UPROPERTY(EditDefaultsOnly)
    int32 UIPriority;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresUIGameFlagText> Texts;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresUIGameFlagActor> Actors;
    
    UPROPERTY(EditDefaultsOnly)
    FString NameTextID;
    
    UPROPERTY(EditDefaultsOnly)
    FString SourceTextID;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefKeyItem KeyItemID;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ESqexCPPKHSWorldType> KHSWorldType;
    
    UPROPERTY(EditDefaultsOnly)
    ETresUIDataVersion Version;
    
    TRESGAME_API FTresDictionaryCharacterData();
};

