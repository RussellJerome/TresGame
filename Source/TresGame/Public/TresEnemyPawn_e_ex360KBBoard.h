#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresPawnBase.h"
#include "TresEnemyPawn_e_ex360KBBoard.generated.h"

class ATresEnemyPawn_e_ex360;
class UParticleSystem;
class ATresProjectileBase;
class UParticleSystemComponent;
class AActor;

UCLASS()
class ATresEnemyPawn_e_ex360KBBoard : public ATresPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_KBBoardPopParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_KBBoardParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_KBBoardShootProjData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NotChangeDirDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Speed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ARoundModeSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ARoundModeAddSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ARoundModeSpeedMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RideTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PopDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PopAddRise;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NotRotTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PopOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PopTargetOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_KBFadeOutTime;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_HitParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_KBShootTargetOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_KBShootHormingDist;
    
private:
    UPROPERTY(Export)
    UParticleSystemComponent* m_KBBoardParticle;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_KBBoardPopParticle;
    
    UPROPERTY()
    ATresEnemyPawn_e_ex360* m_MyParent;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> m_TargetActor;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_HitParticle;
    
public:
    ATresEnemyPawn_e_ex360KBBoard();
};

