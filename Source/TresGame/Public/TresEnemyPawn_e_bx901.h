#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "BX901_IdleFlyInfo.h"
#include "BX901_EffectGroupID.h"
#include "ETresEnemyDarkBaymaxPhase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_bx901.generated.h"

class UParticleSystem;
class ATresPlayerPawnBase;
class USQEX_ParticleAttachDataAsset;
class ATresCharPawnBase;
class USceneComponent;

UCLASS()
class ATresEnemyPawn_e_bx901 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FBX901_IdleFlyInfo m_IdlyeFlyInfo;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPitchResetRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRailSlideRotResetRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRailSlideRollScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDefaultRailSlideDistanceTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iForceStartSecondBattleHpPer;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ForceStartSecondBattleEventName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_HitWallDamageAvailability;
    
    UPROPERTY(EditAnywhere)
    USQEX_ParticleAttachDataAsset* m_EffectDataAsset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly)
    TArray<int32> m_BoolArray;
    
    UPROPERTY(EditDefaultsOnly)
    FBX901_EffectGroupID m_GroupID[9];
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DamageParticleClass;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_DamageParticleSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> m_DamageParticleSpawnAttackIDArray;
    
protected:
    UPROPERTY()
    ATresPlayerPawnBase* m_Player;
    
    UPROPERTY()
    ATresCharPawnBase* m_RailSlideLeadPawn;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRot;
    
public:
    ATresEnemyPawn_e_bx901();
    UFUNCTION(BlueprintCallable)
    void WindEffectStart();
    
    UFUNCTION(BlueprintCallable)
    void WindEffectEnd();
    
    UFUNCTION(BlueprintCallable)
    void SetWingSize(float InSize);
    
    UFUNCTION(BlueprintCallable)
    void SetPhase(ETresEnemyDarkBaymaxPhase NewPhase);
    
    UFUNCTION(BlueprintCallable)
    void SetHitPointPer(int32 InHpPer);
    
    UFUNCTION(BlueprintCallable)
    void SetCubeEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartRailSlide();
    
    UFUNCTION(BlueprintPure)
    bool IsRailSlideMoveMode() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayerRailSlideMoveMode() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFirstBattlePhase();
    
    UFUNCTION(BlueprintPure)
    bool GetRailSlideTransform(FTransform& outTF) const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetLocationOnWing(float inDistanceFromBody, bool inLeft, bool inRelative) const;
    
    UFUNCTION(BlueprintCallable)
    void EndCubeEffect();
    
    UFUNCTION()
    void DebugSetDarkNeedleRainNum(int32 InNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPhaseChange(ETresEnemyDarkBaymaxPhase NewPhase);
    
};

