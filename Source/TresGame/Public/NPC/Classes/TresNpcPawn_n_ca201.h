#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresNpcPawnBase.h"
#include "TresNpcPawn_n_ca201.generated.h"

class ATresAccompanyPawnBase;

UCLASS()
class ATresNpcPawn_n_ca201 : public ATresNpcPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresAccompanyPawnBase> m_FRJackSpinBP;
    
private:
    UPROPERTY()
    bool m_IsLinkMode;
    
public:
    ATresNpcPawn_n_ca201();
};

