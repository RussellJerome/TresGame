#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavFilters/NavigationQueryFilter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavigationQueryFilter -FallbackName=NavigationQueryFilter
#include "TresAutoNavLink_UseDefaultArea.generated.h"

UCLASS()
class UTresAutoNavLink_UseDefaultArea : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UTresAutoNavLink_UseDefaultArea();
};

