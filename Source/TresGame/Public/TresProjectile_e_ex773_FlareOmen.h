#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectileBase.h"
#include "TresEnemyEx773_FlareAttractParam.h"
#include "TresProjectile_e_ex773_FlareOmen.generated.h"

class ATresActor_e_ex773_Attract;

UCLASS(Abstract)
class ATresProjectile_e_ex773_FlareOmen : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTresEnemyEx773_FlareAttractParam> m_AttractParamArray;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresActor_e_ex773_Attract> m_pro_AttractClass;
    
public:
    ATresProjectile_e_ex773_FlareOmen();
};

