#pragma once
#include "CoreMinimal.h"
#include "ETresNavLinkSegment_e_ex035.h"
#include "TresNavLinkSet_e_ex035.generated.h"

class ANavLinkProxy;

USTRUCT(BlueprintType)
struct FTresNavLinkSet_e_ex035 {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    ANavLinkProxy* NavLinkProxy;
    
    UPROPERTY(EditInstanceOnly)
    TEnumAsByte<ETresNavLinkSegment_e_ex035> NavLinkSegment;
    
    TRESGAME_API FTresNavLinkSet_e_ex035();
};

