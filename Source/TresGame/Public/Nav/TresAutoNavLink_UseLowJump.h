#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavFilters/NavigationQueryFilter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavigationQueryFilter -FallbackName=NavigationQueryFilter
#include "TresAutoNavLink_UseLowJump.generated.h"

UCLASS()
class UTresAutoNavLink_UseLowJump : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UTresAutoNavLink_UseLowJump();
};

