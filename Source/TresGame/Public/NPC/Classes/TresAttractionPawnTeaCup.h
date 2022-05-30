#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttractionPawnBase.h"
#include "TresTeaCupPuddingData.h"
#include "UObject/NoExportTypes.h"
#include "TresAttractionPawnTeaCup.generated.h"

class UTresLockonTargetComponent;
class UParticleSystem;
class ATresProjectileBase;
class UCameraShake;
class USoundBase;
class USQEXSEADZeroOneSeComponent;
class UParticleSystemComponent;

UCLASS()
class ATresAttractionPawnTeaCup : public ATresAttractionPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_VfxSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bAttackStraight: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bWallHitReduce: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fInputRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fAttackInputRate;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UParticleSystem*> m_AppendEffectAsset;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjFinishCombo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCameraShake> m_CameraHitShake;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCameraShake> m_CameraLandingShake;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_RotationLoopSEAsset_PC;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_RotationLoopSEAsset_NPCA;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_RotationLoopSEAsset_NPCB;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Param_Speed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Param_WallHitAcc;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Param_PawnHitAcc;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Param_AttackAcc;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Param_RotAttackAcc;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Param_RotAddBrake;
    
private:
    UPROPERTY(Export)
    UTresLockonTargetComponent* m_pAttackTarget;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_EffectWD;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_EffectWnd;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_EffectBld;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_EffectFin;
    
    UPROPERTY(Export, Transient)
    USQEXSEADZeroOneSeComponent* m_RotationLoopSE;
    
public:
    UPROPERTY(EditDefaultsOnly)
    float m_Param_PuddingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Param_PuddingWallHitAcc;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Param_PuddingPawnHitAcc;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Param_PuddingAttackAcc;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Param_PuddingFallInvincibleTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_Param_PuddingFallNumWall;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_Param_PuddingFallNumEnemy;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Param_PuddingOscG;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Param_PuddingOscK;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Param_PuddingCamDistMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Param_PuddingCamDistRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Param_PuddingCamTarOfsZMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Param_PuddingCamTarOfsZRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Param_PuddingCamUseHeightMax;
    
private:
    UPROPERTY()
    TArray<FTresTeaCupPuddingData> m_PuddingArray;
    
    UPROPERTY()
    TArray<FTresTeaCupPuddingData> m_PuddingFallArray;
    
public:
    ATresAttractionPawnTeaCup();
    UFUNCTION(BlueprintCallable)
    void SetTeaCupMove(bool InMove);
    
    UFUNCTION(BlueprintPure)
    bool Pudding_IsReady() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetFinishTargetPos() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetColorNumber() const;
    
};

