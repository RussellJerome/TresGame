#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemy_e_ex054_VolcanoCraterAtkCollInfo.h"
#include "UObject/NoExportTypes.h"
#include "ETresEnemy_e_ex054_BattleStyle.h"
#include "TresEnemyPawn_e_ex054.generated.h"

class UParticleSystem;
class UTresSkeletalMeshComponent;
class AActor;
class USQEX_ParticleAttachDataAsset;
class UParticleSystemComponent;
class ATresTreeJumpActor_Common;
class UCurveFloat;
class UCapsuleComponent;

UCLASS()
class ATresEnemyPawn_e_ex054 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<TWeakObjectPtr<AActor>> m_ProjectileGeneratorArray;
    
public:
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_EffDataAsset;
    
protected:
    UPROPERTY(Export)
    UParticleSystemComponent* m_VolcanoEff;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_VolcanoEffData;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_AfroEff;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_pro_AfroHoudenSmcLightCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_pro_BreathSmcLightCurve;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* MyCollMesh;
    
protected:
    UPROPERTY()
    TArray<ATresTreeJumpActor_Common*> m_buildingJumpActorArray;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCapsuleComponent* MyBlowOffWindComponent;
    
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_FireNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireDistMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireDistMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireAngle2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FirePitchMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FirePitchMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_GravityScaleMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_GravityScaleMax;
    
    UPROPERTY()
    TArray<FTresEnemy_e_ex054_VolcanoCraterAtkCollInfo> m_VolcanoCraterAtkCollInfo;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AtkCollTime;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_BurnOmenEffData;
    
public:
    ATresEnemyPawn_e_ex054();
    UFUNCTION()
    void OnChangeGimmickPause(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    bool IsOnbuilding();
    
    UFUNCTION(BlueprintCallable)
    bool IsJump();
    
    UFUNCTION(BlueprintCallable)
    bool isBattleStyle(TEnumAsByte<ETresEnemy_e_ex054_BattleStyle> Style);
    
    UFUNCTION(BlueprintCallable)
    bool IsArmorBreakStun();
    
    UFUNCTION(BlueprintPure)
    FRotator GetNeckAimOffsetRot() const;
    
    UFUNCTION(BlueprintPure)
    float GetNeckAimOffsetAlpha() const;
    
    UFUNCTION(BlueprintPure)
    float GetNeckAimOffset() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    float GetAddMotionAlpha();
    
};

