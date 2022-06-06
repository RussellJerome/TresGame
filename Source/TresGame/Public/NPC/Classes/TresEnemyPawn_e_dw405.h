#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "ETresEnemyDw405BattleCount.h"
#include "RevengeAttacks_e_dw405.h"
#include "TresEnemyPawn_e_dw405.generated.h"

class UParticleSystem;
class ATresEnemyPawn_e_dw405_Avatar;
class UTresStateBase;
class ATresProjectileBase;
class USQEX_ParticleAttachDataAsset;
class USoundBase;

UCLASS()
class ATresEnemyPawn_e_dw405 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemyDw405BattleCount> m_BattleCount;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableStartDisappear: 1;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_EffectDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_AuraEffectDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableLockon: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEnemyPawn_e_dw405_Avatar> m_AvatarClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BarrierCrackerProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_MagicShotHitEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_PawnHitEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_PawnDirectHitEffect;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_ActionDefClass;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumDamageAirRecovery;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_DesertionIndex;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DesertionAnimStopOffsetTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DesertionFadeStartOffsetTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DesertionFadeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AirSmallDamageAfterDisappearTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LandReflectAfterDisappearTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AirReflectAfterDisappearTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BindAfterDisappearTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BarrierCrackerDamageAfterDisappearTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_ChanceStateClass;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FRevengeAttacks_e_dw405> m_RevengeComboAttacks;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_DieVoice;
    
    UPROPERTY(EditDefaultsOnly)
    float m_VolumeMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PitchMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_SocketName;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bFollow: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_EnableDrawDebugDistance: 1;
    
    UPROPERTY(EditAnywhere)
    float m_DebugDisableBonamikDistance;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bDebugEnableAttackClassSetting: 1;
    
public:
    UPROPERTY(EditAnywhere)
    uint8 m_bDebugEnableAvatarShowParam: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bDisableAvatarAppear: 1;
    
    ATresEnemyPawn_e_dw405();
    UFUNCTION(BlueprintCallable)
    void NotifyBattleStart();
    
    UFUNCTION(BlueprintPure)
    bool IsStyleChange() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLookAtLocation() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBattleCount() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugSetActionNo(int32 NO);
    
    UFUNCTION(BlueprintCallable)
    void BP_EnableBonamikAppear();
    
    UFUNCTION(BlueprintCallable)
    void BP_DisableBonamikAppear();
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugStyleChangeEnd();
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugSetBT(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugDisAppear();
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugAppear();
    
};

