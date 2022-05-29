#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavFilters/NavigationQueryFilter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavigationQueryFilter -FallbackName=NavigationQueryFilter
#include "TresFNPCNavigationQueryFilter.generated.h"

UCLASS()
class UTresFNPCNavigationQueryFilter : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UTresFNPCNavigationQueryFilter();
};

