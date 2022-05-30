#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex367_Ascension.generated.h"

class ATresEnemy_e_ex367_AscensionPillarProjectileBase;
class UParticleSystem;
class ATresEnemyPawn_e_ex367;
class ATresProjectileBase;
class UParticleSystemComponent;
class ATresCharPawnBase;

UCLASS()
class ATresEnemyPawn_e_ex367_Ascension : public ATresPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_MagicCircleEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_NormalMagicCircleEffData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UParticleSystem* m_RadialParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AnotherWorldMagicCircleEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_GoatMagicCircleEffData;
    
    UPROPERTY(EditAnywhere)
    float m_GoatMagicCircleWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ChangeWorldFlashData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UParticleSystem* m_BigPillarrParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CenterNormalMagicCircleEffData;
    
    UPROPERTY(EditAnywhere)
    float m_BattleeAreaRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_CenterPillarProjectile;
    
    UPROPERTY(EditAnywhere)
    float m_CenterPillarAttackRange;
    
    UPROPERTY(EditAnywhere)
    float m_CenterPillarAttackWaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_CenterPillarAttackIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DangerParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_MapCenterPos;
    
    UPROPERTY(EditAnywhere)
    float m_RadialEffectOffsetZ;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSubclassOf<ATresProjectileBase>> m_PillarProjectileList;
    
    UPROPERTY(EditAnywhere)
    float m_PillarPopTime;
    
    UPROPERTY(EditAnywhere)
    float m_PillarPopEndTime;
    
    UPROPERTY(EditAnywhere)
    float m_PillarMoveTime;
    
    UPROPERTY(EditAnywhere)
    float m_PillarEndWaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_PillarOffset;
    
    UPROPERTY(EditAnywhere)
    float m_PillarRotOffset;
    
    UPROPERTY(EditAnywhere)
    float m_PillarDist;
    
    UPROPERTY(EditAnywhere)
    float m_PillarAtk3P1DistanceSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_PillarAtk3P3WaitTime;
    
private:
    UPROPERTY(Export)
    UParticleSystemComponent* m_NormalMagicCircleEmblem;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_MagicCircle;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_NormalMagicCircle;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_BigPillarrParticle;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_GoatMagicCircle;
    
    UPROPERTY()
    ATresEnemyPawn_e_ex367* m_MyParent;
    
    UPROPERTY()
    ATresCharPawnBase* m_MyTarget;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_RadialParticle;
    
    UPROPERTY()
    TArray<ATresEnemy_e_ex367_AscensionPillarProjectileBase*> m_PillarList;
    
public:
    ATresEnemyPawn_e_ex367_Ascension();
};

