#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BreakSlashNumTypes_e_ex781.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack11_e_ex781_BreakSlash.generated.h"

class ATresProjectileBase;
class UEnvQuery;
class UParticleSystem;
class UTresActionDefinitionBase;

UCLASS()
class UTresAttack11_e_ex781_BreakSlash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<BreakSlashNumTypes_e_ex781> m_Type;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_DontWarp;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_DoCounter;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetDist;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_SwordSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_WarpEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CounterWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_EffectId;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_PreAttackEffectID;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_GrandSlashParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresActionDefinitionBase> m_BackJumpState;
    
    UTresAttack11_e_ex781_BreakSlash();
};

