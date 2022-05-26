#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresWorldCode.h"
#include "ETresUIValueCompareType.h"
#include "ETresUIDataVersion.h"
#include "TresUILoadingScreenData.generated.h"

USTRUCT()
struct FTresUILoadingScreenData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName DefinitionName;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ETresWorldCode> WorldCode;
    
    UPROPERTY(VisibleAnywhere)
    FName NeedFlagName;
    
    UPROPERTY(EditDefaultsOnly)
    ETresUIValueCompareType NeedCmpType;
    
    UPROPERTY(VisibleAnywhere)
    FName NeedFlagLabelName;
    
    UPROPERTY(VisibleAnywhere)
    FName DisableFlagName;
    
    UPROPERTY(EditDefaultsOnly)
    ETresUIValueCompareType DisableCmpType;
    
    UPROPERTY(VisibleAnywhere)
    FName DisableFlagLabelName;
    
    UPROPERTY(VisibleAnywhere)
    int32 LotValue;
    
    UPROPERTY(VisibleAnywhere)
    bool ForceAtSuccess;
    
    UPROPERTY(EditDefaultsOnly)
    ETresUIDataVersion Version;
    
    TRESGAME_API FTresUILoadingScreenData();
};

