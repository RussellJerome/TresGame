#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectileBase.h"
#include "TresEnemyEx771_FlareAttractParam.h"
#include "TresProjectile_e_ex771_FlareOmen.generated.h"

class ATresActor_e_ex771_Attract;

UCLASS(Abstract)
class ATresProjectile_e_ex771_FlareOmen : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTresEnemyEx771_FlareAttractParam> m_AttractParamArray;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresActor_e_ex771_Attract> m_pro_AttractClass;
    
public:
    ATresProjectile_e_ex771_FlareOmen();
};

