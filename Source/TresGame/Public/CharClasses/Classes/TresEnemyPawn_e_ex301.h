#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyXIIIPawnBase.h"
#include "Engine/EngineTypes.h"
#include "TresEnemyPawn_e_ex301.generated.h"

class UTresStateBase;
class ATresProjectileBase;
class ATresEnemyPawn_e_ex301Light;
class UParticleSystem;
class UPrimitiveComponent;
class USphereComponent;
class ATresEnemyPawn_e_ex301;
class ATresCharPawnBase;
class ATresEnemyPawn_e_ex301_PurgatoryDamageBox;
class UParticleSystemComponent;
class ATresMapEffectActor;
class AActor;

UCLASS()
class ATresEnemyPawn_e_ex301 : public ATresEnemyXIIIPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float m_LightPower;
    
    UPROPERTY(EditAnywhere)
    float m_AspirStartTime;
    
    UPROPERTY(EditAnywhere)
    float m_AspirIntervalTime;
    
    UPROPERTY(EditAnywhere)
    float m_AspirHP;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEnemyPawn_e_ex301Light> m_Light;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEnemyXIIIPawnBase> m_Avatar;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_PhaseOneEndHitPoint;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_PhaseHitPoint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_SwordWaveProjectile;
    
    UPROPERTY(EditAnywhere)
    float m_BattleEndLightPower;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_MagicCircleEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_NormalMagicCircleEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_WarpEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_WarpOutEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_WarpParticleEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SwordParticleEffData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UParticleSystem* m_RadialParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AnotherWorldMagicCircleEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_GoatMagicCircleEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ChangeWorldFlashData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BigPillarProjData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AscensionPlayerEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CenterNormalMagicCircleEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_VacuumParticleEffData;
    
    UPROPERTY(EditAnywhere)
    float m_KHrtMaxSizeTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_AscensionAttack;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_CallXIIIAttack;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_XIIIAttack;
    
    UPROPERTY(EditAnywhere)
    FVector m_DescensionPos;
    
    UPROPERTY(EditAnywhere)
    float m_BattleeAreaRange;
    
    UPROPERTY(EditAnywhere)
    float m_VacuumLightParticleKeepTime;
    
    UPROPERTY(EditAnywhere)
    float m_VacuumLightParticleEndTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_CenterPillarProjectile;
    
    UPROPERTY(EditAnywhere)
    float m_CenterPillarAttackRange;
    
    UPROPERTY(EditAnywhere)
    float m_CenterPillarAttackWaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_CenterPillarAttackIntervalTime;
    
    UPROPERTY(EditAnywhere)
    float m_AscensionEndWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DangerParticleData;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USphereComponent* MyAspirComponent;
    
    UPROPERTY()
    ATresEnemyPawn_e_ex301Light* m_AscensionLight;
    
    UPROPERTY()
    ATresEnemyPawn_e_ex301* m_pAvaterPawn[13];
    
    UPROPERTY()
    ATresCharPawnBase* m_AttackedChar;
    
    UPROPERTY()
    ATresEnemyPawn_e_ex301_PurgatoryDamageBox* m_PurgatoryDamageBox;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_MagicCircle;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_NormalMagicCircle;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_AscensionPlayerEff;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_HartEff;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_CenterNormalMagicCircle;
    
    UPROPERTY()
    ATresMapEffectActor* m_AnotherWorld;
    
    UPROPERTY()
    AActor* Actor;
    
    UPROPERTY()
    ATresProjectileBase* m_BigPillarProj;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_RadialParticle;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_GoatMagicCircle;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_VacuumParticleEff;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_SwordParticleEff;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_AnotherWorldMagicCircle;
    
    UPROPERTY()
    ATresProjectileBase* m_CheckPillarProj;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_WarpOutEff;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_DangerParticle;
    
public:
    ATresEnemyPawn_e_ex301();
    UFUNCTION()
    void OnPullCollisionEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnPullCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    bool IsSecondHalfBattle();
    
    UFUNCTION(BlueprintCallable)
    bool IsFirstHalfBattle();
    
    UFUNCTION(BlueprintCallable)
    bool IsAvatar();
    
    UFUNCTION(BlueprintCallable)
    bool IsAscensionMode();
    
    UFUNCTION(BlueprintCallable)
    void BP_XIIIAttackStart();
    
    UFUNCTION(BlueprintCallable)
    void BP_SecondBattleStart();
    
    UFUNCTION(BlueprintCallable)
    void BP_SecondBattleFinish();
    
    UFUNCTION(BlueprintCallable)
    void BP_DescensionStart();
    
    UFUNCTION(BlueprintCallable)
    void BP_ChangeGoatMagicCircle();
    
    UFUNCTION(BlueprintCallable)
    void BP_AscensionEnd();
    
    UFUNCTION(BlueprintCallable)
    void BP_AscensionAuraEnable();
    
    UFUNCTION(BlueprintCallable)
    void BP_AscensionAttackStart();
    
    UFUNCTION()
    void BattleEndAscensionMode();
    
};

