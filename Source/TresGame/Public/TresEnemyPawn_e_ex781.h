#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyXIIILPawnBase.h"
#include "ETresStateID.h"
#include "TresEnemyPawn_e_ex781.generated.h"

class ATresGenerator_e_ex781_GunShotMarker;
class UTresActionDefinitionBase;
class UTresStateBase;
class ATresEnemyPawn_e_ex781_TetraBitManager;
class ATresGimmick_e_ex781_Avatar;
class UParticleSystem;
class ATresEnemyPawnBase;
class ATresGimmick_e_ex781_GravitySphere;
class UParticleSystemComponent;
class AActor;
class ATresKHSBlendVolume;
class ATresGenerator_e_ex781_CallGigas;
class ATresCameraForceLockon;

UCLASS()
class ATresEnemyPawn_e_ex781 : public ATresEnemyXIIILPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_OpacityFadeSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_AeroGuardState;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresActionDefinitionBase> m_BackJumpState;
    
    UPROPERTY(EditAnywhere)
    float m_HeartBreakStartDist;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresActionDefinitionBase> m_FallWarpState;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ArmorBreakKnockBackPower;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ArmorBreakKnockBackBrake;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresEnemyPawn_e_ex781_TetraBitManager> m_TetraBitManagerClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresGimmick_e_ex781_Avatar> m_AvatarManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<ATresGenerator_e_ex781_GunShotMarker>> m_PatternChaseBeamClasses;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<ATresEnemyPawnBase>> m_SpawnGigasClasses;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_VacuumParticleEffData;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_VacuumParticleSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AfterImageEffId;
    
    UPROPERTY(EditAnywhere)
    float m_BattleeAreaRange;
    
    UPROPERTY(EditAnywhere)
    float m_BattleeAreaOutSideWarpTime;
    
    UPROPERTY(EditAnywhere)
    float m_BattleeAreaOutSideWarpHigh;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresGimmick_e_ex781_GravitySphere> m_GravitySphereClass;
    
    UPROPERTY(Transient)
    ATresGimmick_e_ex781_GravitySphere* m_pGravitySphere;
    
private:
    UPROPERTY()
    ATresEnemyPawn_e_ex781_TetraBitManager* m_TetraBitManager;
    
    UPROPERTY()
    ATresGimmick_e_ex781_Avatar* m_AvatarManager;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_VacuumParticleEff;
    
    UPROPERTY()
    TArray<AActor*> m_FireList;
    
    UPROPERTY()
    ATresKHSBlendVolume* m_KHSBlendVolume;
    
    UPROPERTY()
    ATresGenerator_e_ex781_GunShotMarker* m_ChaseBeam;
    
    UPROPERTY()
    ATresGenerator_e_ex781_CallGigas* m_CallGigasGenerator;
    
    UPROPERTY(Transient)
    ATresCameraForceLockon* m_ClimaxSceneCamera;
    
public:
    ATresEnemyPawn_e_ex781();
    UFUNCTION(BlueprintCallable)
    void SkipPerformance();
    
    UFUNCTION(BlueprintCallable)
    void SetBBUseMogMedal(bool Hit);
    
    UFUNCTION(BlueprintCallable)
    bool IsVisibleCharacter();
    
    UFUNCTION(BlueprintCallable)
    bool IsTetraCircleMode();
    
    UFUNCTION(BlueprintPure)
    bool IsHVGravityScene() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHVCrimaxScene() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHVCraftScene() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHighVoltageMode() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHeartBreakMode() const;
    
    UFUNCTION(BlueprintPure)
    bool IsGravitySphereSlashWaitMode() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCrimaxCatchPlayer() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAvaterMode();
    
    UFUNCTION(BlueprintCallable)
    bool IsAeroMoveMode();
    
    UFUNCTION(BlueprintCallable)
    bool IsAeroArmorMode();
    
    UFUNCTION(BlueprintCallable)
    bool InBattleField();
    
    UFUNCTION(BlueprintCallable)
    bool BP_SetGravitySphereState(TEnumAsByte<ETresStateID> InState);
    
    UFUNCTION(BlueprintCallable)
    void BP_RecoveryByMogMedal();
    
    UFUNCTION(BlueprintCallable)
    void BP_CleanUpForMogMedal();
    
    UFUNCTION(BlueprintCallable)
    bool AliveChaseBeamGenerator();
    
    UFUNCTION(BlueprintCallable)
    bool AliveCallGigasGenerator();
    
};

