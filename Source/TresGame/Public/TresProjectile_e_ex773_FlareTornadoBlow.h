#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyEx773_BlowParam.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex773_FlareTornadoBlow.generated.h"

class UParticleSystem;
class ATresActor_e_ex773_Attract;

UCLASS(Abstract)
class ATresProjectile_e_ex773_FlareTornadoBlow : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTresEnemyEx773_BlowParam> m_BlowParamArray;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_BlowEffData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresActor_e_ex773_Attract> m_pro_BlowClass;
    
    ATresProjectile_e_ex773_FlareTornadoBlow();
};

