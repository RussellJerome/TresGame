#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresUIGameProgressSection.h"
#include "ETresUIDataVersion.h"
#include "TresUISaveMenuRestrictionData.generated.h"

USTRUCT()
struct FTresUISaveMenuRestrictionData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName SavePointName;
    
    UPROPERTY(EditDefaultsOnly)
    FTresUIGameProgressSection RestrictionAreaSelectSection;
    
    UPROPERTY(EditDefaultsOnly)
    FTresUIGameProgressSection RestrictionWorldMapSection;
    
    UPROPERTY(EditDefaultsOnly)
    FTresUIGameProgressSection RestrictionRestaurantSection;
    
    UPROPERTY(EditDefaultsOnly)
    ETresUIDataVersion Version;
    
    TRESGAME_API FTresUISaveMenuRestrictionData();
};

