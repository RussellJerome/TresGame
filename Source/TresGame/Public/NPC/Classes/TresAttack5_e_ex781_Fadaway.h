#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack5_e_ex781_Fadaway.generated.h"

class UParticleSystem;
class ATresProjectileSkeletalMeshBase;
class UEnvQuery;

UCLASS()
class UTresAttack5_e_ex781_Fadaway : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileSkeletalMeshBase> m_Sword;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SwordOffsetHight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SwordMoveGoalDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SwordAtk2MoveGoalDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SwordAtk3MoveGoalDist;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_PopParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_InvisibleParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SwordMotionStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpDist;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_WarpEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EndWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_EndWarp;
    
private:
    UPROPERTY()
    ATresProjectileSkeletalMeshBase* m_ThrowSword;
    
public:
    UTresAttack5_e_ex781_Fadaway();
};

