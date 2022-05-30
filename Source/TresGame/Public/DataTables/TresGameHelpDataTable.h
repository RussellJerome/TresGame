#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresGameHelp.h"
#include "ETresGameHelpCategory.h"
#include "ETresUIDataVersion.h"
#include "GameHelpItemPage.h"
#include "TresGameHelpDataTable.generated.h"

USTRUCT()
struct FTresGameHelpDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresGameHelp ID;
    
    UPROPERTY(EditDefaultsOnly)
    ETresGameHelpCategory Category;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FGameHelpItemPage> Pages;
    
    UPROPERTY(EditDefaultsOnly)
    int32 UIPriority;
    
    UPROPERTY(EditDefaultsOnly)
    FString TitleNamespaceKey;
    
    UPROPERTY(EditDefaultsOnly)
    ETresUIDataVersion Version;
    
    UPROPERTY(EditDefaultsOnly)
    bool WinImageUseKeyboardMouse;
    
    UPROPERTY(EditDefaultsOnly)
    bool WinKeyboardHighlights;
    
    TRESGAME_API FTresGameHelpDataTable();
};

