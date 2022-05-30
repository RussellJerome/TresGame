#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "TresNpcPawnBase.h"
#include "TresNpcPawn_n_ts202.generated.h"

class ATresAccompanyPawnBase;

UCLASS()
class ATresNpcPawn_n_ts202 : public ATresNpcPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresAccompanyPawnBase> m_FRWoodyBuzzRocketBP;
    
    ATresNpcPawn_n_ts202();
    UFUNCTION(BlueprintPure)
    float GetAimOffsetAlpha() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetAimOffset() const;
    
};

