#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresNpcPawnBase.h"
#include "TresNpcPawn_n_ts201.generated.h"

UCLASS()
class ATresNpcPawn_n_ts201 : public ATresNpcPawnBase {
    GENERATED_BODY()
public:
    ATresNpcPawn_n_ts201();
    UFUNCTION(BlueprintPure)
    float GetAimOffsetAlpha() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetAimOffset() const;
    
};

