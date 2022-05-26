#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyEx771_BlowParam.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex771_FlareTornadoBlow.generated.h"

class UParticleSystem;
class ATresActor_e_ex771_Attract;

UCLASS(Abstract)
class ATresProjectile_e_ex771_FlareTornadoBlow : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTresEnemyEx771_BlowParam> m_BlowParamArray;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_BlowEffData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresActor_e_ex771_Attract> m_pro_BlowClass;
    
    ATresProjectile_e_ex771_FlareTornadoBlow();
};

