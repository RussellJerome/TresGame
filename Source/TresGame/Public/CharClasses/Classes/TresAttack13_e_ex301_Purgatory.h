#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack13_e_ex301_Purgatory.generated.h"

class ATresEnemyPawn_e_ex301_PurgatoryDamageBox;
class UParticleSystem;

UCLASS()
class UTresAttack13_e_ex301_Purgatory : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresEnemyPawn_e_ex301_PurgatoryDamageBox> m_DamageBoxProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ParticleData1;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ParticleData2;
    
    UPROPERTY(EditAnywhere)
    float m_Effect1WaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_Effect2WaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_PopTime;
    
    UPROPERTY(EditAnywhere)
    bool m_IsEnd;
    
    UPROPERTY(EditAnywhere)
    FVector m_WarpPos;
    
    UPROPERTY(EditAnywhere)
    float m_Scale;
    
    UTresAttack13_e_ex301_Purgatory();
};

