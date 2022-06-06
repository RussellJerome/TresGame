#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavFilters/NavigationQueryFilter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavigationQueryFilter -FallbackName=NavigationQueryFilter
#include "TresAutoNavLink_UseJump.generated.h"

UCLASS()
class UTresAutoNavLink_UseJump : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UTresAutoNavLink_UseJump();
};

