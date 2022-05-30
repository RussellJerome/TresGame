#pragma once
#include "CoreMinimal.h"
#include "ETresNavLinkSegment_Common.h"
#include "TresNavLinkSet_Common.generated.h"

class ANavLinkProxy;

USTRUCT(BlueprintType)
struct FTresNavLinkSet_Common {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    ANavLinkProxy* NavLinkProxy;
    
    UPROPERTY(EditInstanceOnly)
    TEnumAsByte<ETresNavLinkSegment_Common> NavLinkSegment;
    
    TRESGAME_API FTresNavLinkSet_Common();
};

