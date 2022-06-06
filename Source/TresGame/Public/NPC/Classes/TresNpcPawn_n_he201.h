#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresNpcPawnBase.h"
#include "TresNpcPawn_n_he201.generated.h"

class ATresAccompanyPawnBase;

UCLASS()
class ATresNpcPawn_n_he201 : public ATresNpcPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresAccompanyPawnBase> m_FRPowerStrikeBP;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_fIntervalTime;
    
public:
    ATresNpcPawn_n_he201();
};

