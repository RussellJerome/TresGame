#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESQEX_Bonamik_WindOwnerType.h"
#include "SQEX_BonamikWind.generated.h"

UCLASS(BlueprintType, Transient)
class BONAMIKRT_API USQEX_BonamikWind : public UObject {
    GENERATED_BODY()
public:
    USQEX_BonamikWind();
    UFUNCTION(BlueprintCallable)
    static void EnableByOwnerType(bool bEnable, TEnumAsByte<ESQEX_Bonamik_WindOwnerType> OwnerType);
    
};

