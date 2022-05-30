#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack2_e_he904_Erupt.generated.h"

class ATresProjectileBase;
class AActor;

UCLASS(HideDropdown)
class UTresAttack2_e_he904_Erupt : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxShotCount;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ProjectileSpawnBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vProjectileDir;
    
    UPROPERTY(EditDefaultsOnly)
    float m_vProjectileDirDeviation;
    
protected:
    UPROPERTY()
    TArray<AActor*> m_pAttackIgnoreActorArray;
    
public:
    UTresAttack2_e_he904_Erupt();
};

