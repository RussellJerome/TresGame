#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavFilters/NavigationQueryFilter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavigationQueryFilter -FallbackName=NavigationQueryFilter
#include "TresNavigationQueryFilter.generated.h"

UCLASS()
class UTresNavigationQueryFilter : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UTresNavigationQueryFilter();
};

