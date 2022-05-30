#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex059.generated.h"

class UParticleSystem;
class UBehaviorTree;
class AActor;
class UTresSkeletalMeshComponent;
class UTresBodyCollPrimitive;
class UParticleSystemComponent;

UCLASS()
class ATresEnemyPawn_e_ex059 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    UTresSkeletalMeshComponent* m_pMaskSkeletalMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    UTresBodyCollPrimitive* m_pMaskBodyCollPrim;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AuraEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_MaskEyeEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_MaskBrokenEffect;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vMaskBrokenEffectLocationOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_rMaskBrokenEffectRotationOffset;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bMaskBrokenEffectOnChangePhase;
    
    UPROPERTY(EditInstanceOnly)
    AActor* m_AimOffsetTestActor;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_AuraEffectCmp;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_MaskAuraEffectCmp;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_MaskEyeEffectCmp;
    
    ATresEnemyPawn_e_ex059();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool ValidateRockShotMaskOff(FVector inTargetLocation, float inRollStartYawOffset, float inMaxRootHeightOffset, FText& outReason) const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool ValidateBackStep(float RootMotionScale, float HeightAcceptance, FText& outReason) const;
    
    UFUNCTION(BlueprintCallable)
    void SetDebugBT(UBehaviorTree* BehaviorTree);
    
    UFUNCTION(BlueprintPure)
    bool IsMasked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMaskBroken() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsInsideBattleArea(FVector inWorldLoc);
    
    UFUNCTION(BlueprintPure)
    float GetAtamaBoneAlpha();
    
    UFUNCTION(BlueprintPure)
    bool CanTurnToTargetOnMoveEnd();
    
    UFUNCTION(BlueprintPure)
    FRotator BP_GetAnimOffsetValue() const;
    
    UFUNCTION(BlueprintPure)
    float BP_GetAnimOffsetAlpha() const;
    
};

