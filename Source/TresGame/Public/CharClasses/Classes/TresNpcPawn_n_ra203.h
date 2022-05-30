#pragma once
#include "CoreMinimal.h"
#include "TresNpcPawnBase.h"
#include "TresNpcPawn_n_ra203.generated.h"

class ATresProjectileBase;

UCLASS()
class ATresNpcPawn_n_ra203 : public ATresNpcPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ATresProjectileBase* m_pProjBarrel;
    
public:
    ATresNpcPawn_n_ra203();
};

