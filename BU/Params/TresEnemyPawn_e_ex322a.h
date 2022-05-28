#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex322a.generated.h"

class ATresProjectileBase;
class USQEX_ParticleAttachDataAsset;
class UTresActionDefinitionBase;

UCLASS()
class ATresEnemyPawn_e_ex322a : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_EffectDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_AuraEffectDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UTresActionDefinitionBase>> m_ActionClassList;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_MagicShotProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_MagicShotOverrideAttackDataIDName;
    
public:
    ATresEnemyPawn_e_ex322a();
};

