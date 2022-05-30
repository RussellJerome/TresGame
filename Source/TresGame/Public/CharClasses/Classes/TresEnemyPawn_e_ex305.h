#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyXIIIPawnBase.h"
#include "TresEnemyPawn_e_ex305.generated.h"

class ATresProjectile_e_ex305_WarpArm;
class USoundBase;
class ATresEnemyPawn_e_ex313;
class UParticleSystem;
class UParticleSystemComponent;
class ATresProjectileBase;
class ATresEnemyXIIIAManager;

UCLASS()
class ATresEnemyPawn_e_ex305 : public ATresEnemyXIIIPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool m_bFlyMode;
    
    UPROPERTY()
    bool m_bAura;
    
    UPROPERTY()
    ATresEnemyPawn_e_ex313* e_ex313Pawn;
    
    UPROPERTY()
    ATresEnemyXIIIPawnBase* e_ex316Pawn;
    
    UPROPERTY(EditAnywhere)
    bool m_pro_PartnerDead;
    
    UPROPERTY(EditAnywhere)
    bool m_pro_TestPartnerDead;
    
    UPROPERTY(EditAnywhere)
    float m_pro_BattleTime;
    
    UPROPERTY(EditAnywhere)
    int32 m_pro_BattleEndHitPointPer;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_ArrowRainSkyEffData;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_ArrowRainSkyEff;
    
    UPROPERTY()
    ATresProjectileBase* m_pArrowRain;
    
    UPROPERTY()
    ATresProjectile_e_ex305_WarpArm* m_WarpArmLeft;
    
    UPROPERTY()
    ATresProjectile_e_ex305_WarpArm* m_WarpArmRight;
    
    UPROPERTY(EditAnywhere)
    int32 m_pro_MagazineNum;
    
    UPROPERTY(EditAnywhere)
    int32 m_pro_ClusterShotMagazine;
    
    UPROPERTY(EditAnywhere)
    int32 m_pro_ArrowRainMagazine;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_ClusterShotVoiceDataArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_ClusterShotCoopVoiceDataArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_RevengeVoiceDataArray;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_VoiceSocketName;
    
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEnemyXIIIAManager> m_pro_XIIIAManagerClass;
    
protected:
    UPROPERTY()
    ATresEnemyXIIIAManager* m_XIIIAManager;
    
public:
    ATresEnemyPawn_e_ex305();
    UFUNCTION(BlueprintCallable)
    bool IsZeroMagazine();
    
    UFUNCTION(BlueprintCallable)
    bool IsWarpShotMagazine();
    
    UFUNCTION(BlueprintCallable)
    bool IsReflectDamageShotMagazine();
    
    UFUNCTION(BlueprintCallable)
    bool IsPartnerDead();
    
    UFUNCTION(BlueprintCallable)
    bool IsNormalShotMagazine();
    
    UFUNCTION(Exec)
    bool IsDuringWalkCooldown();
    
    UFUNCTION(Exec)
    bool IsDuringArrowRainCooldown();
    
    UFUNCTION(BlueprintCallable)
    bool IsClusterShotMagazine();
    
    UFUNCTION(BlueprintCallable)
    bool IsArrowRainMagazine();
    
    UFUNCTION(Exec)
    bool CanUseArrowRain();
    
};

