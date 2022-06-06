#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TressEnemyEx021BlurParamater.h"
#include "ETresEnemyEx021ActionMode.h"
#include "TresEnemyPawn_e_ex021.generated.h"

class UParticleSystem;
class UTresAttackDefinitionWeaponBase;
class UParticleSystemComponent;
class UTresReactorComponent;
class ATresCameraEx021;
class USQEX_ParticleAttachDataAsset;
class ATresProjectileBase;

UCLASS()
class ATresEnemyPawn_e_ex021 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresReactorComponent* m_Reactor;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraEx021> m_PlayerCameraEx021;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresAttackDefinitionWeaponBase> m_RevengeAction;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ShotgunFireProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BBPearlShotgunFireProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> m_BBpearlBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_GlideMagicProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pFireBreathReflectEffectData;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_FireBreathReflectEffectCmp;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_RotatingExplosiveProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LongStunnedTime;
    
private:
    UPROPERTY(EditDefaultsOnly)
    int32 m_DoLongStunnedPearsentHP;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_EffectDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTressEnemyEx021BlurParamater> m_BlurParams;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NormalToAccelerationBlurParamTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AccelerationToNormalBlurParamTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_DoShakeOffPearsentHP;
    
public:
    UPROPERTY(EditInstanceOnly)
    uint8 m_bDebugEx021: 1;
    
    ATresEnemyPawn_e_ex021();
    UFUNCTION()
    bool ValidateBoardedRapidMove();
    
    UFUNCTION(BlueprintCallable)
    bool ShouldShakeOff();
    
    UFUNCTION(BlueprintCallable)
    bool IsActionMode(ETresEnemyEx021ActionMode mode);
    
private:
    UFUNCTION(BlueprintCallable)
    float GetMoveThornsElapsedTime();
    
    UFUNCTION(BlueprintCallable)
    float GetBoardedElapsedTime();
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableImmediatelyShakeOff();
    
    UFUNCTION(BlueprintCallable)
    void BP_SetEnableLongStunned(bool bEnableLongStunned);
    
    UFUNCTION(BlueprintPure)
    FRotator BP_GetAnimOffsetValue() const;
    
    UFUNCTION(BlueprintPure)
    float BP_GetAnimOffsetAlpha() const;
    
    UFUNCTION(BlueprintCallable)
    bool BP_DebugShakeOff();
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugSetBT();
    
    UFUNCTION(BlueprintCallable)
    bool BP_DebugRapidAccel();
    
    UFUNCTION(BlueprintCallable)
    bool BP_DebugFireBreath();
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugEndWeaponAttack();
    
};

