#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresNpcPawnBase.h"
#include "TresNpcPawn_n_ex006.generated.h"

class ATresAccompanyPawnBase;

UCLASS()
class ATresNpcPawn_n_ex006 : public ATresNpcPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresAccompanyPawnBase> m_FRBlizzagaBoardBP;
    
    ATresNpcPawn_n_ex006();
};

