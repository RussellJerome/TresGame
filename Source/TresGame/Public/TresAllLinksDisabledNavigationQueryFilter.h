#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavFilters/NavigationQueryFilter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavigationQueryFilter -FallbackName=NavigationQueryFilter
#include "TresAllLinksDisabledNavigationQueryFilter.generated.h"

UCLASS()
class UTresAllLinksDisabledNavigationQueryFilter : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UTresAllLinksDisabledNavigationQueryFilter();
};

